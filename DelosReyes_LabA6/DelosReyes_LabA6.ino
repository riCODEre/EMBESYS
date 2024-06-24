
int LightPins [4] = {10, 11, 12, 13};
int state;
int speed;
int LightCounter = 0;
bool LightState = 1;


void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(A1, INPUT);
  pinMode(A2, INPUT);

  Serial.begin(9600);
}

void loop() {
  state = analogRead(A1);
  speed = (1023 - analogRead(A2))/2;
  
  if (state <= 200){
    digitalWrite(LightPins[LightCounter], LightState);
    LightCounter += 1;
    delay(speed);   
    if(LightCounter > 3){
      LightState = !LightState;
      LightCounter = 0;
    }
  }
  else{
    LightOff();
  }
}


void LightOff(){
  LightCounter = 0;
  LightState = 1;
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

void CheckMoni(){
  // state = analogRead(A1);
  // speed = (1023 - analogRead(A2))/2;
  Serial.print("State:" );
  Serial.println(state);
  Serial.print("Delay:" );
  Serial.print(speed);
  Serial.println(" ms");
  Serial.print("Counter: ");
  Serial.println(LightCounter);
  Serial.print("State: ");
  Serial.println(LightState);
}