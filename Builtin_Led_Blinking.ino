int ledPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH); // LED ON
  delay(20);                // 1 second wait
  digitalWrite(ledPin, LOW);  // LED OFF
  delay(20);                // 1 second wait
}
