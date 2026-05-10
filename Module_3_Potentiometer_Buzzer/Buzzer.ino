int buzzer = 3;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  analogWrite(buzzer,0); //write analog value to buzzer (0-255)
  delay(50);
  analogWrite(buzzer,51);
  delay(50);
  analogWrite(buzzer,102);
  delay(50);
  analogWrite(buzzer,204);
  delay(50);
  analogWrite(buzzer,255);
  delay(50);
}