#include <Keypad.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {0,1,2,3}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {4,5,6}; //connect to the column pinouts of the keypad

Keypad calc = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup()
{
lcd.begin(16,2);
lcd.print("ENTER PASSWORD");
pinMode(7,OUTPUT);
}

char pass[5],i,q,j,a=0;
void loop() 
{
  char key= calc.getKey();
  if(key)
  {
    pass[i++]=key;
    lcd.print("*");
    if(i==4)
    {
      pass[i]='\0';
      i=0;
      if(strcmp(pass,"0000")==0)
      {
        lcd.clear();
        lcd.print("ACESS GRANTED");
        digitalWrite(7,1);
        delay(1000);
        digitalWrite(7,0); 
      }
      else
      {
        lcd.clear();
        lcd.print("ACESS DENIED");
        a++;
        delay(1000);
      }
    
    }
    if(a==2)
    {
      lcd.clear();
      lcd.print("wait for sec");
      
      for(int j=10;j>=0;j--)
      {
      lcd.setCursor(13,1);
      lcd.print(j);
      delay(1000);}
      a=0; 
     
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("ENTER PASSWORD");
      lcd.setCursor(0,1);
    }
  }
}


