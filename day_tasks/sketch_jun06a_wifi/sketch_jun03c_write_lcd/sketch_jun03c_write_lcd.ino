#include<LiquidCrystal.h>
LiquidCrystal lcd{8,9,10,11,12,13};
String sid;
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
pinMode(13,1);
}

void loop() { char c;
   if(Serial.available()>0)
 { c=Serial.read();
  sid=sid+c;
  delay(10);
 /*int i=0;
 while(1)
 {
  if(isalpha(c[i]))
  {
    i++;
  }
  else
  break;
 }
 c[i]="";*/
 }
 if(sid.length()>0)
 {
 lcd.print(sid);
 delay(1000);
 }

 /*if(c=='y')
 {
  digitalWrite(13,1);
 }
  if(c=='n')
  {
    digitalWrite(13,0);
  }
 */
 sid="";
 }
