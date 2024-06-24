const int L1 = 2, L2 = 4, L3 = 7, L4 = 8;
int delayVal = 500;

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
}

void loop() {
  delay(delayVal);
  
  while (delayVal > 0){
    digitalWrite(L1, HIGH);
    delay(delayVal);
    digitalWrite(L2, HIGH);
    delay(delayVal);
    digitalWrite(L3, HIGH);
    delay(delayVal);
    digitalWrite(L4, HIGH);
    delay(delayVal);

    //Off L2, L3, L4
    digitalWrite(L2, LOW);
    digitalWrite(L3, LOW);
    digitalWrite(L4, LOW);
    digitalWrite(L1, LOW);
    delayVal -= 50;
  }
  delay(400);
  digitalWrite(L1, HIGH);
  digitalWrite(L2, HIGH);
  digitalWrite(L3, HIGH);
  digitalWrite(L4, HIGH);
  delay(300);
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L4, LOW);

  delayVal = 500;
}
