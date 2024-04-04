int sensorvalue=0;
void setup()
{
  Serial.begin(9600);
  pinMode(A1,INPUT);
  pinMode(13,OUTPUT);
  pinMode(5,INPUT);
  Serial.begin(9600);
}
void loop()
{
  sensorvalue=analogRead(A1);
  Serial.print("SENSOR VALUE");
  Serial.println(sensorvalue);
  int voltage=sensorvalue*(5000/1024.0);
  int temperature=(voltage-500)/10;
  Serial.print("Temperature");
  Serial.println(temperature);
   int value;
  value=digitalRead(5);
  Serial.println(value);
  if(value==1)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}

