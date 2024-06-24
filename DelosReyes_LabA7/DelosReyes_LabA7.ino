int LightPins[3] = {9, 10, 11};
int number = 17;
int duration;
unsigned int Melody[46] = {
  392, 262, 294, 330, 330, 0, 
  330, 294, 330, 262, 262, 0,
  262, 294, 330, 350, 440, 0,
  440, 392, 350, 330, 0,
  262, 294, 330, 350, 440, 0,
  440, 392, 350, 330, 262, 0,
  392, 262, 294, 330, 350, 0,
  294, 294, 330, 262, 0
  };

unsigned long Durations[46] = {
  4, 4, 4, 4, 4, 8,
  4, 4, 4, 4, 4, 8,
  4, 4, 4, 4, 4, 8,
  4, 4, 4, 4, 8,
  4, 4, 4, 4, 4, 8,
  4, 4, 4, 4, 4, 8,
  4, 4, 4, 4, 4, 8,
  4, 4, 4, 4, 8
};

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  pinMode(6, OUTPUT);

}

void loop() {
  digitalWrite(9,1);
  delay(400);
  digitalWrite(9,0);
  digitalWrite(10, 1);
  for (int j = 0; j < 46; j++){
    duration = 1800 / Durations[j];
    tone(6, Melody[j], duration);
    int pauseBetweenNotes = duration * .950;
    delay(pauseBetweenNotes);
  }
  digitalWrite(10, 0);
  digitalWrite(11,1);
  delay(1000);
  digitalWrite(11,0);

}
