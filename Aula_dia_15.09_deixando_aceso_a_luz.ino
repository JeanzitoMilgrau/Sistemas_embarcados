int vAtu=0;
int vAnt=0;
int ligado=0;
void setup() {
  pinMode(2, INPUT);
  pinMode(13,OUTPUT);
}
void loop (){
  vAnt = vAtu;
  vAtu = digitalRead(2);

  if ((vAtu==1)and (vAnt==0))
  {
   ligado = not ligado;
  }
   digitalWrite(13, ligado);  
  
}
