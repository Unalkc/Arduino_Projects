const int LEDarrays[] = {2,3,4,5,6,7,8,9};

void setup () {     
 
  for(int i=0; i<8 ;i++)    
  { 
    pinMode(LEDarrays[i], OUTPUT); 
  }

}

void loop() {                                                
  for(int i=0; i<8; i++){ 
    digitalWrite(LEDarrays[i],HIGH);      
    delay(50);                           
    digitalWrite(LEDarrays[i],LOW);         
  }
 
  for(int j=7;j>-1; j--)
  { 
    digitalWrite(LEDarrays[j],HIGH);     
    delay(50);
    digitalWrite(LEDarrays[j], LOW);
  }
}
