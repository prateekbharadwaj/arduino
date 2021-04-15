#include <NewPing.h>

//recieving pot
//sending led
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#define button 4
RF24 radio(9, 10); // CE, CSN
const byte addresses[][6] = {"0153", "0151"};
boolean buttonState = 1;
void setup() {
  Serial.begin(9600);
pinMode(button, INPUT_PULLUP);
pinMode(6, OUTPUT);
radio.begin();
radio.openWritingPipe(addresses[0]); // 00001
radio.openReadingPipe(1,addresses[1]);// 00002
radio.setPALevel(RF24_PA_MIN);
}
void loop() {
delay(5);
radio.startListening();
if ( radio.available()) {
while (radio.available()) {
int angleV = 100;
radio.read(&angleV, sizeof(angleV));
analogWrite(6, angleV);
}
delay(200);
radio.stopListening();
buttonState = digitalRead(button);
Serial.print(buttonState);
radio.write(&buttonState, sizeof(buttonState));
}
}
