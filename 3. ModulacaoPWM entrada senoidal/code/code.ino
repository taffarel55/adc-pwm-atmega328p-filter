void setup() {
  pinMode(5,1);
}

void loop() {
  int val = analogRead(0);
  val = val>>2;
  analogWrite(5, val);
}
