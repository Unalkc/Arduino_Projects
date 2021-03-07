String  myName;
String  msg = "What is Your Name? ";
String  msg1 = "Hello ";
String  msg2= ", Welcome to Arduino! ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0);
{
  
}
myName = Serial.readString();
Serial.print(msg1);
Serial.print(myName);
Serial.println(msg2);
}
