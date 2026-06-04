char data = 0;
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.read();

    if (data == '1') {
      digitalWrite(led, HIGH);
    }

    if (data == '0') {
      digitalWrite(led, LOW);
    }
  }
}
