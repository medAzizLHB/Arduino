int LDR =A5;
int val;
float voltage;
void setup() {
  pinMode(A5, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  }
 void loop(){
  val = analogRead(LDR);
  voltage = 0.00488*val;
  if (val <= 200){
    digitalWrite(13, HIGH);
          Serial.println(val);
          Serial.println(voltage);
          delay(1000);
          
    }
    else{
      digitalWrite(13, LOW);
            Serial.println(val);
            Serial.println(voltage);
          delay(1000);
      }
}
