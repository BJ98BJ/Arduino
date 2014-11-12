
int pause = 50;

void setup(){
 for (int x = 0; x < 20; x++){
   pinMode(x, OUTPUT);
 }
 Serial.begin(9600);
}

void loop()
{
  delay(15000);
  for (int x = 0; x < 100; x++){
    
  for (int x = 0; x < 20; x++){
 digitalWrite(x, HIGH); 
  }
  delay(pause);
  
    for (int x = 0; x < 20; x++){
 digitalWrite(x, LOW);
  }
  delay(pause);
  }
}

