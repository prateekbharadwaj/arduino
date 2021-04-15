#include<LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
}
int c = 0, t = 0, f = 0, a = 0, i = 0, k = 0, g = 1, d = 0, e = 0;
void loop() {
  lcd.setCursor(i, 0);
  // put your main code here, to run repeatedly:
  if (digitalRead(7) == 0)
  {
    f = 1;
  }
  if (f == 1)
  {
    if (digitalRead(7) == 0) {
      while (digitalRead(7) == 0)
      {
        a++;
        //Serial.println(a);
        delay(100);
      }
      if (a >= 25)
      {
        c = 4;
      }
      else
      {
        c++;
      }
      delay(200);
      //Serial.println(c);
    }
    if (c == 1)
    {

      Serial.println("a");
      lcd.print("a");
      //Serial.println(c);
    }
    else if (c == 2)
    {

      Serial.println("b");
      lcd.print("b");
      //Serial.println(c);
    }
    else if (c == 3)
    {
      Serial.println("c");
      lcd.print("c");
      //Serial.println(c);
    }
    else if (c == 4)
    {
      Serial.println("2");
      lcd.print("2");
      //Serial.println(c);
    }
    k = 1;

  }
  if (digitalRead(4) == 0)
  {
    f = 2;
  }
  if (f == 2)
  {
    if (digitalRead(4) == 0) {
      while (digitalRead(4) == 0)
      {
        a++;
        //Serial.println(a);
        delay(100);
      }
      if (a >= 25)
      {
        d = 4;
      }
      else
      {
        d++;
      }
      delay(200);
      //Serial.println(c);
    }
    if (d == 1)
    {
      Serial.println("d");
      lcd.print("d");
      //Serial.println(c);
    }
    else if (d == 2)
    {
      Serial.println("e");
      lcd.print("e");
      //Serial.println(c);
    }
    else if (d == 3)
    {
      Serial.println("f");
      lcd.print("f");
      //Serial.println(c);
    }
    else if (d == 4)
    {
      Serial.println("3");
      lcd.print("3");
      //Serial.println(c);
    }
    k = 1;

  }
  if (digitalRead(3) == 0)
  {
    f = 3;
  }
  if (f == 3)
  {
    if (digitalRead(3) == 0) {
      while (digitalRead(3) == 0)
      {
        a++;
        //Serial.println(a);
        delay(100);
      }
      if (a >= 25)
      {
        e = 4;
      }
      else
      {
        e++;
      }
      delay(200);
      //Serial.println(c);
    }
    if (e == 1)
    {

      Serial.println("g");
      lcd.print("g");
      //Serial.println(c);
    }
    else if (e == 2)
    {

      Serial.println("h");
      lcd.print("h");
      //Serial.println(c);
    }
    else if (e == 3)
    {
      Serial.println("i");
      lcd.print("i");
      //Serial.println(c);
    }
    else if (e == 4)
    {
      Serial.println("4");
      lcd.print("4");
      //Serial.println(c);
    }
    k = 1;
  }
  t++;
  //Serial.println(t);
  if (t >= 500)
  {
    f = 0;
    t = 0;
    c = 0;
    d = 0;
    e = 0;
    a = 0;
    if (k == 1)
    {
      i++;
      k = 0;
    }
  }
  Serial.println(k);
}
