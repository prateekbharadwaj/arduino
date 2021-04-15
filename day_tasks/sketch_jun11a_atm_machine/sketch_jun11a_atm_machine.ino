#include<LiquidCrystal.h>
#include<EEPROM.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
    pinMode(2, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  EEPROM.write(0,2);
  EEPROM.write(1,6);
  EEPROM.write(2,8);
  EEPROM.write(3,9);
  EEPROM.write(4,0);
  EEPROM.write(5,0);
  lcd.print("welcome to atm");
  delay(1000);
  lcd.clear();
  lcd.print("enter pin");
  delay(1000);
  lcd.clear();
}
int c = 0, t = 0, f = 0, p = 0, i = 0, k = 0, g = 1, d = 0, e = 0,e1=0,e2=0,e3=0,q=1,r=0,w=0,b=0;
int a[6];
void loop() {
  lcd.setCursor(i, 0);
  if(r==3)
  {
    lcd.clear();
    lcd.print("atm block");
    delay(3000);
    lcd.clear();
    delay(10000);
  }
  if(q==1)
  {

  if (digitalRead(7) == 0)
  {
    f = 1;
  }
  if (f == 1)
  {
    if (digitalRead(7) == 0) {
      while (digitalRead(7) == 0)
      {
        p++;
        //Serial.println(a);
        delay(100);
      }
      if (p >= 40)
      {
        c = 10;
      }
      else
      {
        c++;
      }
      delay(200);
      //Serial.println(c);
    }
    if (c == 10)
    {

      Serial.println("0");
      lcd.print("0");
      a[i]=0;
      //Serial.println(c);
    }
     else if (c == 1)
    {

      Serial.println("1");
      lcd.print("1");
      a[i]=2;
      //Serial.println(c);
    }
    else if (c == 2)
    {

      Serial.println("2");
      lcd.print("2");
      a[i]=2;
      //Serial.println(c);
    }
    else if (c == 3)
    {
      Serial.println("3");
      lcd.print("3");
      a[i]=3;
      //Serial.println(c);
    }
    else if (c == 4)
    {
      Serial.println("4");
      lcd.print("4");
      a[i]=4;
      //Serial.println(c);
    }
         else if (c == 5)
    {

      Serial.println("5");
      lcd.print("5");
      a[i]=5;
      //Serial.println(c);
    }
    else if (c == 6)
    {

      Serial.println("6");
      lcd.print("6");
      a[i]=6;
      //Serial.println(c);
    }
    else if (c == 7)
    {
      Serial.println("7");
      lcd.print("7");
      a[i]=7;
      //Serial.println(c);
    }
    else if (c == 8)
    {
      Serial.println("8");
      lcd.print("8");
      a[i]=8;
      //Serial.println(c);
    }
        else if (c == 9)
    {
      Serial.println("9");
      lcd.print("9");
      a[i]=9;
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
        p++;
        //Serial.println(a);
        delay(100);
      }
      if (p >= 40)
      {
        d = 10;
      }
      else
      {
        d++;
      }
      delay(200);
      //Serial.println(c);
    }
    if (d == 10)
    {
      Serial.println("0");
      lcd.print("0");
      a[i]=0;
      //Serial.println(c);
    }
        else if (d == 1)
    {
      Serial.println("1");
      lcd.print("1");
      a[i]=1;
      //Serial.println(c);
    }
    else if (d == 2)
    {
      Serial.println("2");
      lcd.print("2");
      a[i]=2;
      //Serial.println(c);
    }
    else if (d == 3)
    {
      Serial.println("3");
      lcd.print("3");
      a[i]=3;
      //Serial.println(c);
    }
    else if (d == 4)
    {
      Serial.println("4");
      lcd.print("4");
      a[i]=4;
      //Serial.println(c);
    }
    if (d == 5)
    {
      Serial.println("5");
      lcd.print("5");
      a[i]=5;
      //Serial.println(c);
    }
    else if (d == 6)
    {
      Serial.println("6");
      lcd.print("6");
      a[i]=6;
      //Serial.println(c);
    }
    else if (d == 7)
    {
      Serial.println("7");
      lcd.print("7");
      a[i]=7;
      //Serial.println(c);
    }
    else if (d == 8)
    {
      Serial.println("8");
      lcd.print("8");
      a[i]=8;
      //Serial.println(c);
    }
        else if (d == 9)
    {
      Serial.println("9");
      lcd.print("9");
      a[i]=9;
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
        p++;
        //Serial.println(a);
        delay(100);
      }
      if (p >= 40)
      {
        e = 10;
      }
      else
      {
        e++;
      }
      delay(200);
      //Serial.println(c);
    }
    if (e == 10)
    {

      Serial.println("0");
      lcd.print("0");
      a[i]=0;
      //Serial.println(c);
    }
        else if (e == 1)
    {

      Serial.println("1");
      lcd.print("1");
      a[i]=1;
      //Serial.println(c);
    }
    else if (e == 2)
    {

      Serial.println("2");
      lcd.print("2");
       a[i]=2;
      //Serial.println(c);
    }
    else if (e == 3)
    {
      Serial.println("3");
      lcd.print("3");
       a[i]=3;
      //Serial.println(c);
    }
    else if (e == 4)
    {
      Serial.println("4");
      lcd.print("4");
       a[i]=4;
      //Serial.println(c);
    }
    else if (e == 5)
    {

      Serial.println("5");
      lcd.print("5");
      a[i]=5;
      //Serial.println(c);
    }
    else if (e == 6)
    {

      Serial.println("6");
      lcd.print("6");
       a[i]=6;
      //Serial.println(c);
    }
    else if (e == 7)
    {
      Serial.println("7");
      lcd.print("7");
       a[i]=7;
      //Serial.println(c);
    }
    else if (e == 8)
    {
      Serial.println("8");
      lcd.print("8");
       a[i]=8;
      //Serial.println(c);
    }
        else if (e == 9)
    {
      Serial.println("9");
      lcd.print("9");
       a[i]=9;
      //Serial.println(c);
    }
    k = 1;
  }
    if (digitalRead(2) == 0)
  {
    f = 4;
  }
  if (f == 4)
  {
    if (digitalRead(2) == 0) {
      while (digitalRead(2) == 0)
      {
        p++;
        //Serial.println(a);
        delay(100);
      }
      if (p >= 40)
      {
        e1 = 10;
      }
      else
      {
        e1++;
      }
      delay(200);
      //Serial.println(c);
    }
    if (e1 == 10)
    {

      Serial.println("0");
      lcd.print("0");
      a[i]=0;
      //Serial.println(c);
    }
        else if (e1 == 1)
    {

      Serial.println("1");
      lcd.print("1");
      a[i]=1;
      //Serial.println(c);
    }
    else if (e1 == 2)
    {

      Serial.println("2");
      lcd.print("2");
       a[i]=2;
      //Serial.println(c);
    }
    else if (e1 == 3)
    {
      Serial.println("3");
      lcd.print("3");
       a[i]=3;
      //Serial.println(c);
    }
    else if (e1 == 4)
    {
      Serial.println("4");
      lcd.print("4");
       a[i]=4;
      //Serial.println(c);
    }
    else if (e1 == 5)
    {

      Serial.println("5");
      lcd.print("5");
      a[i]=5;
      //Serial.println(c);
    }
    else if (e1 == 6)
    {

      Serial.println("6");
      lcd.print("6");
       a[i]=6;
      //Serial.println(c);
    }
    else if (e1 == 7)
    {
      Serial.println("7");
      lcd.print("7");
       a[i]=7;
      //Serial.println(c);
    }
    else if (e1 == 8)
    {
      Serial.println("8");
      lcd.print("8");
       a[i]=8;
      //Serial.println(c);
    }
        else if (e1 == 9)
    {
      Serial.println("9");
      lcd.print("9");
       a[i]=9;
      //Serial.println(c);
    }
    k = 1;
  }
    if (digitalRead(6) == 0)
  {
    f = 5;
  }
  if (f == 5)
  {
    if (digitalRead(6) == 0) {
      while (digitalRead(6) == 0)
      {
        p++;
        //Serial.println(a);
        delay(100);
      }
      if (p >= 40)
      {
        e2 = 10;
      }
      else
      {
        e2++;
      }
      delay(200);
      //Serial.println(c);
    }
    if (e2 == 10)
    {

      Serial.println("0");
      lcd.print("0");
      a[i]=0;
      //Serial.println(c);
    }
        else if (e2 == 1)
    {

      Serial.println("1");
      lcd.print("1");
      a[i]=1;
      //Serial.println(c);
    }
    else if (e2 == 2)
    {

      Serial.println("2");
      lcd.print("2");
       a[i]=2;
      //Serial.println(c);
    }
    else if (e2 == 3)
    {
      Serial.println("3");
      lcd.print("3");
       a[i]=3;
      //Serial.println(c);
    }
    else if (e2 == 4)
    {
      Serial.println("4");
      lcd.print("4");
       a[i]=4;
      //Serial.println(c);
    }
    else if (e2 == 5)
    {

      Serial.println("5");
      lcd.print("5");
      a[i]=5;
      //Serial.println(c);
    }
    else if (e2 == 6)
    {

      Serial.println("6");
      lcd.print("6");
       a[i]=6;
      //Serial.println(c);
    }
    else if (e2 == 7)
    {
      Serial.println("7");
      lcd.print("7");
       a[i]=7;
      //Serial.println(c);
    }
    else if (e2 == 8)
    {
      Serial.println("8");
      lcd.print("8");
       a[i]=8;
      //Serial.println(c);
    }
        else if (e2 == 9)
    {
      Serial.println("9");
      lcd.print("9");
       a[i]=9;
      //Serial.println(c);
    }
    k = 1;
  }
    if (digitalRead(5) == 0)
  {
    f = 6;
  }
  if (f == 6)
  {
    if (digitalRead(5) == 0) {
      while (digitalRead(5) == 0)
      {
        p++;
        //Serial.println(a);
        delay(100);
      }
      if (p >= 40)
      {
        e3 = 10;
      }
      else
      {
        e3++;
      }
      delay(200);
      //Serial.println(c);
    }
    if (e3 == 10)
    {

      Serial.println("0");
      lcd.print("0");
      a[i]=0;
      //Serial.println(c);
    }
        else if (e3 == 1)
    {

      Serial.println("1");
      lcd.print("1");
      a[i]=1;
      //Serial.println(c);
    }
    else if (e3 == 2)
    {

      Serial.println("2");
      lcd.print("2");
       a[i]=2;
      //Serial.println(c);
    }
    else if (e3 == 3)
    {
      Serial.println("3");
      lcd.print("3");
       a[i]=3;
      //Serial.println(c);
    }
    else if (e3 == 4)
    {
      Serial.println("4");
      lcd.print("4");
       a[i]=4;
      //Serial.println(c);
    }
    else if (e3 == 5)
    {

      Serial.println("5");
      lcd.print("5");
      a[i]=5;
      //Serial.println(c);
    }
    else if (e3 == 6)
    {

      Serial.println("6");
      lcd.print("6");
       a[i]=6;
      //Serial.println(c);
    }
    else if (e3 == 7)
    {
      Serial.println("7");
      lcd.print("7");
       a[i]=7;
      //Serial.println(c);
    }
    else if (e3 == 8)
    {
      Serial.println("8");
      lcd.print("8");
       a[i]=8;
      //Serial.println(c);
    }
        else if (e3 == 9)
    {
      Serial.println("9");
      lcd.print("9");
       a[i]=9;
      //Serial.println(c);
    }
    k = 1;
  }
  t++;
  //Serial.println(t);
  if (t >= 800)
  {
    f = 0;
    t = 0;
    c = 0;
    d = 0;
    e = 0;
    e1=0;
    e2=0;
    e3=0;
    p = 0;
    if (k == 1)
    {
      i++;
      k = 0;
    }
  }
  Serial.println(k);
}
if(i==6)
{
  q=0;
}
if(q==0)
{
for(int j=0;j<6;j++)
{
  b=EEPROM.read(j);
  if(b==a[j])
  {
    w++;
  }
}
if(w==6)
{
  delay(1000);
  lcd.clear();
  lcd.print("password match");
  Serial.println("password match");
  delay(2000);
  lcd.clear();
  lcd.print("go ahead");
  delay(2000);
  lcd.clear();
  delay(100000);
  
}
else
{
w=0;
r++;
q=1;
lcd.print("retry");
Serial.println("retry");
delay(2000);
lcd.clear();
}
}
Serial.println(q);
}
