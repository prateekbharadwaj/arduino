
void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT_PULLUP);
  pinMode(4,OUTPUT);
  Serial.begin(9600);

}
int c=0,t;
void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(8)==0){
  while(digitalRead(8)==0);
  c++;
  delay(500);
  Serial.println(c);
}
if(c==1)
{
   Serial.println("a");
    Serial.println(c);
}
else
{
  digitalWrite(4,0);
}
}
