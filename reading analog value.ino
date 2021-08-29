/*
 * by medAzizLHB
 * SkorpTech

 */

int sensorPin = A0;  // input pin for the potentiometer
int digitalValue = 0;// variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  digitalValue = analogRead(sensorPin);// read the value from the analog channel
  Serial.print("digital value = ");
  Serial.println(digitalValue);        //print digital value on serial monitor
  delay(1000);
}