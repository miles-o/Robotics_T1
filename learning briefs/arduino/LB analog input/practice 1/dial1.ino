int ledNum;
int val = 0;

void setup()
{
  pinMode(A5, INPUT);
  for (int i = 3; i <= 7; i++) {
  	pinMode(i, OUTPUT);
  }
}



void loop() {
  val = analogRead(A5);
  ledNum = map(val, 0, 1023, 2, 7);
  for (int i = ledNum; i >= 3; i--) {
    digitalWrite(i, HIGH);
  }
  for (int i = ledNum; i <= 7; i++) {
   	digitalWrite(i, LOW); 
  }
}