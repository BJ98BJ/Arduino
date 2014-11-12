void setup(){
 for (int i = 0; i <20;i++){
  pinMode(i, OUTPUT);
 } 
}
void loop(){
  for (int i = 0; i <19;i++){
  blink(i);
  }
  for (int i = 19; i >0;i--){
  blink(i);
  }
}
void blink(const int pos){
 digitalWrite(pos,HIGH);
  delay((sqrt(((float)20 - pos)/20)-sqrt((19.0-pos)/20))*500);
 digitalWrite(pos,LOW); 
}
