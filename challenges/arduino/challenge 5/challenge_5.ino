int buttonPin = 4;
int petPin = A5;
int buttonVal, petVal, t, startTime, endTime, pin1, pin2, cycle, countdownLed = 0;

void setup() {
  Serial.begin(9600);
  for (int i = 5; i<=13; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(buttonPin, INPUT);
  pinMode(petPin, INPUT);
}

void fixLeds() {
  for (int i = 8; i>=5; i--) {
    digitalWrite(i, LOW);
  }
  digitalWrite(9, HIGH); 
}

void flashLeds() {
  startTime = millis();
  endTime = startTime;
  while ((endTime - startTime) <= 5000) {
    digitalWrite(9, LOW);
    petVal = analogRead(petPin);
  	t = map(petVal, 1, 1023, 100, 500);
    for (int f = 12; f<=13; f++) {
      for (int i = 1; i>=0; i--) {
          digitalWrite(f, i);
          digitalWrite(f - 2, i);
          delay(t);
      }
    }
	countdownLed = map(endTime - startTime, 0, 5000, 5, 9);
    digitalWrite(countdownLed, HIGH);
	digitalWrite(countdownLed - 1, LOW);
    endTime = millis();
  }
}

void loop() {
  fixLeds();
  buttonVal = digitalRead(buttonPin);
  if (buttonVal == 1) {
    flashLeds();
  }
}
