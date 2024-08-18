
#include<Stepper.h>

int stepsRev = 2048;
Stepper stepperM = Stepper(stepsRev, 2, 3, 4, 5);

String data[3];
int index = 0;
float steps = 0.0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()){
    data[index] = Serial.readStringUntil(';');
    Serial.print("Data read: "); Serial.println(data[index]);
    index++;
    if (index == 3){
      index = 0;
      stepperM.setSpeed(data[2].toInt());
      steps = (stepsRev / 360.0) * data[1].toInt();
      if(data[0] == "c") stepperM.step(steps);
      else if(data[0] == "w") stepperM.step(-steps);
    }
    Serial.flush();
  }
}
