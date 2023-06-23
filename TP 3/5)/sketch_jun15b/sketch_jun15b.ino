#define TRIGGER 7
#define ECHO 6
float dist;
long tiempo;

void setup(){
  Serial.begin (115200);
  pinMode(TRIGGER,OUTPUT);
  pinMode(ECHO,INPUT);
}

void loop(){
  medirDist();
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
  Serial.print("Distancia:");
  Serial.print(dist);
  Serial.println("cm");
  Serial.println(tiempo);
  return(dist);
  delay(500);
}
