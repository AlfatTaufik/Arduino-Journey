int delays = 3000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED_BUILTIN, 256);
  delay(delays);
  analogWrite(LED_BUILTIN, 0);
  delay(delays);
}
