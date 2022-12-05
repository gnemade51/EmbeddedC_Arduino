void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
char x;
x=digitalRead(5);
if(x==0)
{
  digitalWrite(13,1);
}
else
{
  digitalWrite(13,0);
}
}
