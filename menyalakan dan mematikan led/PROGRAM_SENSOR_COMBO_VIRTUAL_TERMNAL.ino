int Button1 = 2;
int Button2 = 3;
int LED = 13;

int ButtonState = 0;

void setup() {
pinMode(Button1, INPUT);
pinMode(Button2, INPUT);
pinMode(LED, OUTPUT);
}

void loop() {
  if(digitalRead(Button1)== LOW){
    digitalWrite(LED, LOW);
  }
  else if(digitalRead(Button2)== LOW){
    digitalWrite(LED, HIGH);
  }

}

