int potVal;
int pinPot = A1;
int myNumb;
int buzzPin = 8;
float V1;

int dt = 2000;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(pinPot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

potVal = analogRead(pinPot);
V1 = (5./1023.)*potVal;
Serial.println(V1);
delay(300);



if (V1 > 2. ){
  digitalWrite(buzzPin, HIGH);
  delay(500);
  digitalWrite(buzzPin, LOW);
}
}
