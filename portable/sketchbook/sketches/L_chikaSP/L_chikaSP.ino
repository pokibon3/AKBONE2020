void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D15, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(D15, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(D15, LOW);
  delay(1000);
}
