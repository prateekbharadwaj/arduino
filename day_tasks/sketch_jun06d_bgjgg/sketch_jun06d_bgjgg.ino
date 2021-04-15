#include<LiquidCrystal.h>
LiquidCrystal l1(8,9,10,11,12,13);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//lcd.print("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("hello world");
delay(5000);
}
