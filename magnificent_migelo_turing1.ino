#define FORCE_SENSOR A0
#define LED 13
int analogReading;
void setup()
{
  Serial.begin(9600);
  pinMode(FORCE_SENSOR,INPUT);
  pinMode(LED,OUTPUT);
  
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  
}
void loop()
{
  
  int analogReading=analogRead(FORCE_SENSOR);
  Serial.print("Force sensor reading=");
  Serial.println(analogReading);
  float flex=analogRead(A1);
  Serial.println(flex);
  delay(1000);
  if(analogReading==0)
    digitalWrite(LED,LOW);
  else
    digitalWrite(LED,HIGH);
  if(flex>900)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
     digitalWrite(4,HIGH);
  }
  else
  {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
     digitalWrite(4,LOW);
    
}
}