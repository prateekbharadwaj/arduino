#include<LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

void setup() {
   Serial.begin(9600);
  lcd.begin(16, 2);
 
  
 // Serial.println(c);
  

  // put your setup code here, to run once:
 
}

void loop() {
   lcd.setCursor(0, 0);
  int v1=analogRead(A0),v2=analogRead(A1),r1=10000;
  float v,r;
  v=(v1)/1024.0;
  r=(r1*v)/(1-v);
 // float c=(v*0.00488)/r;
  lcd.print("resistance=");
  lcd.setCursor(0,1);
  lcd.print(r);
  lcd.print("ohm");
  Serial.println(v1);
  Serial.println(v);
   Serial.println(r);

 // Serial.println(r);
  delay(1000);

}
