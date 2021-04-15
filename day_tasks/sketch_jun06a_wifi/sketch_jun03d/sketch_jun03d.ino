#include<LiquidCrystal.h>
LiquidCrystal lcd {8, 9, 10, 11, 12, 13};
String sid;
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(13, 1);
}

void loop() {
  char c;
  while (Serial.available() > 0)
  { c = Serial.read();
    sid = sid + c;
    delay(10);
    
  }
  if (sid.length() > 0)
  {
    lcd.print(sid);
        if (sid == "on")
        {
          Serial.println("led on");
          digitalWrite(13, 1);
          delay(1000);
        }
       else if (sid == "off")
        {  Serial.println("led off");
          digitalWrite(13, 0);
          delay(1000);
        }
      }
      sid = "";
    }
