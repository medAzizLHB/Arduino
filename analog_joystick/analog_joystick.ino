int SW_pin = 8; // digital pin connected to switch output
int X_pin = A0; // analog pin connected to X output
int Y_pin = A1; // analog pin connected to Y output

void setup() {
  pinMode(X_pin, OUTPUT);
  pinMode(Y_pin, OUTPUT);
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print(" | ");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print(" | ");
  Serial.print("Y-axis: ");
  Serial.print(analogRead(Y_pin));
  Serial.println(" | ");
  delay(200);
}
