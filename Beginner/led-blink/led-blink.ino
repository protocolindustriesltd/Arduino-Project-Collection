/*
  Project: LED Blink
  Board: Arduino Uno / Nano / Mega
  Description: Blink an LED at a fixed interval
*/

int ledPin = 13;   // Built-in LED pin (can change if using external LED)

void setup() {
  pinMode(ledPin, OUTPUT);   // Set LED pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED ON
  delay(1000);                // Wait 1 second
  digitalWrite(ledPin, LOW);  // Turn LED OFF
  delay(1000);                // Wait 1 second
}
