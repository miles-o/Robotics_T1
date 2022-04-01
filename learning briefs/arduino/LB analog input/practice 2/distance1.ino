#define trig 2
#define echo 3
long duration;
long distance;

void setup() {
	Serial.begin(9600);
  	pinMode(trig, OUTPUT);
  	pinMode(echo, INPUT);
  for (int i = 6; i <=13; i++) {
   	pinMode(i, OUTPUT); 
  }
}

unsigned long ping(int trigPin, int echoPin) {
  long duration;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2; 
}

void leds(int ledNum) {
  for (int i = ledNum; i >= 6; i--) {
    digitalWrite(i, HIGH);
  }
  for (int i = ledNum + 1; i <= 13; i++) {
    digitalWrite(i, LOW);
  }
}

void loop() {
  int d = ping(trig, echo);
  int ledNum = map(d, 20, 331, 6, 13);
  leds(ledNum);
}