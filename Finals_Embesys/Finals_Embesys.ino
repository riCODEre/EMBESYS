#include <DHT.h>
#include <LiquidCrystal_I2C.h>
#include <math.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

DHT dht1(A1, DHT11);

float hum;
float tempC;
unsigned long msec;

int heater = 8;
int fan = 7;
int minusBtn = 6;
int plusBtn = 5;
int modeBtn = 4;
int YLed = 3;
int BLed = 2;
int modeState = 1;

float targetTemp;
float delta;

unsigned long dhtStart = 0;
unsigned long modeStart = 0;
unsigned long heatStart = 0;
bool heaterTOState = false;
unsigned long heaterMaxOn = 20000;
unsigned long heaterMaxOff = 40000;
float timer;

void setup() {
  pinMode(fan, OUTPUT);
  pinMode(heater, OUTPUT);
  pinMode(minusBtn, INPUT);
  pinMode(plusBtn, INPUT);
  pinMode(modeBtn, INPUT);
  pinMode(YLed, OUTPUT);
  pinMode(BLed, OUTPUT);

  Serial.begin(9600);
  dht1.begin();
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0, 0); 
  lcd.print("Made by: Eric");
  lcd.setCursor(5, 1); 
  lcd.print("Delos Reyes");
  delay(1500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Starting...");
  delay(3000);
  lcd.clear();

  hum = dht1.readHumidity();
  tempC = dht1.readTemperature(); 
  targetTemp = ceil(tempC); 
}

void loop() {
  msec = millis();
  if (msec - dhtStart >= 2000){
    hum = dht1.readHumidity();
    tempC = dht1.readTemperature();
    dhtStart = msec;
  }
  if (modeState == 1){
    lcd.setCursor(0, 0);
    timer = (float)msec/1000/60;
    lcd.print("Timer:" ); lcd.print(timer); lcd.print("m");
    lcd.setCursor(0, 1); 
    lcd.print("Temp: "); lcd.print(tempC); lcd.print("C");
  }
  if (modeState == 2){
      lcd.setCursor(0, 0);
      lcd.print("Target: "); lcd.print(targetTemp); lcd.print("C");
      lcd.setCursor(0, 1);
      delta = targetTemp - tempC;
      lcd.print("Delta: "); lcd.print(delta); lcd.print("C");
  }

  if (digitalRead(modeBtn) == 1 && (modeStart + 750) <= msec){
    modeStart = msec;
    lcd.clear();
    if (modeState == 1){
      modeState = 2;
    }
    else{
      modeState = 1;
    }
  }

  if (digitalRead(minusBtn) == 1 && heatStart + 800 <= msec){
    if (targetTemp > 25){
      heatStart = msec;
      targetTemp -= 0.5;
    }
    
  }

  if (digitalRead(plusBtn) == 1 && targetTemp <= 90 && heatStart + 800 <= msec){
    heatStart = msec;
    targetTemp += 0.5;
    
  }
  setHeater();

  
}

void setHeater(){
  Serial.println(heaterTOState);
  Serial.print("heaterTS: "); Serial.println(msec);
  Serial.print("heaterMaxOn: "); Serial.println(heaterMaxOn);
  Serial.print("heaterMaxOff: "); Serial.println(heaterMaxOff);
  if (tempC < targetTemp){
    
    if (heaterTOState == false){
      if (msec <= heaterMaxOn){
        digitalWrite(heater, 1);
        
      }
      else{
        heaterTOState = true;
        heaterMaxOff = msec + 50000;
      }
    }

    if (heaterTOState == true){
      if (msec <= heaterMaxOff){
        digitalWrite(heater, 0);
      }
      else{
        heaterTOState = false;
        heaterMaxOn = msec + 10000;
      }
    }

    digitalWrite(BLed, 0);
    digitalWrite(YLed, 1);
    digitalWrite(fan, 1);
  }
  else{
    digitalWrite(heater, 0);
    digitalWrite(BLed, 1);
    digitalWrite(YLed, 0);
    digitalWrite(fan, 0);
  }
}
