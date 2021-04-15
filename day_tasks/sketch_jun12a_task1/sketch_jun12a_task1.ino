  #include<SPI.h>
  #include<nRF24L01.h>
  #include<RF24.h>
  RF24 radio(9,10);
  const byte rxAddr[6]="00052";
void setup() {
  // put your setup code here, to run once:
while(!Serial);
Serial.begin(9600);
radio.begin();
radio.openReadingPipe(0,rxAddr);
radio.startListening();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(radio.available())
  {
    char text[32]={0};
    radio.read(&text, sizeof(text));
    Serial.println(text);
  }

}
