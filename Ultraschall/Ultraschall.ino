long dist;
long cm;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  
  digitalWrite(8,LOW);
  delay(2);
  digitalWrite(8, HIGH);
  delay(5);
  digitalWrite(8, LOW);
  
  dist = pulseIn(9, HIGH);
  cm = (dist*34)/2000;
  
  Serial.println(cm);
  
  //Serial.println(" cm");
  
  delay(100);
  //copyright by Björn Gantzer
}
