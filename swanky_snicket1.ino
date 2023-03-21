#include <Servo.h>

Servo myservo;

int tempPin = A0;
int tempValue;

void setup() {
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  tempValue = analogRead(tempPin);
  float voltage = tempValue * 5.0 / 1023.0;
  float temperature = (voltage - 0.5) * 100;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  if (temperature == 30) {
    myservo.write(90);
    delay(1000); // Wait for 1 second before turning off the motor
    myservo.write(0); // Turn off the motor
    while(1); // Stop the program from running any further
  }
}