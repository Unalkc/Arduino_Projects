#define led 3

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  
  
}

void loop() {
   int light = analogRead(A0);
   Serial.println(light);
   delay(100);
   if(light>900){
    digitalWrite(led,LOW);
   }
   if(light < 850){
    digitalWrite(led,HIGH);
   }
  
}
