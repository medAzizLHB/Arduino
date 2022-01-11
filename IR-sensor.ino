int led1 = 3;
int led2 = 4;
int sensor = 5;
int state;
int i = 0;
int j;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(led1, 0);
 digitalWrite(led2, 0);
  state = digitalRead(sensor);
  j = digitalRead(sensor);
  Serial.println(state);
  if (state == 0) {
    while (i == 0) {
      state = digitalRead(sensor);
      if (state == 0){
        digitalWrite(led1, 1);
        digitalWrite(led2, 0);
        Serial.println(state);
      }
      else {
        digitalWrite(led1, 0);
        digitalWrite(led2, 1);
        Serial.println(state);
      }
    }
  }

}
