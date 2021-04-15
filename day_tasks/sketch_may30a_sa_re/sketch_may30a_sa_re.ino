//#include <Tone.h>

void setup() {
  pinMode(3,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);
pinMode(9,INPUT_PULLUP);
pinMode(11,INPUT_PULLUP);
analogRead(6);

}

void loop() {
  
if(digitalRead(3)==0)
{
  tone(6,523.25,500);
  delay(100);
}
if(digitalRead(5)==0)
{
  tone(6,587.33,500);
  delay(100);
}
/*
if(digitalRead(9)==0)
{
  tone(6,659.26,500);
  delay(100);
}
if(digitalRead(11)==0)
{
  tone(6,698.46,500);
  delay(100);
}
*/

}
