#define MOTOR_1_DIRECAO 10
#define MOTOR_2_DIRECAO 11
#define MOTOR_1_VEL 5
#define MOTOR_2_VEL 6
#define BOTAO_1 2
#define BOTAO_2 3

void setup() {
  pinMode(MOTOR_1_VEL, OUTPUT);
  pinMode(MOTOR_2_VEL, OUTPUT);
  pinMode(MOTOR_1_DIRECAO, OUTPUT);
  pinMode(MOTOR_2_DIRECAO, OUTPUT);
  pinMode(BOTAO_1, INPUT);
  pinMode(BOTAO_2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int estadoBotao1 = digitalRead(BOTAO_1);
  int estadoBotao2 = digitalRead(BOTAO_2);
 
  while (estadoBotao1 == HIGH) {
    motor_subir();
  }
  while (estadoBotao2 == HIGH) {
    motor_descer();
  }
  motor_parar();
}

void motor_subir() {
  digitalWrite(MOTOR_1_DIRECAO, LOW);
  analogWrite(MOTOR_1_VEL, 255);

  digitalWrite(MOTOR_2_DIRECAO, LOW);
  analogWhrite(MOTOR_2_VEL,255);
}

void motor_parar() {
  analogWrite(MOTOR_1_VEL, 0);
  analogWrite(MOTOR_2_VEL, 0);
}

void motor_descer() {
  digitalWrite(MOTOR_1_DIRECAO, HIGH);
  analogWrite(MOTOR_1_VEL, 255);

  digitalWrite(MOTOR_2_DIRECAO, HIGH);
  analogWhrite(MOTOR_2_VEL,255);
}
