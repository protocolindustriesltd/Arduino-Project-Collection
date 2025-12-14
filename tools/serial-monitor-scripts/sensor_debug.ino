int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.println(value);
  delay(500);
}
