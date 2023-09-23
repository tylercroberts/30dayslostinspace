/*
DONT FORGET SEMICOLONS
*/

int light=12; // This is the pin we want to control our light


void setup() {
  pinMode(light, OUTPUT); // initialize this light pin as an output
}

void loop() {
  digitalWrite(light, LOW); // set value to 5V
  digitalWrite(light, HIGH); // set value to 5V
  delay(150);                    
  digitalWrite(light, LOW); // set value to 5V
  delay(150); 
  digitalWrite(light, HIGH); // set value to 5V
  delay(150);                    
  digitalWrite(light, LOW); // set value to 5V
  delay(150); 
  digitalWrite(light, HIGH); // set value to 5V
  delay(150);                    
  digitalWrite(light, LOW); // set value to 5V
  delay(1000); 
  
  digitalWrite(light, HIGH); // set value to 5V
  delay(1000);                    
  digitalWrite(light, LOW); // set value to 5V
  delay(1000); 
  digitalWrite(light, HIGH); // set value to 5V
  delay(1000);                    
  digitalWrite(light, LOW); // set value to 5V
  delay(1000); 
  digitalWrite(light, HIGH); // set value to 5V
  delay(1000);                    
  digitalWrite(light, LOW); // set value to 5V
  delay(1000); 
  
  digitalWrite(light, HIGH); // set value to 5V
  delay(150);                    
  digitalWrite(light, LOW); // set value to 5V
  delay(150); 
  digitalWrite(light, HIGH); // set value to 5V
  delay(150);                    
  digitalWrite(light, LOW); // set value to 5V
  delay(150); 
  digitalWrite(light, HIGH); // set value to 5V
  delay(150);                    
  digitalWrite(light, LOW); // set value to 5V
  delay(1000); 
}
