int led = 2;
int button = 8;

void setup() {
 pinMode(button, INPUT_PULLUP);
 pinMode(led, OUTPUT);
}

void loop() {
  int buttonstate=digitalRead(button);
  digitalWrite(led, !buttonstate);
}