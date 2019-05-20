int n1;
int n2;
int n3;
int n4;
int n5;
int n6;
int n7;
int n8;
int n9;
int n10;
String cedula;
int tam;
String region;
int num_region;
 
void setup() {
  Serial.begin(9600);

}

void loop() {
if(Serial.available()>0){
  cedula=Serial.readString();
  Serial.println(cedula);
  delay(200);
  tam=cedula.length();
  if(tam ==11 && cedula.charAt(9)== '-' ){
    Serial.println("La cedula que ingreso es:"+cedula);
    region=cedula.substring(0,2);
    num_region=region.toInt();
    delay(100);
    if(num_region>=0 && num_region<=24){
      n1=(cedula.substring(0,1)).toInt();
      n2=(cedula.substring(1,2)).toInt();
      n3=(cedula.substring(2,3)).toInt();
      n4=(cedula.substring(3,4)).toInt();
      n5=(cedula.substring(4,5)).toInt();
      n6=(cedula.substring(5,6)).toInt();
      n7=(cedula.substring(6,7)).toInt();
      n8=(cedula.substring(7,8)).toInt();
      n9=(cedula.substring(8,9)).toInt();
      n10=(cedula.substring(10,11)).toInt();      //último número

      //Operación impares n1,n3,n5,n7,n9
      n1=n1*2;
      if(n1>9){
        n1=n1-9;
        }
      n3=n3*2;
      if(n3>9){
        n3=n3-9;
        }  
      n5=n5*2;
      if(n5>9){
        n5=n5-9;
        }
      n7=n7*2;
      if(n7>9){
        n7=n7-9;
        }
     n9=n9*2;
      if(n9>9){
        n9=n9-9;
        }
      int suma_impares=n1+n3+n5+n7+n9;
      int suma_pares=n2+n4+n6+n8;
      int suma_total=suma_impares+suma_pares;
      if(n10==(suma_total%10)|| n10==(10-suma_total%10)){
        Serial.println("La cedula ingresada es correcta");
        switch(num_region){
          case 01:
             Serial.println("Este numero de cedula pertenece a la provincia de Azuay");
          break;
          case 02:
             Serial.println("Este numero de cedula pertenece a la provincia de Bolivar");
          break;
          case 03:
             Serial.println("Este numero de cedula pertenece a la provincia de Cañar");
          break;
          case 04:
             Serial.println("Este numero de cedula pertenece a la provincia de Carchi");
          break;
          case 05:
             Serial.println("Este numero de cedula pertenece a la provincia de Cotopaxi");
          break;
          case 06:
             Serial.println("Este numero de cedula pertenece a la provincia de Chimborazo");
          break;
          case 07:
             Serial.println("Este numero de cedula pertenece a la provincia de EL Oro");
          break;
          case 8:
             Serial.println("Este numero de cedula pertenece a la provincia de Esmeraldas");
          break;
          case 9:
             Serial.println("Este numero de cedula pertenece a la provincia de Guayas");
          break;
          case 10:
             Serial.println("Este numero de cedula pertenece a la provincia de Imbabura");
          break;
          case 11:
             Serial.println("Este numero de cedula pertenece a la provincia de Loja");
          break;
          case 12:
             Serial.println("Este numero de cedula pertenece a la provincia de Los Rios");
          break;
          case 13:
             Serial.println("Este numero de cedula pertenece a la provincia de Manabi");
          break;
          case 14:
             Serial.println("Este numero de cedula pertenece a la provincia de Morona Santiago");
          break;
          case 15:
             Serial.println("Este numero de cedula pertenece a la provincia de Napo");
          break;
          case 16:
             Serial.println("Este numero de cedula pertenece a la provincia de Pastaza");
          break;
          case 17:
             Serial.println("Este numero de cedula pertenece a la provincia de Pichincha");
          break;
          case 18:
             Serial.println("Este numero de cedula pertenece a la provincia de Tungurahua");
          break;
          case 19:
             Serial.println("Este numero de cedula pertenece a la provincia de Zamora Chinchipe");
          break;
          case 20:
             Serial.println("Este numero de cedula pertenece a la provincia de Galapagos");
          break;
          case 21:
             Serial.println("Este numero de cedula pertenece a la provincia de Sucumbios");
          break;
          case 22:
             Serial.println("Este numero de cedula pertenece a la provincia de Orellana");
          break;
          case 23:
             Serial.println("Este numero de cedula pertenece a la provincia de Santo Domingo");
          break;
          case 24:
             Serial.println("Este numero de cedula pertenece a la provincia de Santa Elena");
          break;
          }
        
        }
        else{
          Serial.println("La cedula ingresada no es valida");
          }
  } 
     else{
      Serial.println("La cedula ingresada no es valida");   
         }        
    }
  else {
    Serial.println("La cedula ingresada no es valida");
    }
  }  

}
