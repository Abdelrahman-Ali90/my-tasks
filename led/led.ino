const int led[8]={1,2,3,4,5,6,7,8};

int i;
int j;
int x;
void setup()
{
  for(i=0;i<=7;i++){
  
  pinMode(led[i],OUTPUT);
  }
}

void loop()
{
 
  
  //1 blink
  for (int i = 0; i < 8; i++) {
   digitalWrite(led[i],HIGH);
  }
   delay(100); 
   for (int i = 0; i < 8; i++) {
   digitalWrite(led[i],LOW);
  } 
  delay(100); 
  //2 right shift
    for(i=0;i<8;i++){
     digitalWrite(led[i],HIGH);
     delay(1000); 
     digitalWrite(led[i],LOW);
    
    }
   
  //3 left shift
    for(i=8;i>=0;i--){
     digitalWrite(led[i],HIGH);
     delay(1000); 
     digitalWrite(led[i],LOW);
    }
  
  //4 converge
  for(i=0;i<=4;i++){
    for(j=8;j>=4;j--){
     digitalWrite(led[i],HIGH);
     digitalWrite(led[j],HIGH);
     delay(800); 
    }
  }
  
  //5 diverge
  for ( i = 3; i >= 0; i--) {
    digitalWrite(led[i], HIGH);
    digitalWrite(led[7-i], HIGH); 
    delay(1000); 
    digitalWrite(led[i], LOW); 
    digitalWrite(led[7-i], LOW); 
  }
  for ( i = 3 + 1; i < 8; i++) {
    digitalWrite(led[i], HIGH); 
    digitalWrite(led[7-i], HIGH); 
    delay(1000); 
    digitalWrite(led[i], LOW); 
    digitalWrite(led[7-i], LOW); 
  }
  

//6 ping pong
  for(j=0;j<8;j++){
   digitalWrite(led[j],HIGH);
   delay(1000);
  } 
  
   for(j=0;j<7;j++){
   digitalWrite(led[j],LOW);
   delay(100);
  } 
  
  
   for(x=8;x>=0;x--){
  digitalWrite(led[x],HIGH);
  delay(100);
  } 
   for(j=8;j>0;j--){
  digitalWrite(led[j],LOW);
  delay(1000);
   }
   
  //7 snake
  for(i=0;i<7;i++){
     digitalWrite(led[i],HIGH);
     digitalWrite(led[i],LOW);
    digitalWrite(led[8],LOW);
     delay(1000);
     
  }
  
  for(i=8;i>0;i--){
   digitalWrite(led[i],HIGH);
   delay(1000);
} 


    } 
  
