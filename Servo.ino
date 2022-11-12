#include <Servo.h> 

Servo myservo; 

int pos = 0; 

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9); 
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(20); 
  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                       // waits 15ms for the servo to reach the position
  }
  delay(2000);
  for (pos = 90; pos <= 225; pos += 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                       // waits 15ms for the servo to reach the position
  }
  delay(2000);
  for (pos=225; pos >=0; pos-=1){
    myservo.write(pos); 
    delay(20); 
  }
  delay(2000); 
}