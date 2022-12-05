char c=0;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(5)==0)
{
  while(digitalRead(5)==0);
  c++;
}
if(c==1)
{
  digitalWrite(13,1);
}
else if(c==2)
{
  digitalWrite(13,0);
  c=0;
}
}
