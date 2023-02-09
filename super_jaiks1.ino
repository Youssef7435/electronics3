#define led 13
char value=0;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
}
void loop()
{
  if (Serial.available())
  {
    value=Serial.read();
    delay(10);
    if (value=='1'){
      digitalWrite(led,HIGH);
    Serial.println("led on");
    }
    else if (value=='0');
    {
      digitalWrite(led,LOW);
      Serial.println("led off");
    }
  }
}
      