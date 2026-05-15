bool ledState= false;
bool lastButtonState= LOW;
int button = 8;
int led = 2;

void setup() {
 pinMode(button, INPUT_PULLUP);
 pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool buttonstate=digitalRead(button);

  if(buttonstate==LOW && lastButtonState== HIGH)
  {
    ledState= !ledState;
    digitalWrite(led, !ledState);
}
  lastButtonState=buttonstate;
  Serial.println(digitalRead(button));
  delay(500);
  }