

int LightPins[4]={5,6,7,8};


void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);

  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  while(digitalRead(2) == LOW && digitalRead(3) == LOW){
    for(int i = 0; i < 4; i++){
      digitalWrite(LightPins[i], HIGH);
      delay(300);
      digitalWrite(LightPins[i], LOW);
      delay(300);
    }
  }
  while(digitalRead(2) == HIGH && digitalRead(3) == LOW){
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(400);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(400);
  }
  
  while(digitalRead(2) == LOW && digitalRead(3) == HIGH){
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    delay(400);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(400);
  }
  while(digitalRead(2) == HIGH && digitalRead(3) == HIGH){
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
      
  }
}
