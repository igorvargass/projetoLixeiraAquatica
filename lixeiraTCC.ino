int rele1 = 2;
int rele2 = 3;
int rele3 = 4;

int sensorBoia = 5;




void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);
  pinMode(rele3, OUTPUT);

  pinMode(sensorBoia, INPUT_PULLUP);

}

void loop() {

  int estado = digitalRead (sensorBoia);
  
if(estado == 1){//testa pra ver se o sensor de nivel está com agua
  if(!Serial.available()){
    Start:
     Serial.println("Escolha:");
     Serial.println("1 - Produto 1");
     Serial.println("2 - Produto 2");
     Serial.println("3 - Sem Produto");
     int c = Serial.read();

     if (c == 1){//se a pessoa escolheu o produto 1 liga o rele por 1 seg
      Serial.println("Colocando produto 1 . . . ");
      digitalWrite(rele2,HIGH);
      delay(1000);
      digitalWrite(rele2,LOW);
       if(!Serial.available()){
        Serial.println("Escolha:");
       Serial.println("1 - Ligar Protótipo");
       Serial.println("2 - Voltar Para o inicio");
       int on = Serial.read();

             if(on == 1){
              Serial.println("Ligando Protótipo . . . ");
              digitalWrite(rele1,HIGH);
              delay(4000);
              digitalWrite(rele1,LOW);
             }
             if(on == 2){
              goto Start;
             }
       }
      
     
      
     }
     if (c == 2){
      Serial.println("Colocando produto 2 . . . ");//se a pessoa escolheu o produto 2 liga o rele por 2 seg
      digitalWrite(rele2,HIGH);
      delay(2000);
      digitalWrite(rele2,LOW);
       if(!Serial.available()){//escolhe se quer ligar ou ir pro inicio
        Serial.println("Escolha:");
       Serial.println("1 - Ligar Protótipo");
       Serial.println("2 - Voltar Para o inicio");
       int on = Serial.read();

             if(on == 1 ){
              Serial.println("Ligando Protótipo . . . ");
              digitalWrite(rele1,HIGH);
              delay(4000);
              digitalWrite(rele1,LOW);
             }
             if(on == 2){
              goto Start;
             }
       }
      
     }
     if (c == 3){
       if(!Serial.available()){//escolhe se quer ligar ou ir pro inicio
        Serial.println("Escolha:");
       Serial.println("1 - Ligar Protótipo");
       Serial.println("2 - Voltar Para o inicio");
       int on = Serial.read();
       

             if(on == 1){
              Serial.println("Ligando Protótipo . . . ");
              digitalWrite(rele1,HIGH);
              delay(4000);
              digitalWrite(rele1,LOW);
             }
             if(on == 2){
              goto Start;
             }
       }
      
     }
    }
  
}
  
  
}
