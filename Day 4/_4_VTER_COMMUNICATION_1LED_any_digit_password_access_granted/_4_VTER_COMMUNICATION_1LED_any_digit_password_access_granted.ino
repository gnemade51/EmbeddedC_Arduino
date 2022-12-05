char pass[15],i=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
Serial.println("ENTER PASSWORD: ");
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  pass[i]=Serial.read();
  i++;
  Serial.print('X');
  if(pass[i-1]==13)
  {
    pass[i-1]='\0';
    i=0;
    if(strcmp(pass,"ABCD")==0)
    {
      Serial.println("");
      Serial.println("ACCESS GRANTED!");
    }
    else
    {
      Serial.println("");
      Serial.println("ACCESS DENIED!");
      Serial.println("REENTER PASSWORD: ");
    }
  }
}
}
