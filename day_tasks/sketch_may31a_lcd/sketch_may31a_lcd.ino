#include<LiquidCrystal.h>
LiquidCrystal l1(8,9,10,11,12,13);
void setup() {
  l1.begin(16,2);
  l1.setCursor(2,0);

  

}
int i;
char name[20]="pradipta ",name1[20],t;
void loop() {
  for(i=30;i>=0;i--)
  {
    l1.setCursor(i-16,0);
    l1.print( name);
    delay(220);
  }
   /* if(==
  }
  while()
  {
    l1.clear();
  }*/
delay(2000);
l1.clear();
}
