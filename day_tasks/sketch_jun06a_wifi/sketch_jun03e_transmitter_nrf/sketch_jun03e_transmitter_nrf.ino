#include<SPI.h>
#include<nRF24L01.h>
#include<RF24.h>
RF24 radio(9, 10);
const byte rxAddr[6] = "11111";
void setup()
{
  Serial.begin(9600);
  radio.begin();
  radio.setRetries(15, 15);
  radio.openWritingPipe(rxAddr);
  //radio.stopListening();

}



void loop() {
  // put your main code here, to run repeatedly:
  const char text[] = "HELLO";
  radio.write(&text, sizeof(text));
  Serial.println(text);
  delay(1000);
}
