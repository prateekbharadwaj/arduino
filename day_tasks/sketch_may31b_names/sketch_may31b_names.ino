#include<LiquidCrystal.h>
LiquidCrystal l1(8,9,10,11,12,13);
void setup() {
  pinMode(5,INPUT_PULLUP);
 pinMode(4,INPUT_PULLUP);
 l1.begin(16,2);
 
}
int c=0;
void loop() {
if(digitalRead(5)==0)
{
  c++;
  delay(500);
}
l1.setCursor(1,0);
switch(c)
{case 0: l1.print("hello world");
delay(1000);
break;
case 1: l1.print(" pradipta ");
delay(1000);
break;
case 2: l1.print(" prateek ");
delay(1000);
break;
case 3: l1.print(" rajveer ");
delay(1000);
break;
default: l1.print(" thank you");
 c=0;
}
 if(digitalRead(4)==0)
  l1.clear();
}
