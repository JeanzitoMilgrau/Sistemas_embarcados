void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int valor = digitalRead(10);
  Serial.println(valor);
  digitalWrite(13, valor);
  
  delay(10);

}
