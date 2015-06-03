#include <Wire.h>
#include <Adafruit_PWMServoDriver.h> //servo library included

Adafruit_PWMServoDriver servoDriver = Adafruit_PWMServoDriver(); //create servo driver object

void setup() {
  Serial.begin(9600);
  
  servoDriver.begin(); //begin servodrover
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
    
void setServo(int servonum, int servopos) { //set servo (0-15 | servonum) position (0-180 | servopos)
  int val = map(servopos, 0, 180, 150, 545); //remap 0-180 to servo positions on I2C driver (0=150, 180=545)
  Serial.print(servopos); //print to serial port
  Serial.print(" - ");
  Serial.println(val);
  servoDriver.setPWM(servonum,0 , val); //set servo position
}
