const int analogInPin = A0;  // ESP8266 Analog Pin ADC0 = A0
boolean touch = 0;
int sensorValue = 0;  // value read from the pot

void setup() {

  Serial.begin(115200);
}

void loop() {
  // read the analog in value
  sensorValue = analogRead(analogInPin);
  if (sensorValue <= 500) {
    Serial.println("Not Touched");
    touch == 0;
  } else if (sensorValue >= 500) {
    touch == 1;
    Serial.println("Touched");
  }
touch =! touch;
  delay(100);
}
