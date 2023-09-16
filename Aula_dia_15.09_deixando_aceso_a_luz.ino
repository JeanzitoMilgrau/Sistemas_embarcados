int vAtu=0;
int vAnt=0;
int ligado=0;
int religado=0;
void setup() {
  pinMode(2, INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  
}
void loop (){
  vAnt = vAtu;
  vAtu = digitalRead(2);

  if ((vAtu==1)and (vAnt==0))
  {
   ligado = not ligado;
   if (ligado == religado){
   religado=not religado;
   digitalWrite(12, religado); 
   }
   
   
  }
   digitalWrite(13, ligado); 
   digitalWrite(11, ligado);
}
