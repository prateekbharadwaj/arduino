/*#include<LiquidCrystal.h>
LiquidCrystal l1(8,9,10,11,12,13);*/
void setup() {
 Serial.begin(9600);
pinMode(8,OUTPUT);
  

}
void loop()
{
  //int i = random(1,1000);
  while(Serial.available()>0)
  {
  char y=Serial.read();
  if( y=='1')
  {
    digitalWrite(8,1);
    Serial.println(1);
  }
  else if(y=='0')
  {
    digitalWrite(8,0);
    Serial.println(0);
  }
  }
}
