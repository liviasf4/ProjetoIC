int azul_do = 2;
int amarelo_re =3; 
int verde_mi = 4;
int vermelho_fa = 5; 
int preto_sol = 6; 
int azul2_la = 7; 
int branco_si = 8; 
int botao_grave = 11;
int botao_agudo = 12;
int BUZZER = A1;

void setup() {
  Serial.begin(9600);
  pinMode (azul_do, INPUT_PULLUP);
  pinMode (amarelo_re, INPUT_PULLUP);
  pinMode (verde_mi, INPUT_PULLUP);
  pinMode (vermelho_fa, INPUT_PULLUP);
  pinMode (preto_sol, INPUT_PULLUP);
  pinMode (azul2_la, INPUT_PULLUP);
  pinMode (branco_si, INPUT_PULLUP);
  pinMode (botao_grave, INPUT_PULLUP);
  pinMode (botao_agudo, INPUT_PULLUP);
}

void loop() {

  //GRAVE

  if (digitalRead(botao_grave) == 0) {
      if (digitalRead(azul_do) == 0){
        tone(BUZZER, 131, 100);
        Serial.println("azul1m");

      }else if (digitalRead(amarelo_re) == 0){
        tone(BUZZER, 147, 100);
        Serial.println("azul1m");

      }else if (digitalRead(verde_mi) == 0){
        tone(BUZZER, 165, 100);
        Serial.println("azul1m");

      }else if (digitalRead(vermelho_fa) == 0){
        tone(BUZZER, 175, 100);
        Serial.println("azul1m");

      }else if (digitalRead(preto_sol) == 0){
        tone(BUZZER, 196, 100);
        Serial.println("azul1m");

      }else if (digitalRead(azul2_la) == 0){
        tone(BUZZER, 220, 100);
        Serial.println("azul1m");

      }else if (digitalRead(branco_si) == 0){
        tone(BUZZER, 247, 100);
        
      
      }

    Serial.println("botao grave");
  }
  //AGUDO
  else if (digitalRead(botao_agudo) == 0) {
      if (digitalRead(azul_do) == 0){
        tone(BUZZER, 523, 100);
        Serial.println("azul1A");

      }else if (digitalRead(amarelo_re) == 0){
        tone(BUZZER, 587, 100);
        Serial.println("amareloA");

      }else if (digitalRead(verde_mi) == 0){
        tone(BUZZER, 659, 100);
        Serial.println("verdeA");

      }else if (digitalRead(vermelho_fa) == 0){
        tone(BUZZER, 698, 100);
        Serial.println("vermelhoA");

      }else if (digitalRead(preto_sol) == 0){
        tone(BUZZER, 784, 100);
        Serial.println("pretoA");

      }else if (digitalRead(azul2_la) == 0){
        tone(BUZZER, 880, 100);
        Serial.println("azul2A");

      }else if (digitalRead(branco_si) == 0){
        tone(BUZZER, 988, 100);
        Serial.println("brancoA");
      }

  Serial.println("botao agudo");
  }
  
   //MEDIO
  else{
      if (digitalRead(azul_do) == 0){
        tone(BUZZER, 262, 100);
        Serial.println("azul1m");

      }else if (digitalRead(amarelo_re) == 0){
        tone(BUZZER, 294, 100);
        Serial.println("amarelom");

      }else if (digitalRead(verde_mi) == 0){
        tone(BUZZER, 330, 100);
        Serial.println("verdem");

      }else if (digitalRead(vermelho_fa) == 0){
        tone(BUZZER, 349, 100);
        Serial.println("vermelhom");

      }else if (digitalRead(preto_sol) == 0){
        tone(BUZZER, 392, 100);
        Serial.println("pretom");

      }else if (digitalRead(azul2_la) == 0){
        tone(BUZZER, 440, 100);
        Serial.println("azul2m");

      }else if (digitalRead(branco_si) == 0){
        tone(BUZZER, 494, 100);
        Serial.println("brancom");
      }
  Serial.println("botao medio");    
  }
}
