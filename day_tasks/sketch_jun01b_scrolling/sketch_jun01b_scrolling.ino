#include<LiquidCrystal.h>
LiquidCrystal l1(8,9,10,11,12,13);
void setup() {
  l1.begin(16,2);
  l1.setCursor(2,0);

  

}
int i;
char name[20]="pradipta ",name1[20],t;
void loop() {
  int i,j,k;
  char name[20]="pradipta ",name1[20],t;
  for(i=15;i>=0;i--)
  {
    l1.setCursor(i,0);
    l1.print( name);
    delay(220);
    
  }
  l1.clear();
  j=0,i=0;k=9;
  while(name[j]!='\0')
  {
    for(i=0;i<k;i++)
    {
      name[i]=name[i+1];
    }
    l1.print(name);
    k--;
    delay(220);
    l1.clear();
  }

delay(2000);
l1.clear();
}
