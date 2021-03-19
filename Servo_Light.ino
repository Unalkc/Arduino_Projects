#include <Servo.h>
int servoPin = 9;
int lightVal;
int lightPin = A0;

Servo myServo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
pinMode(lightPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(250);
  

  
  if(lightVal>75){
    myServo.write(90);
  }
  if(lightVal>250){
    myServo.write(180); 
  }
  if(lightVal<30){
    myServo.write(0);
  }
 

}
