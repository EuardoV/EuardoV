long luz=0;
int print;
int print_ant;
#define OSCURO 4
#define AMBIENTE 3
#define LUZ_ART 2

void setup() {
  pinMode(A1,INPUT);
  pinMode(OSCURO,OUTPUT);
  pinMode(AMBIENTE,OUTPUT);
  pinMode(LUZ_ART,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  luz= analogRead (A1);
  leds();
  Print();
}

void leds (void){
  print_ant= print;
  if(luz < 341){
    digitalWrite(OSCURO, HIGH);
    print=-1;
  }
  else if(luz < 682 && luz > 341){
    digitalWrite(AMBIENTE, HIGH);
    print=0;
  }
  else if(luz < 1023 && luz>682){
    digitalWrite(LUZ_ART, HIGH);
    print=1;
  }
}
void Print(void){
  if (print != print_ant){
    if(print > 0){
      Serial.println("Luz artificial");
    }
    else if(print < 0){
      Serial.println("Oscuridad");
    }
    else{
      Serial.println("Luz Ambiente");
    }
  }
}
