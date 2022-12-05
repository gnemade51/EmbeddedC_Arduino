char c1=0,c2=0,c3=0,c4=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
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
    c1++;
    if((c1%2)==1)
    {
      digitalWrite(13,1);
    }
    else
    {
      digitalWrite(13,0);
    }
  }
  else if(x=='B')
  {
    c2++;
    if((c2%2)==1)
    {
      digitalWrite(12,1);
    }
    else
    {
      digitalWrite(12,0);
    }
  }
  else if(x=='C')
  {
    c3++;
    if((c3%2)==1)
    {
      digitalWrite(11,1);
    }
    else
    {
      digitalWrite(11,0);
    }
  }
  else if(x=='D')
  {
    c4++;
    if((c4%2)==1)
    {
      digitalWrite(10,1);
    }
    else
    {
      digitalWrite(10,0);
    }
  }
}
}
