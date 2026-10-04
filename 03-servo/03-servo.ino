#include <Servo.h>

Servo myServo;

const int potPin = A0;
const int servoPin = 9;

void setup(){
  myServo.attach(servoPin);
  Serial.begin(9600);
}
void loop(){
  int potValue = analogRead(potPin);
  int angle = map(potValue, 0, 1023, 0, 180);
  myServo.write(angle);
  Serial.println(angle);
  delay(15);
  
}