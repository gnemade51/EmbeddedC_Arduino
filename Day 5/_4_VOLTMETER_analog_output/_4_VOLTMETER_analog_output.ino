void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int i;
for(i=0;i<=255;i++)
{
  analogWrite(9,i);
  delay(10);
}
delay(1000);
for(i=255;i>=0;i--)
{
  analogWrite(9,i);
  delay(10);
}
delay(1000);
}
