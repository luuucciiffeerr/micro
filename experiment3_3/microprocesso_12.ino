#define key1 digitalRead(A0) 
#define key2 digitalRead(A1)
#define key3 digitalRead(A2)


void setup() {
  pinMode(A0, INPUT); //setting keys
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  
  for (int i=0; i<8; i++){
    pinMode(i, OUTPUT);
    }
  
}

void loop() {

  int i, a;
  int dancinglight1 [ 8 ][ 8 ] ={ //first pattern
    { 0, 0, 0, 0, 0, 0, 0, 1},
    { 0, 0, 0, 0, 0, 0, 1, 0},
    { 0, 0, 0, 0, 0, 1, 0, 0},
    { 0, 0, 0, 0, 1, 0, 0, 0},
    { 0, 0, 0, 1, 0, 0, 0, 0},
    { 0, 0, 1, 0, 0, 0, 0, 0},
    { 0, 1, 0, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0, 0, 0, 0, 0}
    };

    int dancinglight2 [ 4 ][ 8 ] ={ //second
       { 0, 0, 0, 1, 1, 0, 0, 0},
       { 0, 0, 1, 0, 0, 1, 0, 0},
       { 0, 1, 0, 0, 0, 0, 1, 0},
       { 1, 0, 0, 0, 0, 0, 0, 1}
      };

    int dancinglight3 [ 3 ][ 8 ] ={ //third
       { 1, 0, 1, 0, 1, 0, 0, 0},
       { 0, 1, 0, 1, 0, 1, 0, 0},
       { 0, 0, 1, 0, 1, 0, 1, 0}
      };

    
    for (int i=0; i<8; i++){ //applying matrix to LED
      digitalWrite(i,0);
      }
    if(key1 ==0){
      for(a=0 ; (a<8) & (key2 == 1) & ( key3 == 1); a++ ){
          for(i =0 ; i<8 ; i++){
            digitalWrite(i, dancinglight1 [a] [i]);
            
            }
            delay(200);
        }
      }

     if(key2 ==0){
      for(a=0 ; (a<4) & (key1 == 1) & ( key3 == 1); a++ ){ //applying matrix to LED
          for(i =0 ; i<8 ; i++){
            digitalWrite(i,dancinglight2 [a] [i]);
            }

            delay(300);
          }
          
      }


      if(key3 ==0){
      for(a=0 ; (a<3) & (key1 == 1) & ( key2 == 1); a++ ){ //applying matrix to LED
          for(i =0 ; i<8 ; i++){
            digitalWrite(i, dancinglight3 [a] [i]);
            }

            delay(300);
          }

}
}
