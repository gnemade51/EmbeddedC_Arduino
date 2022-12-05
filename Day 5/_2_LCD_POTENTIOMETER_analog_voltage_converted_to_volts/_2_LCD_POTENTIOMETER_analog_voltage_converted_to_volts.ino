#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
int x,y;
x=analogRead(A0);
y=(5*x)/1024;
lcd.setCursor(0,0);
lcd.print("VOLTAGE:");
lcd.setCursor(0,1);
lcd.print(y);
delay(100);
lcd.clear();
}
