void setup() {
  // put your setup code here, to run once:
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
char i;
for(i=1;i<=8;i++)
{
  digitalWrite(i,HIGH);
  delay(100);
}
for(i=8;i>=1;i--)
{
  digitalWrite(i,LOW);
  delay(100);
}
}
