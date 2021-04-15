void setup() {
  // put your setup code here, to run once:
//analogRead(a3);
Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly
  
    int i= analogRead(A3);
    i=map(i,0,1023,0,255);
    Serial.println(i);
    analogWrite(3,i);
    delay(200);

}
