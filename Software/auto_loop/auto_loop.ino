const int out_pin = 9;

void setup() {
  pinMode(out_pin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(out_pin, LOW);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(out_pin, HIGH);
  delay(12000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(out_pin, LOW);
  delay(50000);
}
