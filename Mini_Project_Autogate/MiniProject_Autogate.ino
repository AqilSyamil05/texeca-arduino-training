#include <Servo.h>

Servo myservo;
const int trigPin = 13;
const int echoPin = 12;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  // Start with the gate closed
  myservo.write(0); 
}

void loop() {
  // --- Distance Sensing Logic ---
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  // --- Gate Control Logic ---
  if (distance > 0 && distance <= 5) {
    Serial.println("Object Detected! Opening...");
    myservo.write(90); 
    delay(2000); // Keep gate open for 2 seconds before checking again
  } 
  else {
    myservo.write(0); // Close gate
  }

  Serial.print("Distance (cm): ");
  Serial.println(distance);
  delay(100); // Faster polling for better responsiveness
}