#include <Servo.h>

Servo persiana;
Servo rega;

int sensor = 0;
int ve = 6, am = 5, az = 3;

void setup()
{
  pinMode(ve, OUTPUT);
  pinMode(am, OUTPUT);
  pinMode(az, OUTPUT);
  persiana.attach(11, 500, 2500);
  rega.attach(9, 500, 2500);
  Serial.begin(9600);
}
void loop()
{
  sensor = analogRead(A0);
  Serial.println(sensor);
  if(sensor <= 450){
    persiana.write(45);
  }else{
    persiana.write(90);
  }
  delay(3000);
}