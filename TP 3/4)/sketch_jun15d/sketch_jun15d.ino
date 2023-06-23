int tiempo= 500;
long luz=0;
void setup() {
  pinMode(A1,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  luz= analogRead (A1);
  tiempo = map (luz, 0, 1023, 500,100);
  tone(2, 500);
  delay(tiempo);
  noTone(2);
  delay(tiempo);
}
