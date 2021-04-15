#include <SoftwareSerial.h>
#include <stdlib.h>
#define DEBUG true
#define SSID "rajveer" // "SSID-WiFiname"
#define PASS "rajveers" // "password"
#define IP "184.106.153.149" // thingspeak.com ip

String msg = "GET /update?key=6V9EJ17XBLXNK8DF"; //change it with your api key like "GET /update?key=Your Api Key"
SoftwareSerial esp8266(2, 3);
String tempC;
int error;
void setup()
{
esp8266.begin(115200);Serial.begin(115200); //or use default 115200.

Serial.println("AT");
esp8266.println("AT");
delay(5000);
if (esp8266.find("OK"))
{
connectWiFi();
}
}

void loop()
{
start: //label
error = 0;
int val = 1;
for (int i = 0; i < 10; i++)
{
val += i;
tempC = val;
updateTemp();
delay(2000);
}
char buffer[10];

if (error == 1)
{
goto start; //go to label "start"
}
delay(3600);
}

void updateTemp()
{
String cmd = "AT+CIPSTART=\"TCP\",\"";
cmd += IP;
cmd += "\",80";
Serial.println(cmd);
esp8266.println(cmd);
delay(2000);
if (esp8266.find("Error"))
{
return;
}
cmd = msg ;
cmd += "&field1="; //field 1 for temperature
cmd += tempC;
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
