int c, d, e, h, g, f, i , t = 0, flag = 0;
#include<LiquidCrystal.h>
#include<EEPROM.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
void setup()
{
EEPROM.write(0, 2);
EEPROM.write(1, 6);
EEPROM.write(2, 8);
EEPROM.write(3, 9);
EEPROM.write(4, 0);
EEPROM.write(5, 0);

lcd.begin(16, 2);
pinMode(8, INPUT_PULLUP);
pinMode(9, INPUT_PULLUP);
pinMode(10, INPUT_PULLUP);
pinMode(11, INPUT_PULLUP);
pinMode(12, INPUT_PULLUP);
pinMode(13, INPUT_PULLUP);
Serial.begin(9600);
i = 0;

lcd.setCursor(0, 0);
lcd.println("enter PIN ");
delay(1000);
lcd.clear();
}

void loop()
{
if (flag == 3)
{
lcd.clear();
lcd.print("Access denied ");
delay(5000);
lcd.clear();
delay(1000000000);
}


if (digitalRead(8) == 0)
{
c++;
delay(300);
if (c > 9)
{
c = 0;
}
}
lcd.setCursor(0, 0);
lcd.print(c);
if (digitalRead(9) == 0)
{
d++;
delay(300);
if (d > 9)
{
d = 0;
}
}
lcd.setCursor(1, 0);
lcd.print(d);
if (digitalRead(10) == 0)
{
e++;
delay(300);
if (e > 9)
{
e = 0;
}
}
lcd.setCursor(2, 0);
lcd.print(e);
if (digitalRead(11) == 0)
{
f++;
delay(300);
if (f > 9)
{
f = 0;
}
}
lcd.setCursor(3, 0);
lcd.print(f);
if (digitalRead(12) == 0)
{
g++;
delay(300);
if (g > 9)
{
g = 0;
}
}
lcd.setCursor(4, 0);
lcd.print(g);
if (digitalRead(13) == 0)
{
h++;
delay(300);
if (h > 9)
{
h = 0;
}
}
lcd.setCursor(5, 0);
lcd.print(h);
t++;
Serial.println(t);
if (t > 2500)
{
if (c == EEPROM.read(0) && d == EEPROM.read(1) && e == EEPROM.read(2) && f == EEPROM.read(3) && g == EEPROM.read(4) && EEPROM.read(5) == h)
{
lcd.clear();
lcd.println("Access granted ");
delay(5000);
delay(10000000000000);
}
else
{
flag++;
if (flag < 3)
{
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("try again");
delay(1000);
lcd.clear();
}
}
t = 0;
c = 0;
d = 0;
e = 0;
f = 0;
g = 0;
h = 0;
}
}
