#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
int x;
x=analogRead(A0);
lcd.setCursor(0,0);
lcd.print("VOLTAGE:");
lcd.setCursor(0,1);
lcd.print(x);
delay(100);
lcd.clear();
}
