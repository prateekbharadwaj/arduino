void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
char c='a';
void loop() {
  // put your main code here, to run repeatedly:
 // if(Serial.available()>0)
 int d=c;
   Serial.print(c);
  Serial.print("=");
    Serial.println(d);
  c++;
  delay(500);

//}
}
