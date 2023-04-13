#define led 11
int i=0;
int j=0;

void setup() {
 
  pinMode(led,OUTPUT);
   
}

void loop() {
  for(i=0;i<6;i++){
    digitalWrite(led,i);
    delay(10);
  }

  for(j=5;j>0;j--){
   digitalWrite(led,j);
    delay(10);
  }
  
  
}
