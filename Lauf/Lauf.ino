int led = 0;
int geschw = 50;
int pause = 50;
int up = 0;

void setup(){
 for (int x = 0; x < 20; x++){
   pinMode(x, OUTPUT);
 }
 Serial.begin(9600);
}

void loop()
{
  digitalWrite(0, LOW);
  aus();
  delay(5000);
  for (int x = 0; x < 10; x++){
    
  for (int x = 0; x < 20; x++){
 digitalWrite(x, HIGH); 
 delay(geschw);
  }
  for (int x = 19; x > -1; x--){
 digitalWrite(x, LOW); 
 delay(geschw);
  }
  
  }
  
  for (int x = 0; x < 10; x++){
    
  for (int x = 0; x < 20; x++){
 digitalWrite(x, HIGH); 
  }
  delay(pause);
  
    for (int x = 0; x < 20; x++){
 digitalWrite(x, LOW);
  }
  delay(pause);
  }
  
  delay(1500);
  
  for (int x = 0; x < 10; x++){
    
   for (int x = 0; x < 20; x++){
     aus();
 digitalWrite(x, HIGH); 
 delay(geschw);
  }
  
  for (int x = 19; x > -1; x--){
    aus();
 digitalWrite(x, HIGH); 
 delay(geschw);
  } 
  }
  
  if (geschw = 10){
   up = 1 ;
  }
  if (geschw = 70){
    up = 0;
  }
  
  if (up = 1){
   geschw = geschw + 10;  
  }
  if (up = 0){
   geschw = geschw - 10; 
  }
  
}



void aus()
{
      for (int x = 0; x < 20; x++){
 digitalWrite(x, LOW);
      }
      }
