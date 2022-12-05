#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,5,4,3,2);
char pass[13],i=0,j,c=0,k;
char names[3][10]={"GAURAV","VIRAJ","SARVESH"};
char id[3][13]={"00ABCD1024XY","001234ABCDXY","002345ABCDXY"};
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  pass[i]=Serial.read();
  Serial.print(pass[i]);
  lcd.setCursor(i,1);
  lcd.print(pass[i]);
  i++;
  if(i==12)
  {
    pass[12]='\0';
    i=0;
    for(j=0;j<3;j++)
    {
      if(strcmp(pass,id[j])==0)
      {
        c++;
        k=j;
      }
    }
    if(c!=0)
    {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(" ACCESS GRANTED ");
      delay(2000);
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(names[k]);
      c=0;
    }
    else
      {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print(" ACCESS DENIED! ");
        delay(2000);
        lcd.clear();
      }
  }
}
}
