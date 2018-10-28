int numWait=100;
int pins[12] = {23,25,27,29,31,32,26,24,22,28,30,33};
void setup() {

 for(int i=0;i<12;i++){
   pinMode(pins[i],OUTPUT);
  }
  for(int i=0;i<8;i++){
    digitalWrite(pins[i],LOW);
  }
  
 // for(int i=8;i<12;i++){
    digitalWrite(pins[9],HIGH);    
 // }

}

void loop() {
 
 for(int i=7;i<12;i++){
    digitalWrite(pins[i],HIGH); 
for(int i=0;i<10;i++){
  counter(i); 
delay(200);   
} 
}

}
void  counter(int num)
{
 if(num<0 || num>11) return 0;
switch(num){
    case 0:
           for(int i=0;i<8;i++){
               digitalWrite(pins[i],LOW);
                  }
    digitalWrite(pins[2],HIGH);
    digitalWrite(pins[4],HIGH);
      return 1;
    case 1:
           for(int i=0;i<8;i++){
               digitalWrite(pins[i],HIGH);
                  }
      digitalWrite(pins[3],LOW);
      digitalWrite(pins[5],LOW);
      return 1;      
    case 2:
          for(int i=0;i<8;i++){
               digitalWrite(pins[i],LOW);
                  }
      digitalWrite(pins[6],HIGH);
      digitalWrite(pins[3],HIGH);
      digitalWrite(pins[2],HIGH);
       return 1;
    case 3:
    for(int i=0;i<8;i++){
               digitalWrite(pins[i],LOW);
                  }
      digitalWrite(pins[6],HIGH);
      digitalWrite(pins[0],HIGH);
      digitalWrite(pins[2],HIGH);
        
      return 1;
    case 4:
  for(int i=0;i<8;i++){
               digitalWrite(pins[i],LOW);
                  }
      digitalWrite(pins[7],HIGH);
      digitalWrite(pins[0],HIGH);     
      digitalWrite(pins[1],HIGH);
          digitalWrite(pins[2],HIGH);   
      return 1;
    case 5:
     for(int i=0;i<8;i++){
               digitalWrite(pins[i],LOW);
                  }
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[2],HIGH); 
      digitalWrite(pins[0],HIGH);    
      return 1;
    case 6:
           for(int i=0;i<8;i++){
               digitalWrite(pins[i],LOW);
                  }
      digitalWrite(pins[5],HIGH);
      digitalWrite(pins[2],HIGH);
      return 1;
    case 7:
      for(int i=0;i<8;i++){
               digitalWrite(pins[i],HIGH);
                  }
      digitalWrite(pins[7],LOW);
      digitalWrite(pins[5],LOW);
      digitalWrite(pins[3],LOW);
      return 1;
    case 8:
    for(int i=0;i<8;i++){
               digitalWrite(pins[i],LOW);
                  }
      digitalWrite(pins[2],HIGH);
      return 1;
    case 9:
    for(int i=0;i<8;i++){
               digitalWrite(pins[i],HIGH);
                  }
    for(int i=2;i<8;i++){
               digitalWrite(pins[i],LOW);
                  }
     digitalWrite(pins[2],HIGH);
      return 1;     
  }

  
}


