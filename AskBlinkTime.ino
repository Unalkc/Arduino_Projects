int numBlinks;
int j;
int bt = 500;
int pin1 = 12;
String msg = "Enter the Blink Time:";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pin1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);

while(Serial.available()==0)
{
  
}
numBlinks = Serial.parseInt();
for(j=1; j<=numBlinks;j++)
{
digitalWrite(pin1, HIGH);
delay(bt);
digitalWrite(pin1, LOW);
delay(bt);
}
}
