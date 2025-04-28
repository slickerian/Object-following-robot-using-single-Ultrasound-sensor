#include <Wire.h>
#include <Servo.h>


// Drive Motors Setup
#include <AFMotor.h>
AF_DCMotor motor1(1, MOTOR12_64KHZ);
AF_DCMotor motor2(2, MOTOR12_64KHZ);
AF_DCMotor motor3(3, MOTOR12_64KHZ);
AF_DCMotor motor4(4, MOTOR12_64KHZ);
int turn_Speed = 175;
int mtr_Spd = 250;

// Servo Control
Servo myservo;
int pos = 0;

// Ping Sensor for Collision Avoidance
boolean pingOn = true;
int trigPin = 43;
int echoPin = 42;
long duration, inches;
int Ping_distance;
float Fdistance;
unsigned long currentMillis = 0;
unsigned long previousMillis = 0;
const long interval = 200;
int rightDistance = 0, leftDistance = 0;

// Bluetooth Variables & Setup
String str;
int blueToothVal;
int bt_Pin = 34;


void setup() {
  Serial.begin(115200);
  Serial1.begin(9600);
  Serial2.begin(9600);

  myservo.attach(9);
  pinMode(36, OUTPUT);
  pinMode(bt_Pin, INPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);


}

void loop() {
  // Your existing code here
  bluetooth();

}
