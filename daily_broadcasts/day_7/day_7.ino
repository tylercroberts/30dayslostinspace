// Monitor battery charges

int sensorPin = A0;  // analog input
int onboardLED = 13;
int sensorValue = 0;

unsigned int batteryCapacity = 50000;
unsigned int batteryLevel = 0;
unsigned int ticks = 0;
unsigned int wait = 100;

double PercentFull;

void setup() {
  Serial.begin(9600); // Sending rate (9600 bit per second/baud)
  pinMode(onboardLED, OUTPUT); // initialize this light pin as an output
}

void PrintBatteryPercentage() {
  Serial.print(ticks);
  Serial.print(" ms  charge at ");

  PercentFull = 100*((double)batteryLevel/(double)batteryCapacity);
  Serial.print(PercentFull);
  Serial.println("%");
}
void loop() {
  // Pulse the builtin LED for a time determined by the sensor
  sensorValue = analogRead(sensorPin);
  batteryLevel += sensorValue;
  ticks += wait;

  if (batteryLevel >= batteryCapacity){
    Serial.print(ticks);
    Serial.print(" ms    ");
    Serial.println("FULLY CHARGED");
    batteryLevel = batteryCapacity;
    ticks = 0;
    delay(20000);
  }
  else {
    PrintBatteryPercentage();
  }

  delay(wait);
}
