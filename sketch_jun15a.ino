#define buzz 4
void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int i=20;i<1000;i++){
    tone(buzz,i);
    delay(500);
  }
  for(int j=1000; j>20;j--){
    tone(buzz,j);
    delay(500);
  }


}
