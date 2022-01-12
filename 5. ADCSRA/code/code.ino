void setup() {
  pinMode(5,1);
  TCCR0B&=~(1<<CS01);
  ADCSRA&=~(1<<ADPS1);
  ADCSRA&=~(1<<ADPS0);
}

void loop() {
  int val = analogRead(0);
  val = val<<2;
  analogWrite(5, val);
}
