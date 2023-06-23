void setup() {
  pinMode(A1,INPUT);
  Serial.begin(9600);
}

void loop() {
  long luz= analogRead (A1);
  Serial.print("luz:");
  Serial.println(luz);
  delay(500);
}
