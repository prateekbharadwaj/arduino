void setup() {
  // put your setup code here, to run once:
//analogRead(a3);
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly
  
    int i= analogRead(A3);
    i=map(i,0,1023,0,102);
    Serial.println(i);
   /* if( i<=65)
    {
      digitalWrite(3,i);
      digitalWrite(5,0);
      digitalWrite(6,0);
      digitalWrite(9,0);
      delay(200);
    }
    else if(i>65&&i<80)
    {
      digitalWrite(3,i);
      digitalWrite(5,i);
      digitalWrite(6,0);
      digitalWrite(9,0);
      delay(200);
    }
    else if (i>80&&i<95)
    {
        digitalWrite(3,i);
      digitalWrite(5,i);
      digitalWrite(6,i);
      digitalWrite(9,0);
      delay(200);
    }
    else
    {
      digitalWrite(3,i);
      digitalWrite(5,i);
      digitalWrite(6,i);
      digitalWrite(9,i);
      delay(200);
    }*/delay(1000);

}
