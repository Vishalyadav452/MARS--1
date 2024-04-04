#define echoPin 2
#define trigPin 3

long duration;
int distance;

int buzzer=11;
int Forcesensor=A1;
int Forcevalue=0;
int forcePin;

void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  
  pinMode(forcePin,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance");
  Serial.print(distance);
  Serial.println("cm");
  
  Forcevalue=analogRead(forcePin);
  Serial.println(Forcevalue);
  noTone(buzzer);
  tone(buzzer,Forcevalue);
 }