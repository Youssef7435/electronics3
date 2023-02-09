const int led[6]={5,6,7,8,9,10};

void setup() 
{
  for(int i=0;i<6;i++)
  {
    pinMode(led[i],OUTPUT);
  }
}

void loop() 
{
  for(int j=0;j<6;j++)
  {
    for(int z=0;z<6;z++)
    {
      digitalWrite(led[z],LOW);
    }
    digitalWrite(led[j],HIGH);
    delay(100);
  }
  for(int j=4;j>=0;j--)
  {
    for(int z=0;z<6;z++)
    {
      digitalWrite(led[z],LOW);
    }
    digitalWrite(led[j],HIGH);
    delay(100);}
}