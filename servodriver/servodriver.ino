#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver servoDriver = Adafruit_PWMServoDriver();

void setup() {
  Serial.begin(9600);
  servoDriver.begin();
  servoDriver.setPWMFreq(60);
  }
  
void loop() {
    for(int i = 0; i < 180; i++) {
    setServo(0, i);
 //   Serial.println(i);
    delay(20);
    }
    delay(500);
    
     for(int i = 180; i > 0; i--) {
    setServo(0, i);
    // Serial.println(i);
    delay(20);
    }
    
    delay(500);
    
}
    
void setServo(int servonum, int servopos) {
  int val = map(servopos, 0, 180, 150, 545);
  Serial.print(servopos);
  Serial.print(" - ");
  Serial.println(val);
  servoDriver.setPWM(servonum,0 , val);
}
