bool walkState= false;
bool lastButtonState= LOW;

int greenLED= 4;
int yellowLED= 3;
int redLED= 2;
int greenLED_W = 8;
int redLED_W = 9;
int button = 7;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED_W, OUTPUT);
  pinMode(redLED_W, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  bool buttonstate = digitalRead(button);

  // Default State: Traffic Green, Pedestrian Red
  updateLights(HIGH, LOW, LOW, LOW, HIGH); 

  // Check for button press (Detecting the falling edge)
  if(buttonstate == LOW && lastButtonState == HIGH) {
    // 1. Finish Traffic Green (Blink it)
    for(int i=0; i<=3; i++) {
      digitalWrite(greenLED, LOW); delay(500);
      digitalWrite(greenLED, HIGH); delay(500);
    }
    
    // 2. Traffic Yellow
    updateLights(LOW, HIGH, LOW, LOW, HIGH);
    delay(2000);
    
    // 3. Traffic Red / Pedestrian Green (WALK!)
    updateLights(LOW, LOW, HIGH, HIGH, LOW);
    delay(5000); // Give them time to cross
    
    // 4. Pedestrian Red again
    digitalWrite(greenLED_W, LOW);
    digitalWrite(redLED_W, HIGH);
  }
  
  lastButtonState = buttonstate;
}

// Handy helper function to set all LEDs at once
void updateLights(int g, int y, int r, int gW, int rW) {
  digitalWrite(greenLED, g);
  digitalWrite(yellowLED, y);
  digitalWrite(redLED, r);
  digitalWrite(greenLED_W, gW);
  digitalWrite(redLED_W, rW);
}