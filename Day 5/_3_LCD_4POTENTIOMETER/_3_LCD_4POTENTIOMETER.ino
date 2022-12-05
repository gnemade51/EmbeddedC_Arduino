#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
float x0,x1,x2,x3,y0,y1,y2,y3;
x0=analogRead(A0);
x1=analogRead(A1);
x2=analogRead(A2);
x3=analogRead(A3);
y0=(5*x0)/1024;
y1=(5*x1)/1024;
y2=(5*x2)/1024;
y3=(5*x3)/1024;
lcd.setCursor(0,0);
lcd.print("A:");
lcd.setCursor(2,0);
lcd.print(y0);
lcd.setCursor(10,0);
lcd.print("B:");
lcd.setCursor(12,0);
lcd.print(y1);
lcd.setCursor(0,1);
lcd.print("C:");
lcd.setCursor(2,1);
lcd.print(y2);
lcd.setCursor(10,1);
lcd.print("D:");
lcd.setCursor(12,1);
lcd.print(y3);
delay(100);
}
