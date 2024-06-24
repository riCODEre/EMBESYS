int LightPins [8] = {6, 7, 8, 9, 10, 11, 12, 13};
int state;
int speed;
int Counter = 0;
int Limiter;

void setup() {
  //Lights
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  state = analogRead(A1);
  Serial.print("Sense: ");
  Serial.println(state);
  if (state < 390){
    LimiterFunc();
    if (Counter >= Limiter){
      Counter = 0;
      LOff();
    }
    digitalWrite(LightPins[Counter], 1);
    Counter += 1;
    delay(analogRead(A1)-100);
    
  }
  else{
    LOff();
    Limiter = 0;
    Counter = 0;
  }

}

void LOff(){
  for (int j = 0; j < 8; j++){
    digitalWrite(LightPins[j], 0);
  };
  
}

void LimiterFunc(){
  if (state > 362 && state < 390){
    Limiter = 1;
  }
  else if (state > 324 && state < 362){
    Limiter = 2;
  }
  else if (state > 286 && state < 324){
    Limiter = 3;
  }
  else if (state > 248 && state < 286){
    Limiter = 4;
  }
  else if (state > 210 && state < 248){
    Limiter = 5;
  }
  else if (state > 172 && state < 210){
    Limiter = 6;
  }
  else if (state > 134 && state < 172){
    Limiter = 7;
  }
  else if (state > 110 && state < 134){
    Limiter = 8;
  }
  else if (state < 100){
    Limiter = 9;
  }
}


