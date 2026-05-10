int greenLED = 4;
int yellowLED = 3;
int redLED = 2;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  delay(500);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
  delay(500); 
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
  delay(500);
}
