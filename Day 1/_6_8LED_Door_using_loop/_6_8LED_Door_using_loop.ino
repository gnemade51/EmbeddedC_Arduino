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
char i,j;
for(i=1,j=8;i<=4,j>=5;i++,j--)
{
  digitalWrite(i,HIGH);
  digitalWrite(j,HIGH);
  delay(100);
}
for(i=4,j=5;i>=1,j<=8;i--,j++)
{
  digitalWrite(i,LOW);
  digitalWrite(j,LOW);
  delay(100);
}
}
