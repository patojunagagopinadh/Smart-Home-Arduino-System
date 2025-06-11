//defining pins for the inputs and outputs
#include <Servo.h>
#define SERVO_PIN 9
#define MOTION_SENSOR_PIN 7
#define Trigpin 13
#define Echopin 12
#define low_led A0
const int gas_input = A5;
int gas = 0;
const int RED_led = A1;
const int GREEN_led = A2;
float distance;
int duration;
int angle = 0;          
int lastMotionState;    
int currentMotionState;
Servo servo;



void setup()
{
  //setting up the correct pin modes
  pinMode (RED_led,OUTPUT);
  pinMode (GREEN_led,OUTPUT);
  pinMode (Trigpin, OUTPUT);
  pinMode (low_led, OUTPUT);
  pinMode (Echopin, INPUT);
  pinMode (MOTION_SENSOR_PIN, INPUT); 
  Serial.begin(9600);
  digitalWrite (low_led, LOW);
  servo.attach(SERVO_PIN);
  //initializing the serial monitor
  Serial.begin(9600);
}
void ultra();
void pir();
void mQgas();
void loop() 
{
  pir();
  ultra();
  mQgas();
}
void ultra()
{
  digitalWrite(Trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(Trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigpin, LOW);
  duration = pulseIn(Echopin, HIGH);
  distance = duration * 0.034 / 2;
  delay (700);
  Serial.println (" ");
  Serial.print ("Distance = ");
  Serial.print (distance);
  Serial.print (" CM");
  Serial.println (" ");

  if (distance<=30)
  {
    Serial.print ("some one entered the room ");
    Serial.print ("lights should be on");
    digitalWrite (low_led, HIGH);
    delay(100);
  }
  else
  {
    Serial.print ("no one enter the room");
    Serial.print ("lights should be off");
    digitalWrite (low_led,LOW);
    delay(100);
  }
}
void pir()
{
  lastMotionState = currentMotionState;             
  currentMotionState = digitalRead(MOTION_SENSOR_PIN); 
  if (currentMotionState == LOW && lastMotionState == HIGH)
  { 
    Serial.println("Motion stopped!");
    servo.write(180);
  }
  else
  if (currentMotionState == HIGH && lastMotionState == LOW)  
  { 
    Serial.println("Motion detected!");
    servo.write(0);
  }
}

void mQgas()
{
  //read the input from mq2 gas sensor
  gas = analogRead(gas_input);
  //print the input om serial monitor
  Serial.println(gas);
  //remapping the value of input from mq2 to 0-255
  int RED_led_out = map(gas, 80, 400, 0, 255); 
  // int led_out = min(gas,255);
  int GREEN_led_out = map(gas,0, 400, 255, 1000);
  //send the output to buzzer
  tone(RED_led_out,100);
  tone(GREEN_led_out,100);
  
  //send the pwm signal to led
  analogWrite(RED_led,RED_led_out);
  //delay of 100ms
  delay(100);
}

