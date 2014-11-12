void setup(){
  for (int i=0; i < 20;i++){
    pinMode(i, OUTPUT);
  }
}
void loop(){
  for(int i=0; i < 18;i++){
  digitalWrite(random(0,20),HIGH);
  delay(250);
  }
  aus();
  for(int i=0; i < 500;i++){
  digitalWrite(random(0,20),HIGH);
  delay(20);
  aus();
  }
  aus();
}
void aus(){
  for (int i=0; i < 20;i++){
    digitalWrite(i, LOW);
  }
}
