long pitido;
long luz=0;
void setup() {
  pinMode(A1,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  luz= analogRead (A1);
  pitido = map (luz, 0, 1023, 0,1000);
  tone(2, pitido);
  delay(500);
  noTone(2);
  delay(500);
}