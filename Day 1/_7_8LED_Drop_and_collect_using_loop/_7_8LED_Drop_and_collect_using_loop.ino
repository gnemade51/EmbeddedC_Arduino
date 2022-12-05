void setup() {
  // put your setup code here, to run once:
char i;
for(i=1;i<=8;i++)
{
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
char i,j,k;
for(i=8;i>=1;i--)
{
  for(j=1;j<=i;j++)
  {
    digitalWrite(j-1,LOW);
    digitalWrite(j,HIGH);
    delay(100); 
  }
}
for(k=1;k<=8;k++)
{
  digitalWrite(k,LOW);
  delay(100);
}
}
