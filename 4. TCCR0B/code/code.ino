void setup() {
  pinMode(5,1);
  TCCR0B&=~(1<<CS01);
}

void loop() {
  int input = analogRead(A0);
  int output = map(output, 0, 1023, 0, 255);
  analogWrite(5, output);
}
