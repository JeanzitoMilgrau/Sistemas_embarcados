// comunicação serial
//int a;
//void setup() {

// Serial.begin(9600);

//}

//void loop() {
  //Serial.print("Bom dia ->");
 // Serial.println(a);  
 // delay(2000);


//}
int a;
void setup() {
pinMode(A0,INPUT);
Serial.begin(9600);

}

void loop() {
Serial.print("Bom dia ->");
a=analogRead(A0);
a = map(a,0,1023,0,100);
Serial.println(a);  
delay(200);
}
