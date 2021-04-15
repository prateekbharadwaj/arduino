#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
#include <SoftwareSerial.h>
#include <stdlib.h>
#define DEBUG true
#define SSID "rajveer" // "SSID-WiFiname"
#define PASS "rajveers" // "password"
#define IP "184.106.153.149" // thingspeak.com ip

String msg = "GET /update?key=6V9EJ17XBLXNK8DF"; //change it with your api key like "GET /update?key=Your Api Key"
SoftwareSerial esp8266(2, 3);

int vote1 = 0;
int vote2 = 0;
int vote = 0;
int error;
void setup()
{
 esp8266.begin(115200);
 Serial.begin(115200); //or use default 115200.

Serial.println("AT");
esp8266.println("AT");
delay(5000);
if (esp8266.find("OK"))
{
connectWiFi();
}

  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
  lcd.print("Voting Machine");

  /* digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);*/
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("BJP");
  lcd.setCursor(8, 0);
  lcd.print("BJD");

}
int flag = 0;
void loop()
{
  if (flag == 0)
  {
    Serial.println(vote);
    lcd.setCursor(0, 0);
    lcd.print("BJP");
    lcd.setCursor(1, 1);
    lcd.print(vote1);
    lcd.setCursor(8, 0);
    lcd.print("BJD");
    lcd.setCursor(9, 1);
    lcd.print(vote2);

    if (digitalRead(5) == 0&&flag==0)
    {
      vote1++;
      updatevote1();
      delay(500);
    }
    // while(digitalRead(5)==0);
    if (digitalRead(6) == 0&&flag==0)
    {
      vote2++;
      updatevote2();
      delay(500);
    }
    //  while(digitalRead(6)==0);

    if (digitalRead(4) == 0)
    {
      int vote = vote1 + vote2;
      if (vote > 0)
      {
        if (vote1 > vote2 )
        {
          lcd.clear();
          lcd.print("BJP Wins");
          delay(10000);
          lcd.clear();
        }
        else if (vote2 > vote1)
        {
          lcd.clear();
          lcd.print("INC Wins");
          delay(10000);
          lcd.clear();
        }
        else
        {
          lcd.clear();
          lcd.print("   Tie Up Or   ");
          lcd.setCursor(0, 1);
          lcd.print("   No Result   ");
          delay(10000);
          lcd.clear();
        }
        flag = 1;
      }
      else
      {
        lcd.clear();
        lcd.print("No Voting....");
        delay(10000);
        lcd.clear();
      }
    }
  /*  else
      {
      vote1=0;
      vote2=0;
      vote=0;
      lcd.clear();
      }*/
    delay(1000);
    flag = 0;
  }
}
void updatevote1()
{
String cmd = "AT+CIPSTART=\"TCP\",\"";
cmd += IP;
cmd += "\",80";
Serial.println(cmd);
esp8266.println(cmd);
delay(500);
if (esp8266.find("Error"))
{
return;
}
cmd = msg ;
cmd += "&field1="; //field 1 for temperature
cmd += vote1;
cmd += "\r\n";
Serial.print("AT+CIPSEND=");
esp8266.print("AT+CIPSEND=");
Serial.println(cmd.length());
esp8266.println(cmd.length());
if (esp8266.find(">"))
{
Serial.print(cmd);
esp8266.print(cmd);
}
else
{
Serial.println("AT+CIPCLOSE");
esp8266.println("AT+CIPCLOSE");
//Resend...
error = 1;
}
}
void updatevote2()
{
String cmd = "AT+CIPSTART=\"TCP\",\"";
cmd += IP;
cmd += "\",80";
Serial.println(cmd);
esp8266.println(cmd);
delay(500);
if (esp8266.find("Error"))
{
return;
}
cmd = msg ;
cmd += "&field2="; //field 1 for temperature
cmd += vote2;
cmd += "\r\n";
Serial.print("AT+CIPSEND=");
esp8266.print("AT+CIPSEND=");
Serial.println(cmd.length());
esp8266.println(cmd.length());
if (esp8266.find(">"))
{
Serial.print(cmd);
esp8266.print(cmd);
}
else
{
Serial.println("AT+CIPCLOSE");
esp8266.println("AT+CIPCLOSE");
//Resend...
error = 1;
}
}
boolean connectWiFi()
{
Serial.println("AT+CWMODE=1");
esp8266.println("AT+CWMODE=1");
delay(2000);
String cmd = "AT+CWJAP=\"";
cmd += SSID;
cmd += "\",\"";
cmd += PASS;
cmd += "\"";
Serial.println(cmd);
esp8266.println(cmd);
delay(5000);
if (esp8266.find("OK"))
{
return true;
}
else
{
return false;
}
}
