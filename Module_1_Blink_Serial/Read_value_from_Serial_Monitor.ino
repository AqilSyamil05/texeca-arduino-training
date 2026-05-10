int greenLED = 4;
int yellowLED = 3;
int redLED = 2;

void setup() {
  Serial.begin(9600);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  digitalWrite(greenLED,HIGH); 
  digitalWrite(yellowLED,LOW); 
  digitalWrite(redLED,LOW); 
  Serial.print(digitalRead(2));
  Serial.print(digitalRead(3));
  Serial.println(digitalRead(4));
  delay(500); 
  digitalWrite(greenLED,LOW); 
  digitalWrite(yellowLED,HIGH); 
  digitalWrite(redLED,LOW); 
  Serial.print(digitalRead(2));
  Serial.print(digitalRead(3));
  Serial.println(digitalRead(4));
  delay(500); 
  digitalWrite(greenLED,LOW); 
  digitalWrite(yellowLED,LOW); 
  digitalWrite(redLED,HIGH); 
  Serial.print(digitalRead(2));
  Serial.print(digitalRead(3));
  Serial.println(digitalRead(4));
  delay(500);
}
