#define TRIGGER 7
#define ECHO 6
float dist;
long tiempo;
long pitido;

void setup(){
  Serial.begin (115200);
  pinMode(TRIGGER,OUTPUT);
  pinMode(ECHO,INPUT);
}

void loop(){
  medirDist();
  pitido = map (medirDist(), 0, 1000, 1000,0);
  tone(2, pitido);
  delay(500);
  noTone(2);
  delay(500);
  
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
