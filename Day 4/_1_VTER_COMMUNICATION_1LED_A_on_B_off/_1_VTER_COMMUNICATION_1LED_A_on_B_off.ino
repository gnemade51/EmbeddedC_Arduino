void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
char x;
if(Serial.available()>0)
{
  x=Serial.read();
  Serial.print(x);
  if(x=='A')
  {
    digitalWrite(13,1);
  }
  else if(x=='B')
  {
    digitalWrite(13,0);
  }
}
}
