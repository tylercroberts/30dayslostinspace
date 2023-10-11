/*

*/
int R = 10;
int G = 11;
int B = 12;
int SwitchOne = 2;
int SwitchTwo = 3;
int SwitchThree = 4;


void setup() {
  pinMode(R, OUTPUT); // initialize this light pin as an output
  pinMode(G, OUTPUT); // initialize this light pin as an output
  pinMode(B, OUTPUT); // initialize this light pin as an output

  pinMode(SwitchOne, INPUT); // initialize this switch pin as an input
  pinMode(SwitchTwo, INPUT); // initialize this switch pin as an input
  pinMode(SwitchThree, INPUT); // initialize this switch pin as an input

}
void loop() {
  if (digitalRead(SwitchOne) == HIGH){
    digitalWrite(R, HIGH); // set value to 5V
    digitalWrite(G, HIGH); // set value to 5V
    digitalWrite(B, HIGH); // set value to 5V

  }

  else{
    digitalWrite(R, LOW); // turn LED off
    digitalWrite(G, LOW); // set value to 5V
    digitalWrite(B, LOW); // set value to 5V
  }
  if (digitalRead(SwitchTwo) == HIGH){
    digitalWrite(G, HIGH); // set value to 5V
  }

  else{
    digitalWrite(G, LOW); // turn LED off
  }
  if (digitalRead(SwitchThree) == HIGH){
    digitalWrite(B, HIGH); // set value to 5V
  }

  else{
    digitalWrite(B, LOW); // turn LED off
  }
}
