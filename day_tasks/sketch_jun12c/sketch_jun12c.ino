#include <SPI.h>
#include "RF24.h"

int msg[1]; //SCK -> 13//MISO -> 12//MOSI -> 11//CSN -> 10//CE -> 9
RF24 radio(9, 10);
const uint64_t pipe = 0b10111;
void setup()
{
  radio.begin();
  Serial.begin(115200);
  radio.openWritingPipe(pipe);
}
void loop()
{
   int i = analogRead(A0);
   int i1=map(i,0,1023,0,255);
  msg[0] = i1;
  radio.write(msg, 1);
  
  Serial.println(msg[0]);
  delay(1000);
}
