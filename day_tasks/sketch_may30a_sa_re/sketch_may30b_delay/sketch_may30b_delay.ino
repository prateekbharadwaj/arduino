void setup() {
  // put your setup code here, to run once:
//analogRead(a3);
Serial.begin(9600);
digitalWrite(3,1);
  

}

void loop() {
  // put your main code here, to run repeatedly
  
    int i= analogRead(A3),j;
    //i=map(i,0,1023,0,255);
    Serial.println(i);
    
    digitalWrite(3,1);
    delay(i*10);
    digitalWrite(3,0);
   

}
