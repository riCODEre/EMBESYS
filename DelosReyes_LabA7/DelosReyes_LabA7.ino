int LightPins[3] = {9, 10, 5};
int duration;
double conv_light;
int delayTime;
double Melody[46] = {
  392, 262, 294, 330, 330, 0, 
  330, 294, 330, 262, 262, 0,
  262, 294, 330, 350, 440, 0,
  440, 392, 350, 330, 0,
  262, 294, 330, 350, 440, 0,
  440, 392, 350, 330, 262, 0,
  392, 262, 294, 330, 350, 0,
  294, 294, 330, 262, 0
  };

//https://gist.github.com/mhermans/b5c39250ce74c8974324 - You Are My Sunshine
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

  pinMode(A1, INPUT);

  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  delay(400);
  
  
  for (int j = 0; j < 46; j++){
    delayTime = analogRead(A1);
    Serial.println(delayTime);
    duration = ((delayTime * 4) / Durations[j]);

    // //Using (calculated map - get percent and multiplied to max number)
    // for (int i = 0; i < 3; i++){
    //   conv_light = (Melody[j]/450)*255;
    //   analogWrite(LightPins[i], conv_light);
    //   Serial.println(conv_light);
    // }

    
    for (int i = 0; i < 3; i++){
      conv_light = (Melody[j]/450)*255;
      analogWrite(LightPins[i], Melody[j]);
    }

    tone(6, Melody[j], duration);
    int pauseBetweenNotes = duration * .950;
    delay(pauseBetweenNotes);
  }

}
