int inputPin = 9;
void setup() {
  Serial.begin(115200);
  pinMode(9, INPUT_PULLUP);
}
void loop() {
   int value = digitalRead(inputPin);
   if (value == 0) {
     Serial.println(value);
     tone(15, 1000);
     delay(100);
     noTone(15);
   }
}
