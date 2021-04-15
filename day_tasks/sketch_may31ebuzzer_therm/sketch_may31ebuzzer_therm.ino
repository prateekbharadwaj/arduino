void setup() {
  // put your setup code here, to run once:
  //analogRead(a3);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);


}
int c = 0;
void loop() {
  // put your main code here, to run repeatedly

  int i = analogRead(A3);
   i=map(i,0,1023,0,100);
  Serial.println(i);
  if ( i <50)
  {

    if (digitalRead(7) == 1)
     { c++;
      delay(100);
        Serial.println(c);
      
     }
    //  digitalWrite(5,i);
    // digitalWrite(3,i);
    if (c ==0)
    { digitalWrite(5, 1);
      digitalWrite(3, 1);
    }
    else
    { digitalWrite(5, 0);
      digitalWrite(3, 0);
        Serial.println(c);
    }


  }
  else
  { c = 0;
    digitalWrite(3, 0);
    digitalWrite(5, 0);
    delay(200);
  }

}
