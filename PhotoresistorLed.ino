int lightPen = A0;
int lightVal;
int dv = 250;
int redPin = 9;
int greenPin = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(lightPen, INPUT);
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(lightPen);
Serial.println(lightVal);
delay(dv);

if (lightVal<70)
{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
}
if (lightVal>70){
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
}

}
