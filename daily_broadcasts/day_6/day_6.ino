
int sensorPin = A0;
int onboardLED = 13;
int sensorValue = 0;


void setup() {
  Serial.begin(9600); // Sending rate (9600 bit per second/baud)
  pinMode(onboardLED, OUTPUT); // initialize this light pin as an output
}

void loop() {
  // Pulse the builtin LED for a time determined by the sensor
  sensorValue = analogRead(sensorPin);
  digitalWrite(onboardLED, HIGH);
  delay(sensorValue);
  digitalWrite(onboardLED, LOW);
  delay(sensorValue);

  Serial.println(sensorValue);
  delay(sensorValue);
}
