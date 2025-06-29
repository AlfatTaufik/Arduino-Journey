int delays = 3000;

void setup() {
  // put your setup code here, to run once:
  // Serial.begin(9600);
  // Serial.print("Test");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9600);
  analogWrite(LED_BUILTIN, 256);
  delay(delays);
  Serial.println("Hai, aku sudah menjeda");
  analogWrite(LED_BUILTIN, 0);
  delay(delays);
}
