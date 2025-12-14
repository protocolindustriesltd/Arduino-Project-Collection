void setup() {
  Serial.begin(115200);
  Serial.println("Testing 115200 baud rate");
}

void loop() {
  Serial.println(millis());
  delay(1000);
}
