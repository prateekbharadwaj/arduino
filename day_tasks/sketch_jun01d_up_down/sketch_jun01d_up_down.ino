

#include<LiquidCrystal.h>
LiquidCrystal l1(8,9,10,11,12,13);
void setup() {
  l1.begin(16,2);
  
 pinMode(6,INPUT_PULLUP);
 pinMode(5,INPUT_PULLUP);
  

}
int i=0;
char name[20]="pradipta ",name1[20],t;
void loop() {
  int j=1;
  if(digitalRead(6)==0)
  {
    i=0;
    j=0;
  }
  if(digitalRead(5)==0)
  {
    i=1;
    j=0;
  }
  l1.setCursor(0,i);
  l1.print("@");
  if(j=1)
  {
    for(int k=1;k<=15;k++)
    {
      l1.setCursor(k,i);
      l1.print("->");
      delay(100);
    }
  }
  

delay(50);
l1.clear();
}
