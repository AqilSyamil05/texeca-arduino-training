void setup()
{
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  int potValue = analogRead(A0);
  potValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(3, potValue);
}