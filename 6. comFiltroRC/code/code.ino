void setup() {
  TCCR0B&=~(1<<CS01);
  ADCSRA&=~(1<<ADPS1);
  ADCSRA&=~(1<<ADPS0);
  pinMode(5,1);
}

void loop() {
  const int output = map(analogRead(A0), 0, 1023, 0, 255);
  analogWrite(5, output);
}
