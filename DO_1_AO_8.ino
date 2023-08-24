
void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
}
void loop(){

    //zero
    digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    //digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    //digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^
    
    //um
   // digitalWrite(13, HIGH);//|-
    //digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    //digitalWrite(9, HIGH);//-
    //digitalWrite(8, HIGH);//|-^
    //digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
   // digitalWrite(13, LOW);//|-
    //digitalWrite(12, HIGH);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, HIGH);//.
    //digitalWrite(9, HIGH);//-
   // digitalWrite(8, LOW);//|-^
    //digitalWrite(7, HIGH);//^
    digitalWrite(6, LOW);//-|^
    
    //dois
    digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    //digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, HIGH);//-
    //digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    //digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, LOW);//-
    //digitalWrite(8, HIGH);//|-^
    digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^
    
    //tres
    //digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, HIGH);//-
    //digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    //digitalWrite(13, HIGH);//|-
    digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    digitalWrite(9, LOW);//-
    //digitalWrite(8, HIGH);//|-^
    digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^
    
    //quatro
    //digitalWrite(13, HIGH);//|-
    //digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    //digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    //digitalWrite(13, HIGH);//|-
    //digitalWrite(12, HIGH);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    //digitalWrite(7, HIGH);//^
    digitalWrite(6, LOW);//-|^
    
    //cinco
   // digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    //digitalWrite(6, HIGH);//-|^
    delay(500);
    //digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    digitalWrite(7, LOW);//^
    //digitalWrite(6, LOW);//-|^

    //SEIS
    digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    //digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    digitalWrite(7, LOW);//^
    //digitalWrite(6, LOW);//-|^

    //SETE
    //digitalWrite(13, HIGH);//|-
    //digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    //digitalWrite(9, HIGH);//-
    //digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    //digitalWrite(13, LOW);//|-
    //digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    //digitalWrite(9, LOW);//-
    //digitalWrite(8, LOW);//|-^
    digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^

    //OITO
    digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
   // digitalWrite(10, LOW);//.
    digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^

    //NOVE
    //digitalWrite(13, HIGH);//|-
    //digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    //digitalWrite(13, LOW);//|-
    //digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^

    //360
    digitalWrite(13, HIGH);//|-
    delay(100);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, HIGH);//|-
    delay(100);
    digitalWrite(12, LOW);//|-
    digitalWrite(11, HIGH);//|-
    delay(100);
    digitalWrite(11, LOW);//|-
    digitalWrite(9, HIGH);//|-
    delay(100);
    digitalWrite(9, LOW);//|-
    digitalWrite(8, HIGH);//|-
    delay(100);
    digitalWrite(8, LOW);//|-
    digitalWrite(7, HIGH);//|-
    delay(100);
    digitalWrite(7, LOW);//|-
    digitalWrite(6, HIGH);//|-
    delay(100);
    digitalWrite(6, LOW);//|-
    digitalWrite(13, HIGH);//|-
    delay(100);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, HIGH);//|-
    delay(100);
    digitalWrite(12, LOW);//|-
    digitalWrite(11, HIGH);//|-
    delay(100);
    digitalWrite(11, LOW);//|-
    digitalWrite(9, HIGH);//|-
    delay(100);
    digitalWrite(9, LOW);//|-
    digitalWrite(8, HIGH);//|-
    delay(100);
    digitalWrite(8, LOW);//|-
    digitalWrite(7, HIGH);//|-
    delay(100);
    digitalWrite(7, LOW);//|-
    digitalWrite(6, HIGH);//|-
    delay(100);
    digitalWrite(6, LOW);//|-
    
      //A
    digitalWrite(13, HIGH);//|-
    //digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    //digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^

      //E
    digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    //digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    //digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    //digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    digitalWrite(7, LOW);//^
    //digitalWrite(6, LOW);//-|^

      //I
    digitalWrite(13, HIGH);//|-
    //digitalWrite(12, HIGH);//_
    //digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    //digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    //digitalWrite(7, HIGH);//^
    //digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    //digitalWrite(12, LOW);//_
    //digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    //digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    //digitalWrite(7, LOW);//^
    //digitalWrite(6, LOW);//-|^

      //O
    digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    //digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    //digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^

      //U
    digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    //digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    //digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    //digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    //digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^

//360
    digitalWrite(13, HIGH);//|-
    delay(100);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, HIGH);//|-
    delay(100);
    digitalWrite(12, LOW);//|-
    digitalWrite(11, HIGH);//|-
    delay(100);
    digitalWrite(11, LOW);//|-
    digitalWrite(9, HIGH);//|-
    delay(100);
    digitalWrite(9, LOW);//|-
    digitalWrite(8, HIGH);//|-
    delay(100);
    digitalWrite(8, LOW);//|-
    digitalWrite(7, HIGH);//|-
    delay(100);
    digitalWrite(7, LOW);//|-
    digitalWrite(6, HIGH);//|-
    delay(100);
    digitalWrite(6, LOW);//|-
    digitalWrite(13, HIGH);//|-
    delay(100);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, HIGH);//|-
    delay(100);
    digitalWrite(12, LOW);//|-
    digitalWrite(11, HIGH);//|-
    delay(100);
    digitalWrite(11, LOW);//|-
    digitalWrite(9, HIGH);//|-
    delay(100);
    digitalWrite(9, LOW);//|-
    digitalWrite(8, HIGH);//|-
    delay(100);
    digitalWrite(8, LOW);//|-
    digitalWrite(7, HIGH);//|-
    delay(100);
    digitalWrite(7, LOW);//|-
    digitalWrite(6, HIGH);//|-
    delay(100);
    digitalWrite(6, LOW);//|-

    //LULA
       //L
    digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    //digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    //digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    //digitalWrite(7, HIGH);//^
    //digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    //digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    //digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    //digitalWrite(7, LOW);//^
    //digitalWrite(6, LOW);//-|^

    
      //U
    digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    //digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    //digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    //digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    //digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^

           //L
    digitalWrite(13, HIGH);//|-
    digitalWrite(12, HIGH);//_
    //digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    //digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    //digitalWrite(7, HIGH);//^
    //digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    digitalWrite(12, LOW);//_
    //digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    //digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    //digitalWrite(7, LOW);//^
    //digitalWrite(6, LOW);//-|^

          //A
    digitalWrite(13, HIGH);//|-
    //digitalWrite(12, HIGH);//_
    digitalWrite(11, HIGH);//-|
    //digitalWrite(10, HIGH);//.
    digitalWrite(9, HIGH);//-
    digitalWrite(8, HIGH);//|-^
    digitalWrite(7, HIGH);//^
    digitalWrite(6, HIGH);//-|^
    delay(500);
    digitalWrite(13, LOW);//|-
    //digitalWrite(12, LOW);//_
    digitalWrite(11, LOW);//-|
    //digitalWrite(10, LOW);//.
    digitalWrite(9, LOW);//-
    digitalWrite(8, LOW);//|-^
    digitalWrite(7, LOW);//^
    digitalWrite(6, LOW);//-|^

    
    


    

    
    
}
