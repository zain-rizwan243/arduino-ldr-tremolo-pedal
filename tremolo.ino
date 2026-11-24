const int potPin = A0;  // Potentiometer on A0
const int ledPin = 6;   // LED on D6

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the pot (0 to 1023)
  int potValue = analogRead(potPin);

  // Convert pot value to a delay time in milliseconds (e.g., 5ms fast to 500ms slow)
  int blinkSpeed = map(potValue, 0, 1023, 5, 500);

  digitalWrite(ledPin, HIGH); // Turn LED ON
  delay(blinkSpeed);          // Wait

  digitalWrite(ledPin, LOW);  // Turn LED OFF
  delay(blinkSpeed);          // Wait
}
