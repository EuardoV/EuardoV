#define TRIGGER 7
#define ECHO 6
float dist;
long tiempo;
long tiempo_buzz;

void setup(){
  Serial.begin (115200);
  pinMode(TRIGGER,OUTPUT);
  pinMode(ECHO,INPUT);
}

void loop(){
  medirDist();
  tiempo_buzz = map (medirDist(), 0, 1000, 100,500);
  tone(2, 500);
  delay(tiempo_buzz);
  noTone(2);
  delay(tiempo_buzz);
  
}
float medirDist(){
  digitalWrite(TRIGGER,LOW);
  delayMicroseconds(5);
  digitalWrite(TRIGGER,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER,LOW);
   
  tiempo = pulseIn (ECHO,HIGH);
  dist = tiempo/58;
}