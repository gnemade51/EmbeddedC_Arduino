char c=0,s=0;
void setup() {
  // put your setup code here, to run once:
char i;
for(i=0;i<7;i++)
{
  pinMode(i,OUTPUT);
}
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(9)==0)
{
  s=2;
}
else
{
  s=1;
}
if(digitalRead(8)==0)
{
  while(digitalRead(8)==0);
  c=c+s;
  printssd(c);
}
if(digitalRead(7)==0)
{
  while(digitalRead(7)==0);
  c=c-s;
  printssd(c);
}
}
void printssd(char x)
{
  if(x==0)
  {
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  else if(x==1)
  {
    digitalWrite(0,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  else if(x==2)
  {
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }
  else if(x==3)
  {
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }
  else if(x==4)
  {
    digitalWrite(0,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  }
  else if(x==5)
  {
    digitalWrite(0,HIGH);
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  }
  else if(x==6)
  {
    digitalWrite(0,HIGH);
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  }
  else if(x==7)
  {
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  else if(x==8)
  {
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  }
  else if(x==9)
  {
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  }
}
