int buzzer = 4;
int LED = 13;
int flame_sensor = 3;
int flame_detected;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(flame_sensor, INPUT);
}

void loop()
{
  flame_detected = digitalRead(flame_sensor);
  if (flame_detected == 0)
  {
    Serial.println("Flame detected.");
    tone(buzzer,65,500);
    digitalWrite(LED, HIGH);
  }
  else
  {
    Serial.println("no fire detected");
    digitalWrite(LED, LOW);
  }
  delay(1000);
}
