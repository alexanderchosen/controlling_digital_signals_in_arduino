// we have 4 LEDS. We have a lED one pin 3 by default
#if 0
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// To turn on
digitalWrite(2, HIGH);
delay(1000);
digitalWrite(3, HIGH);
delay(1000);
digitalWrite(4, HIGH);
delay(1000);
digitalWrite(5, HIGH);
delay(1000);
digitalWrite(5, HIGH);
digitalWrite(4, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
delay(1000);
digitalWrite(4, HIGH);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(5, LOW);
delay(1000);
digitalWrite(3, HIGH);
digitalWrite(2, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
delay(1000);
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
delay(1000);
// To turn off
// digitalWrite(2, LOW);
// digitalWrite(3, LOW);
// digitalWrite(4, LOW);
// digitalWrite(5, LOW);
// delay(1000);
}
#endif
