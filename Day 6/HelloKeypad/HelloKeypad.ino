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

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
lcd.begin(16,2);
}

  
void loop(){
  char key = keypad.getKey();
  
  if (key){
    lcd.print(key);
  }
}
