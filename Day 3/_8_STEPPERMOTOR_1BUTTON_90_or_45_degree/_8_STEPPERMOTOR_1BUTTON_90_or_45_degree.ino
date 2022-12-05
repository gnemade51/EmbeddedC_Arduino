void setup() {
  // put your setup code here, to run once:
pinMode(13,INPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(13)==0)
{
  while(digitalRead(13)==0)
  {
    digitalWrite(1,HIGH);
    delay(1000);
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(1000);
    digitalWrite(4,LOW);
  }
}
else
{
  while(digitalRead(13)==1)
  {
    digitalWrite(1,HIGH);
    delay(1000);
    digitalWrite(4,LOW);
    delay(1000);
    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(1,LOW);
    delay(1000);
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    delay(1000);
    digitalWrite(4,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    delay(1000);
  }
}
}
