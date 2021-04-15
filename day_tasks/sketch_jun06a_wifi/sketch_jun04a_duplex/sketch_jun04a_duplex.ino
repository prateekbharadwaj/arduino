 #include<SPI.h>
  #include<nRF24L01.h>
  #include<RF24.h>
  RF24 radio(9,10);
  const byte rxAddr[6]="22222";
    const byte rxAdd[6]="11111";
void setup() {
  // put your setup code here, to run once:
while(!Serial);
Serial.begin(9600);
radio.begin();
radio.openReadingPipe(0,rxAddr);

    //radio.begin();
    radio.setRetries(15,15);
    radio.openWritingPipe(rxAdd);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5);
  radio.startListening();

  if(radio.available())
  {
    while(radio.available())
    {
    char text[32]={0};
    radio.read(&text, sizeof(text));
    Serial.println(text);
    }
  }
  delay(5);
  radio.stopListening();
  const char text[]="group project";
radio.write(&text,sizeof(text));

}
