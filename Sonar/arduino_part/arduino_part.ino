#include <Servo.h>

const int trigPin=12;
const int echoPin=11;

long duration;
int distance;

Servo s1;

void setup() {
  
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

  s1.attach(9);
}

void loop()
{
    for(int i=15;i<=165;i++){            // rotates the servo motor from 15 to 165 degrees
    s1.write(i);
    delay(30);
    distance = calDist();

    Serial.print(i);                      // Sends the current degree into the Serial Port
    Serial.print(",");                   // Sends addition character right next to the previous value needed later in the Processing IDE for indexing
    Serial.print(distance);                // Sends the distance value into the Serial Port
    Serial.print(".");                   // Sends addition character right next to the previous value needed later in the Processing IDE for indexing
      }

    for(int i=165;i>15;i--){  
    s1.write(i);
    delay(30);
    distance = calDist();
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
    }

}

int calDist()
{
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
                                                                // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); 
                                                              // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
                                                              // Calculating the distance
  distance= duration*0.034/2;                                // Range : 2cm to 400 cm

  return distance;
}
