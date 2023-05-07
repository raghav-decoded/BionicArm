/*  Author: Raghav Singh
    BIONIC ARM V2.0.0
    In this project the Bionic Arm was implemented using ESP8266 microcontroller and Blynk App.
*/
#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include<Servo.h>

Servo servo ;
Servo servo2 ;

 int servopin1 = 16 ;
 int servopin2 = 5 ; 
 
char auth[] = "a15216c55a7b43689e19a18a3b8ed433" ;  //"57e62fc3d7c2485f82fb1b5418b959e9"; // //"f9b348d884f1454f86681eeab8bdbaad"; 
char ssid[]="JioFi_100D24B";  //Service set identifier
char password[] = "6mxmksisbj"; 

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth , ssid ,password);
  servo.attach(servopin1);  // Node MCU D8
  servo2.attach(servopin2); 
}

void loop()
{
  Blynk.run();
  // You can inject your own code or combine it with other sketches.
  // Check other examples on how to communicate with Blynk. Remember
  // to avoid delay() function!
}

BLYNK_WRITE(V0)
{
  servo.write(param.asInt());
  }
BLYNK_WRITE(V1)
{
  servo2.write(param.asInt());
  }


  

  
