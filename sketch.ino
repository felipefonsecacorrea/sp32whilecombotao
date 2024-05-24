#define qnt_led 5
#define button 15
#define tempo 300

int pinosleds[qnt_led] = {0, 16, 5, 19, 21};

void setup() {
 for (int i = 0; i <  qnt_led; i++) {
  pinMode(pinosleds[i], OUTPUT);
 }
 pinMode(button, INPUT_PULLUP);
}

void loop() {
  for (int i = 0; i <  qnt_led; i++) {
    digitalWrite(pinosleds[i], HIGH);
    delay(tempo);
    digitalWrite(pinosleds[i], LOW);

  while (digitalRead(button) == LOW){
    digitalWrite(pinosleds[i], HIGH);

    if(digitalRead(button == HIGH)){
      digitalWrite(pinosleds[i], LOW);
    }
    }
      
  }

}
