// let's built game
int ctr1 = 0, sp1 = 0, sp2 = 0, ctr2 = 0,s1=0,s2=0;
#include<LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(2, 1);
  lcd.print("starting game");
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  delay(1000);
  lcd.clear();
  

  // put your setup code here, to run once:
  Serial.begin(9600);
}
int flag = 0;
void loop() {
  int dl1 = 200;
  int y, i;
 
  if (flag == 1)
  {
    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print(" GAME OVER");
    delay(2000);
     lcd.setCursor(3, 0);
     lcd.print(" score 1=");
     lcd.print(s1);
       lcd.setCursor(3, 1);
     lcd.print(" score 2=");
     lcd.print(s2);
    
    delay(5000);
    lcd.clear();
  }
   if(s1==3||s2==3)
  {
    lcd.clear();
    lcd.setCursor(2, 0);
    lcd.print("final score ");
    lcd.setCursor(0,1);
    if(s1>s2)
    {
      lcd.print("winner:-player 1 ");
    }
    else
    {
       lcd.print("winner:-player 2 ");
    }
    delay(1000000);
  }
  for ( i = 1; i <= 14; i++)
  {

    int a = digitalRead(5), b = digitalRead(6);
    if (a == 0) {
      ctr1 = ctr1 + 1;
      if (ctr1 == 2)
      {
        ctr1 = 0;

      }
      delay(dl1);
    }
    if (b == 0) {
      ctr2 = ctr2 + 1;
      if (ctr2 == 2)
      {
        ctr2 = 0;

      }
      delay(dl1);
    }
    lcd.setCursor(0, ctr1);
    lcd.print("!");
    if (ctr1 == 0)
    {
      lcd.setCursor(0, 1);
      lcd.print(" ");
    }
    else
    {
      lcd.setCursor(0, 0);
      lcd.print(" ");
    }
    lcd.setCursor(15, ctr2);
    lcd.print("!");
    if (ctr2 == 0)
    {
      lcd.setCursor(15, 1);
      lcd.print(" ");
    }
    else
    {
      lcd.setCursor(15, 0);
      lcd.print(" ");
    }


    y = random(0, 2);
    lcd. setCursor(i, y);
    lcd.print("o");
    delay(500);

    lcd. setCursor(i, y);
    lcd.print(" ");

  }
  i--;
  if (y == ctr2 && i == 14)
  {
    
    for (i = 14; i >= 1; i--)
    {

      int a = digitalRead(5), b = digitalRead(6);
      if (a == 0) {
        ctr1 = ctr1 + 1;
        if (ctr1 == 2)
        {
          ctr1 = 0;

        }
        delay(dl1);
      }
      if (b == 0) {
        ctr2 = ctr2 + 1;
        if (ctr2 == 2)
        {
          ctr2 = 0;

        }
        delay(dl1);
      }
      lcd.setCursor(0, ctr1);
      lcd.print("!");
      if (ctr1 == 0)
      {
        lcd.setCursor(0, 1);
        lcd.print(" ");
      }
      else
      {
        lcd.setCursor(0, 0);
        lcd.print(" ");
      }
      lcd.setCursor(15, ctr2);
      lcd.print("!");
      if (ctr2 == 0)
      {
        lcd.setCursor(15, 1);
        lcd.print(" ");
      }
      else
      {
        lcd.setCursor(15, 0);
        lcd.print(" ");
      }


      y = random(0, 2);
      lcd. setCursor(i, y);
      lcd.print("o");
      delay(500);

      lcd. setCursor(i, y);
      lcd.print(" ");

    }
    i++;//Serial.println(i);
    if (y == ctr1 && i == 1)
    {
      flag = 0;//Serial.println(ctr1);Serial.println(y);Serial.println(flag);Serial.println(i);
    }
    else
    {
      flag = 1;s2++;//Serial.println(ctr1);Serial.println(y);Serial.println(flag);Serial.println(i);
    }
  }
  else
  {
    flag = 1;s1++;//Serial.println(2);
  }
}
