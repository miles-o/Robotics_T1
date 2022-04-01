#define trig1 3
#define echo1 2
#define trig2 5
#define echo2 4
long duration;
long distance;

void setup()
{
  Serial.begin(9600);
  pinMode(echo1, INPUT);
  pinMode(trig1, OUTPUT);
  pinMode(echo2, INPUT);
  pinMode(trig2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
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

void loop() {
  int Distance1 = ping(trig1, echo1);
  int Distance2 = ping(trig2, echo2);
  int ApproximateDistance1 = map(Distance1, 20, 330, 1, 20);
  int ApproximateDistance2 = map(Distance2, 20, 330, 1, 20);
  if (ApproximateDistance1 == ApproximateDistance2) {
    Serial.println(true);
  	digitalWrite(6, HIGH);
 	digitalWrite(7, HIGH);
  } else {
    Serial.println(false);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  }
}