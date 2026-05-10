#include <Servo.h>

Servo myservo; //create servo object to control servo

void setup()
{
  myservo.attach(9);
}

void loop()
{
  static int pos;
  for(pos=0;pos<=180;pos++)
  {
    myservo.write(pos); //tells servo to go to the position given
    delay(15);
  }
  for(pos=180;pos>=0;pos--)
  {
    myservo.write(pos); //tells servo to go to the position given
    delay(15);
  }
}