#include<LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setCursor(5,0);
lcd.print("GAURAV");
}

void loop() {
  // put your main code here, to run repeatedly:
int i;
for(i=0;i<=999;i++)
{
  lcd.setCursor(13,1);
  lcd.print(i);
  delay(100);
}
}
