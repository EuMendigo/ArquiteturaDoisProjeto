#define MotorE2 3
#define MotorE1 5
#define MotorD1 6
#define MotorD2 9
#define Sensor 2


void setup() {

  pinMode(Sensor, INPUT);
  bool estadoS = digitalRead(Sensor);
  pinMode(MotorE1, OUTPUT);
  pinMode(MotorE2, OUTPUT);
  pinMode(MotorD1, OUTPUT);
  pinMode(MotorD2, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:;
  bool estadoS = digitalRead(Sensor);
  if(estadoS){
    digitalWrite(MotorE1, LOW);
    digitalWrite(MotorE2, LOW);
    digitalWrite(MotorD1, LOW);
    digitalWrite(MotorD2, LOW);
  }
  if(Sensor){
    digitalWrite(MotorE1, LOW);
    digitalWrite(MotorE2, LOW);
  }
  
}


