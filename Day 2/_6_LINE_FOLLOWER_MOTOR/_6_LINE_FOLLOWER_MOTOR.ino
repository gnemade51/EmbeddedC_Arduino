void setup() {
  // put your setup code here, to run once:
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(13,INPUT);
pinMode(12,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
char x,y;
x=digitalRead(13);
y=digitalRead(12);
if((x==0)&&(y==0))
{
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}
else if((x==1)&&(y==0))
{
  digitalWrite(0,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}
else if((x==0)&&(y==1))
{
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
}
else if((x==1)&&(y==1))
{
  digitalWrite(0,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
}
}
