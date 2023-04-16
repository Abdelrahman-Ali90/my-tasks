#define led 11
int i=0;
int j=0;

void setup() {
   Serial.begin(9600);
  pinMode(led,OUTPUT);
   
}

void loop() {
  for(i=0;i<256;i++){
    analogWrite(led,i);
    delay(10);
  }

  for(j=255;j>0;j--){
   analogWrite(led,j);
    delay(10);
  }
  
  
}
