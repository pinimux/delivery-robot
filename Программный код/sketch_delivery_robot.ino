const int m1p1 = 6;
const int m1p2 = 7;
const int m2p1 = 46;
const int m2p2 = 45;

int sens1 = 37;
int sens2 = 36;
int sens3 = 35;
int sens4 = 32;
int sens5 = 31;

int sensVal1 = 0;
int sensVal2 = 0;
int sensVal3 = 0;
int sensVal4 = 0;
int sensVal5 = 0;

void setup(){
  pinMode(sens1, INPUT);
  pinMode(sens3, INPUT);
  pinMode(sens4, INPUT);

  pinMode(m1p1, OUTPUT);
  pinMode(m1p2, OUTPUT);
  pinMode(m2p1, OUTPUT);
  pinMode(m2p2, OUTPUT);

  doForvard();//1
  doLeft();
  doForvard();//2
  doLeft();
  doForvard();//3
  doRight();
  doForvard();//4
  doRight();
  doForvard();//5
  doRight();
  doForvard();//6
  doForvard();
  doLeft();
  doForvard();//7
  doLeft();
  doForvard();//8
  doRight();
  doForvard();//9
  doRight();
  doForvard();//10
  doRight();
  doRight();
  doForvard();//11
  doRight();
  doForvard();//12
  doRight();
  doRight();
  delay(15000);
  doForvard();//13
  doLeft();
  doForvard();//14
  doRight();
  doForvard();//15
  doRight();
  doForvard();//16
  doLeft();
  doForvard();//17
  doLeft();
  doForvard();//18
  doForvard();
  doLeft();
  doForvard();//19
  doForvard();
  doForvard();
  stopMove();
  return 0;
}

void doForvard(){
  while(sensVal2 == HIGH && sensVal5 == HIGH){
    forvard();
  }
}

void doLeft(){
  stopMove();
  while(sensVal4 != LOW){
    left();
  }
}

void doRight(){
  stopMove();
  while(sensVal4 != LOW){
    right();
  }
}

void forvard(){
  digitalWrite(m1p1, LOW);
  digitalWrite(m1p2, HIGH);
  digitalWrite(m2p1, LOW);
  digitalWrite(m2p2, HIGH);
}

void right(){
  digitalWrite(m1p1, HIGH);
  digitalWrite(m1p2, LOW);
  digitalWrite(m2p1, LOW);
  digitalWrite(m2p2, HIGH);
}

void left(){
  digitalWrite(m1p2, HIGH);
  digitalWrite(m1p1, LOW);
  digitalWrite(m2p2, LOW);
  digitalWrite(m2p1, HIGH);
}

void stopMove(){
  digitalWrite(m1p1, LOW);
  digitalWrite(m1p2, LOW);
  digitalWrite(m2p1, LOW);
  digitalWrite(m2p2, LOW);
}

void loop(){
  sensVal1 = digitalRead(sens1);
  sensVal2 = digitalRead(sens2);
  sensVal3 = digitalRead(sens3);
  sensVal4 = digitalRead(sens4);
  sensVal5 = digitalRead(sens5);

if(sensVal3 == LOW)
  right();

if(sensVal1 == LOW)
  left();
}