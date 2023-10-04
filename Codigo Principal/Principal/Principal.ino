#define SensorE 2//ROXO
#define SensorD 4//LARANJA
#define MotorET 9//BRANCO
#define MotorEF 6//AZUL
#define MotorDT 5//CINZA
#define MotorDF 3//ROXO
#define Velocidade 90
#define VelocidadeP 80
#define VelocidadeR 40




void setup() {
  bool EstadoE = !digitalRead(SensorE);
  bool EstadoD = !digitalRead(SensorD);
  pinMode(SensorE, INPUT);
  pinMode(SensorD, INPUT);
  pinMode(MotorEF, OUTPUT);
  pinMode(MotorET, OUTPUT);
  pinMode(MotorDF, OUTPUT);
  pinMode(MotorDT, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool EstadoE = !digitalRead(SensorE);
  bool EstadoD = !digitalRead(SensorD);
 if(EstadoE && EstadoD) {
   analogWrite(MotorEF, VelocidadeR);
   analogWrite(MotorDF, VelocidadeR);
   analogWrite(MotorET, 0);
   analogWrite(MotorDT, 0);
 }
 else if (!EstadoE && EstadoD){
   analogWrite(MotorEF, Velocidade);
   analogWrite(MotorDF, 0);
   analogWrite(MotorET, 0);
   analogWrite(MotorDT, VelocidadeP);
 }
 else if (EstadoE && !EstadoD){
   analogWrite(MotorEF, 0);
   analogWrite(MotorDF, Velocidade);
   analogWrite(MotorET, VelocidadeP);
   analogWrite(MotorDT, 0);
 }
  else if (!EstadoE && !EstadoD){
    analogWrite(MotorDF, 0);
    analogWrite(MotorDT, 0);
    analogWrite(MotorEF, 0);
    analogWrite(MotorET, 0);
  }
}
