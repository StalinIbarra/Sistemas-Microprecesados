
void setup() {
  // put your setup code here, to run once:

for(int i=2;i<=9;i++){ //pines de salida
pinMode(i, OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int a=0;a<=3;a++){
     secuencia0();
     //delay(100);
  }
  for(int b=0;b<=3;b++){
     secuencia1();
     //delay(100);
  }
  for(int c=0;c<=3;c++){
     secuencia2();
     //delay(100);
  }
  for(int d=0;d<=3;d++){
     secuencia3();
     //delay(100);
  }  
  for(int e=0;e<=3;e++){
     secuencia4();
    // delay(100);
  }
}

void secuencia0(){
  for (int i=2; i<=9; i=i+2){ 
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    delay(200);
  }
}

void secuencia1(){
  for (int i=3; i<=9; i=i+2){ 
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    delay(200);
  }
}

void secuencia2(){
  int k=11; // inicializo una variable auxiliar K
  for(int i=6; i<=9;i++){ //leo de 6 a 9
    digitalWrite(i, HIGH); // prendo pin actual
    digitalWrite(k-i, HIGH); // prendo pin de la diferencia 11-6 = 5
    delay(100); //retardo
  }
  for(int i=9; i>=2;i--){ // Al contrario de lo anterior
    digitalWrite(i, LOW);
    digitalWrite(k-i, LOW);
    delay(100);
  }
}

void secuencia3(){
  for(int i=2; i<=9; i++){
    digitalWrite(i,HIGH);
    delay(100);
  }
  for(int i=9; i>=2;i--){
    digitalWrite(i,LOW);
    delay(100);
  }
}

void secuencia4(){
  int k=11;
  for(int i=2; i<=5;i++){
    digitalWrite(i,HIGH);
    digitalWrite(k-i,LOW);
  }
   delay(200);
  for(int i=2; i<=5;i++){
    digitalWrite(i,LOW);
    digitalWrite(k-i,HIGH);
  }
   delay(200);
}
