// C++ code
#define trigPin 7


void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);

}

void loop() {
 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  
  

  
}