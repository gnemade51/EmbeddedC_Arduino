#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int h=0,m=0,s=0;
void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
pinMode(6,INPUT);
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("HH:MM:SS");
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(7)==0)
{
  s++;
}
if(digitalRead(6)==0)
{
  while(digitalRead(6)==0);
  {
    h=0;
    m=0;
    s=0;
  }
}
if(s==60)
{
  s=0;
  m++;
}
if(m==60)
{
  m=0;
  h++;
}
if(h==24)
{
  h=0;
  m=0;
  s=0;
}
lcd.setCursor(0,1);
lcd.print(h/10);
lcd.print(h%10);
lcd.print(":");
lcd.print(m/10);
lcd.print(m%10);
lcd.print(":");
lcd.print(s/10);
lcd.print(s%10);
delay(1000);
}
