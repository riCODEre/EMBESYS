#include<Servo.h>
Servo servo1;

int digits[11][7] = {
  {0,0,0,0,0,0,0},
  {1,1,0,1,1,1,1},
  {1,1,1,1,1,1,1},
  {0,0,0,0,1,1,1},
  {1,1,1,1,1,0,1},
  {1,1,0,1,1,0,1},
  {1,1,0,0,1,1,0},
  {1,0,0,1,1,1,1},
  {1,0,1,1,0,1,1},
  {0,0,0,0,1,1,0},
  {0,1,1,1,1,1,1}
};

long servo_start = 0;
int count = 0;
unsigned long start = 0;
unsigned long limit_sec = 1000;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  for (int i = 13; i > 6; i--){
    pinMode(i, OUTPUT);
  }
  pinMode(6, INPUT);
  servo1.attach(5);
  Serial.begin(9600);
  servo1.write(1);
}

void loop() {
  if (digitalRead(6) == HIGH || count > 9) {
    count=0;
    servo_start = start;
    
  }
  unsigned long cur_time = millis();
  servo1.write(map(cur_time, servo_start, servo_start+10000,1,180));
  if (cur_time - start >= limit_sec){
    start = cur_time;
    for(int i = 13; i > 6; i--){
      
      digitalWrite(i, digits[count][i]);
      
    };
    
    count++;
  }

  //LED for Running
  if (start + 750 <= cur_time){
    digitalWrite(4, HIGH);
  }
  else{
     digitalWrite(4, LOW);
  };
  //LED for reset
  if (cur_time >= servo_start && cur_time <= servo_start + 500){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  else{
    digitalWrite(3, LOW);
  }

}
