String myColor;
int greenPin = 8;
int greenPin2 = 9;
int redPin = 10;
String msg = "What Color LED? "; 


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(greenPin, OUTPUT);
pinMode(greenPin2, OUTPUT);
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){
  
}
myColor = Serial.readString();
if(myColor == "red")
{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(greenPin2, LOW);
}
if(myColor == "green1"){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(greenPin2, LOW);
}
if(myColor == "green2"){
    digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(greenPin2, HIGH);
}
}
