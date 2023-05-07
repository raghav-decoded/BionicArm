/* Author: Raghav Singh
  Version 1.0.0
  In this project I made a Bionic Arm using Arduino, Servo Motors and Potentiometers.
*/
#include <Servo.h> //Loading the servo library
int pos = 0 ; //Declare and initialize pos variable
int pos1 = 0 ;
int pos2 = 0 ;
int pos3 = 0 ;
int pos4 = 0 ;

int servoPin = 9 ; // Servo is on pin 9
int servoPin1 = 10 ;
int servoPin2 = 11 ;
int servoPin3 = 12 ;
int servoPin4 = 13 ;

int potReading ; // Declare variable for potentiometer reading
int potReading1 ;
int potReading2 ;
int potReading3 ;
int potReading4 ;

int potPin=A0;
int potPin1=A1;
int potPin2=A2;
int potPin3=A3;
int potPin4=A4;

 
 Servo ptr ; // Create a Servo object called myPointer 
 Servo ptr1 ;
 Servo ptr2 ;
 Servo ptr3 ;
 Servo ptr4 ;

//#include <Servo.h>

void setup() {
  Serial.begin(9600);
  ptr.attach(servoPin);
  ptr1.attach(servoPin1);
  ptr2.attach(servoPin2);
  ptr3.attach(servoPin3);
  ptr4.attach(servoPin4);
}

void loop() {


potReading = analogRead(potPin);      // Read potentiometre
potReading = map ( potReading , 0,1023,0,180);
//pos = (155.0/1023.0)*potReading + 15 ; // calculate pos
pos = potReading ;
ptr.write(pos);                 // write pos to servo

potReading1 = analogRead(potPin1);      // Read potentiometre
potReading1 = map ( potReading1 , 0,1023,0,180);
//pos = (155.0/1023.0)*potReading + 15 ; // calculate pos
pos1 = potReading1 ;
ptr1.write(pos1);                 // write pos to servo

potReading2 = analogRead(potPin2);      // Read potentiometre
potReading2 = map ( potReading2 , 0,1023,0,180);
//pos = (155.0/1023.0)*potReading + 15 ; // calculate pos
pos2 = potReading2 ;
ptr2.write(pos2);                 // write pos to servo

potReading3 = analogRead(potPin3);      // Read potentiometre
potReading3 = map ( potReading3 , 0,1023,0,180);
//pos = (155.0/1023.0)*potReading + 15 ; // calculate pos
pos3 = potReading3 ;
ptr3.write(pos3);                 // write pos to servo

potReading4 = analogRead(potPin4);      // Read potentiometre
potReading4 = map ( potReading4 , 0,1023,0,180);
//pos = (155.0/1023.0)*potReading + 15 ; // calculate pos
pos4 = potReading4 ;
ptr4.write(pos4);                 // write pos to servo
}
