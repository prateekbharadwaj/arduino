#include<LiquidCrystal.h>
LiquidCrystal l1(8,9,10,11,12,13);
void setup() {
  Serial.begin(9600);
  pinMode(6,INPUT);
  l1.begin(16,2);
  
}
int c=0;
void loop() {
  // put your main code here, to run repeatedly:
  
  l1.setCursor(2,0);
  if(digitalRead(6)==1)
  { c++;
  delay(300);
  }
  l1.print(c);
  
  
  
 // else
 //   l1.clear();
}
 /* int i=digitalRead(6);
  Serial.println(i);*/
