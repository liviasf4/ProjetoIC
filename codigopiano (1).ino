//MAPEAMENTO DOS PINOS
int azul_do = 2;        //Botão azul  --  Nota DÓ
int amarelo_re = 3;    //Botão amarelo -- Nota RÉ
int verde_mi = 4;      //Botão verde -- Nota MI
int vermelho_fa = 5;   //Botão vermelho -- Nota FÁ
int preto_sol = 6;     //Botão preto -- Nota SOL
int azul2_la = 7;      //Botão azul (2) -- Nota LÁ
int branco_si = 8;     //Botão branco -- Nota SI


int botao_grave = 11;  //Botão que modifica o tom para grave 
int botao_agudo = 12; //Botão que modifica o tom para agudo

int BUZZER = A1;       //Pino analógico 

void setup() {
  Serial.begin(9600);

  //Configura todos os botões como INPUT_PULLUP 
  pinMode(azul_do, INPUT_PULLUP);
  pinMode(amarelo_re, INPUT_PULLUP);
  pinMode(verde_mi, INPUT_PULLUP);
  pinMode(vermelho_fa, INPUT_PULLUP);
  pinMode(preto_sol, INPUT_PULLUP);
  pinMode(azul2_la, INPUT_PULLUP);
  pinMode(branco_si, INPUT_PULLUP);

  pinMode(botao_grave, INPUT_PULLUP);
  pinMode(botao_agudo, INPUT_PULLUP);
}

void loop() {
  //tom : GRAVE
  if (digitalRead(botao_grave) == 0) {
    //DÓ 
    if (digitalRead(azul_do) == 0) {
      tone(BUZZER, 131, 100);
      Serial.println("Do grave");

    //RÉ 
    } else if (digitalRead(amarelo_re) == 0) {
      tone(BUZZER, 147, 100);
      Serial.println("Re grave");

    //MI 
    } else if (digitalRead(verde_mi) == 0) {
      tone(BUZZER, 165, 100);
      Serial.println("Mi grave");

    //FÁ 
    } else if (digitalRead(vermelho_fa) == 0) {
      tone(BUZZER, 175, 100);
      Serial.println("Fa grave");

    //SOL
    } else if (digitalRead(preto_sol) == 0) {
      tone(BUZZER, 196, 100);
      Serial.println("Sol grave");

    //LÁ 
    } else if (digitalRead(azul2_la) == 0) {
      tone(BUZZER, 220, 100);
      Serial.println("La grave");

    //SI 
    } else if (digitalRead(branco_si) == 0) {
      tone(BUZZER, 247, 100);
      Serial.println("Si grave");
    }

    Serial.println("Modo: GRAVE");
  }

  //tom: AGUDO
  else if (digitalRead(botao_agudo) == 0) {

    //DÓ 
    if (digitalRead(azul_do) == 0) {
      tone(BUZZER, 523, 100);
      Serial.println("Do agudo");

    //RÉ
    } else if (digitalRead(amarelo_re) == 0) {
      tone(BUZZER, 587, 100);
      Serial.println("Re agudo");

    //MI
    } else if (digitalRead(verde_mi) == 0) {
      tone(BUZZER, 659, 100);
      Serial.println("Mi agudo");

    //FÁ
    } else if (digitalRead(vermelho_fa) == 0) {
      tone(BUZZER, 698, 100);
      Serial.println("Fa agudo");

    //SOL
    } else if (digitalRead(preto_sol) == 0) {
      tone(BUZZER, 784, 100);
      Serial.println("Sol agudo");

    //LÁ
    } else if (digitalRead(azul2_la) == 0) {
      tone(BUZZER, 880, 100);
      Serial.println("La agudo");

    //SI
    } else if (digitalRead(branco_si) == 0) {
      tone(BUZZER, 988, 100);
      Serial.println("Si agudo");
    }

    Serial.println("Modo: AGUDO");
  }

  //tom: MÉDIO / PADÃO
  else {

    //DÓ 
    if (digitalRead(azul_do) == 0) {
      tone(BUZZER, 262, 100);
      Serial.println("Do medio");

    //RÉ 
    } else if (digitalRead(amarelo_re) == 0) {
      tone(BUZZER, 294, 100);
      Serial.println("Re medio");

    //MI
    } else if (digitalRead(verde_mi) == 0) {
      tone(BUZZER, 330, 100);
      Serial.println("Mi medio");

    //FÁ
    } else if (digitalRead(vermelho_fa) == 0) {
      tone(BUZZER, 349, 100);
      Serial.println("Fa medio");

    //SOL
    } else if (digitalRead(preto_sol) == 0) {
      tone(BUZZER, 392, 100);
      Serial.println("Sol medio");

    //LÁ 
    } else if (digitalRead(azul2_la) == 0) {
      tone(BUZZER, 440, 100);
      Serial.println("La medio");

    //SI
    } else if (digitalRead(branco_si) == 0) {
      tone(BUZZER, 494, 100);
      Serial.println("Si medio");
    }

    Serial.println("Modo: MEDIO");
  }
}
