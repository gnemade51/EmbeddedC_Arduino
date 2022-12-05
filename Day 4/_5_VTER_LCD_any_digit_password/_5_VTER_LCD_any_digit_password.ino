#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,5,4,3,2);
char pass[15],i=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
pinMode(13,OUTPUT);
lcd.setCursor(0,0);
lcd.print("ENTER PASSWORD: ");
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  pass[i]=Serial.read();
  i++;
  lcd.setCursor(i-1,1);
  lcd.print('X');
  if(pass[i-1]==13)
  {
    pass[i-1]='\0';
    i=0;
    if(strcmp(pass,"ABCD")==0)
    {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(" ACCESS GRANTED ");
    }
    else
    {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(" ACCESS DENIED! ");
      delay(3000);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("ENTER PASSWORD: ");
    }
  }
}
}
