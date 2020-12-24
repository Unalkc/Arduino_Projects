int redled = 13; 
int greenled = 12; 
int greenled2 = 11;
int dit = 50;
int dah = 100;
int longW =  1000;
void setup() {
  // put your setup code here, to run once:
pinMode(redled, OUTPUT);
pinMode(greenled, OUTPUT);
pinMode(greenled2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redled, HIGH);
delay(dit);
digitalWrite(redled, LOW);
delay(dah);

digitalWrite(redled, HIGH);
delay(dit);
digitalWrite(redled, LOW);
delay(dah);

digitalWrite(greenled, HIGH);
delay(dit);
digitalWrite(greenled, LOW);
delay(dah);

digitalWrite(greenled2, HIGH);
delay(dit);
digitalWrite(greenled2, LOW);
delay(dah);

digitalWrite(greenled2, HIGH);
delay(dit);
digitalWrite(greenled2, LOW);
delay(dah);

delay(longW);

}
