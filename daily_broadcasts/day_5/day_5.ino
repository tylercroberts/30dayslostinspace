// Dictionary - Version: Latest
#include <Dictionary.h>
#include <DictionaryDeclarations.h>

String phrase1 = "good dog bad dog";
String phrase2 = "i love you";
String phrase3 = "sos";

int R = 10;
int G = 11;
int B = 12;
int SwitchOne = 2;
int SwitchTwo = 3;
int SwitchThree = 4;

int delayUnit = 150;
int shortDelay = delayUnit;
int longDelay = 3*delayUnit;
int betweenWords  = 7*delayUnit;


// morse is a phrase in morse code, represented by an array of strings.
// Each element of this array takes the form of dashes and underscores
void morseToCommand(String morse) {
  for(int j = 0; j < morse.length(); j++){
    if(morse[j] == "-"){
      digitalWrite(R, HIGH); // set value to 5V
      delay(shortDelay);
      digitalWrite(R, LOW); // set value to 5V
    }
    else {
      digitalWrite(R, HIGH);
      delay(longDelay);
      digitalWrite(R, LOW);

    }
    // delay between units
    delay(shortDelay);
  }
  // iterate

}


void setup() {
  pinMode(R, OUTPUT); // initialize this light pin as an output
  Serial.begin(9600);
}

void loop() {

    Dictionary &d = *(new Dictionary(5));


    d("a","-_");
    d("b", "_---");
    d("c", "_-_-");
    d("d", "_--");
    d("e", "-");
    d("f", "--_-");
    d("g", "__-");
    d("h","----");
    d("i", "--");
    d("j", "-___");
    d("k", "_-_");
    d("l", "-_--");
    d("m", "__");
    d("n", "_-");
    d("o", "___");
    d("p","-__-");
    d("q", "__-_");
    d("r", "-_-");
    d("s", "---");
    d("t", "_");
    d("u", "--_");
    d("v", "---_");
    d("w", "-__");
    d("x", "_--_");
    d("y", "_-__");
    d("z", "__--");
    // we will give a word
    String input1 = "bad dog good dog";

    for(int i = 0; i < input1.length(); i++){
      Serial.println("CURRENT CHAR:");
      Serial.println(i);
      // Serial.println(input1[i]);
      // Serial.println(d[input1[i]]);  // Current issue in this line
      // it doesnt read the morse code from this look up
      // try the fix below
      char x[] = {input1[i]};
      String mystring(x);
      Serial.println(d[mystring]);

      if(mystring == " "){
        delay(betweenWords);
        Serial.println(mystring);
        Serial.println("Is there space?");
      }
      else{
        morseToCommand(d[mystring]);
        delay(longDelay);
      }
    }
    delay(1000);

}
