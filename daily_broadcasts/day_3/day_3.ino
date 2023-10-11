/*

*/
int LED = 12;
int SwitchOne = 2;



void setup() {
  pinMode(LED, OUTPUT); // initialize this light pin as an output
  pinMode(SwitchOne, INPUT); // initialize this switch pin as an input

}
void loop() {
  if (digitalRead(SwitchOne) == HIGH){
    digitalWrite(LED, LOW); // set value to 5V
    digitalWrite(LED, HIGH); // set value to 5V
    delay(150);
    digitalWrite(LED, LOW); // set value to 5V
    delay(150);
    digitalWrite(LED, HIGH); // set value to 5V
    delay(150);
    digitalWrite(LED, LOW); // set value to 5V
    delay(150);
    digitalWrite(LED, HIGH); // set value to 5V
    delay(150);
    digitalWrite(LED, LOW); // set value to 5V
    delay(1000);

    digitalWrite(LED, HIGH); // set value to 5V
    delay(1000);
    digitalWrite(LED, LOW); // set value to 5V
    delay(1000);
    digitalWrite(LED, HIGH); // set value to 5V
    delay(1000);
    digitalWrite(LED, LOW); // set value to 5V
    delay(1000);
    digitalWrite(LED, HIGH); // set value to 5V
    delay(1000);
    digitalWrite(LED, LOW); // set value to 5V
    delay(1000);

    digitalWrite(LED, HIGH); // set value to 5V
    delay(150);
    digitalWrite(LED, LOW); // set value to 5V
    delay(150);
    digitalWrite(LED, HIGH); // set value to 5V
    delay(150);
    digitalWrite(LED, LOW); // set value to 5V
    delay(150);
    digitalWrite(LED, HIGH); // set value to 5V
    delay(150);
    digitalWrite(LED, LOW); // set value to 5V
    delay(1000);

  }

  else{
    digitalWrite(LED, LOW); // turn LED off
  }
}
