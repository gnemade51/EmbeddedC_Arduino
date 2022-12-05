#include<LiquidCrystal.h>
LiquidCrystal lcd(5,4,3,2,1,0);
char r=0,b=0,w=0,f=0,s=0,i;
void setup() {
  // put your setup code here, to run once:
pinMode(13,INPUT_PULLUP);
pinMode(12,INPUT_PULLUP);
pinMode(11,INPUT_PULLUP);
pinMode(10,INPUT_PULLUP);
pinMode(9,INPUT_PULLUP);
pinMode(8,INPUT_PULLUP);
pinMode(7,INPUT_PULLUP);
lcd.begin(16,2);
for(i=0;i<3;i++)
{
  lcd.setCursor(3,0);
  lcd.print("IND VS PAK");
  delay(100);
  lcd.clear();
  delay(100);
}
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(7)==0)
{
  while(digitalRead(7)==0);
  b=b+1;
}
if(digitalRead(8)==0)
{
  while(digitalRead(8)==0);
  b=b+1;
  r=r+1;
}
if(digitalRead(9)==0)
{
  while(digitalRead(9)==0);
  b=b+1;
  r=r+2;
}
if(digitalRead(10)==0)
{
  while(digitalRead(10)==0);
  b=b+1;
  r=r+3;
}
if(digitalRead(11)==0)
{
  while(digitalRead(11)==0);
  b=b+1;
  r=r+4;
  f=f+1;
  for(i=0;i<3;i++)
  {
    lcd.setCursor(1,0);
    lcd.print("FOUR FOUR FOUR");
    delay(100);
    lcd.clear();
    delay(100);
  }
}
if(digitalRead(12)==0)
{
  while(digitalRead(12)==0);
  b=b+1;
  r=r+6;
  s=s+1;
  for(i=0;i<3;i++)
  {
    lcd.setCursor(1,0);
    lcd.print("SIX! SIX! SIX!");
    delay(100);
    lcd.clear();
    delay(100);
  }
}
if(digitalRead(13)==0)
{
  while(digitalRead(13)==0);
  b=b+1;
  w=w+1;
  for(i=0;i<3;i++)
  {
    lcd.setCursor(1,0);
    lcd.print("OUT! OUT! OUT!");
    delay(100);
    lcd.clear();
    delay(100);
  }
}
printlcd();
}
void printlcd()
{
  lcd.setCursor(0,0);
  lcd.print("R:");
  lcd.print(r/100);
  lcd.print((r%100)/10);
  lcd.print(r%10);
  lcd.print(" BALL:");
  lcd.print(b/100);
  lcd.print((b%100)/10);
  lcd.print(b%10);
  lcd.setCursor(0,1);
  lcd.print("W:");
  lcd.print(w/10);
  lcd.print(w%10);
  lcd.print(" F:");
  lcd.print(f/10);
  lcd.print(f%10);
  lcd.print(" S:");
  lcd.print(s/10);
  lcd.print(s%10);
}
