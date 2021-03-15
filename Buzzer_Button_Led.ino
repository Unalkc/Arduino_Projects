int buttonPin1 = 11;
int buttonPin2 = 12;
int buzzPin = 2;
int buttonVal1;
int buttonVal2;
int dt = 500;
int LEDbright = 0;
int LEDPin=3;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
pinMode(LEDPin, OUTPUT);
pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonVal1 = digitalRead(buttonPin1);
buttonVal2 = digitalRead(buttonPin2);
Serial.print("Button 1  = ");
Serial.print(buttonVal1);
Serial.print("Button 2 = " );
Serial.println(buttonVal2);
delay(dt);

if (buttonVal1 ==0){
  LEDbright = LEDbright + 5;
}
if( buttonVal2 ==0){
  LEDbright = LEDbright - 5;
}
Serial.println(LEDbright);
if(LEDbright>255){
  LEDbright = 255;
  digitalWrite(buzzPin , HIGH);
  delay(dt);
  digitalWrite(buzzPin, LOW);
}
if(LEDbright<0){
  LEDbright = 0;
  digitalWrite(buzzPin , HIGH);
  delay(dt);
  digitalWrite(buzzPin, LOW);
}

analogWrite(LEDPin,LEDbright);
}
