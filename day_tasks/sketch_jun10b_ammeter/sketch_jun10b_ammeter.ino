#include<LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

void setup() {
   Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
  int v1=analogRead(A0),v2=analogRead(A1),r=10,v;
  v=v1-v2;
  float c=(v*0.00488)/r;
  lcd.print("current= ");
  lcd.print(c);
   lcd.print("mA");
   Serial.println(v1);
    Serial.println(v2);
  Serial.println(v);
  Serial.println(r);
  Serial.println(c);
  

  // put your setup code here, to run once:
 
}

void loop() {
  // put your main code here, to run repeatedly:

}
