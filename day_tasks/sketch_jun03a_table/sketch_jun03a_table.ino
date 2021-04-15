void setup() {
 
  int i,n=1;
  Serial.begin(9600);
  Serial.println("HELLO WORLD");
  delay(10);
  for(i=1;i<=20;i++)
  {
    n=2*i;
    Serial.print("2*");
    Serial.print(i);
    Serial.print("=");
    Serial.println(n);
    delay(500);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  
  

}
