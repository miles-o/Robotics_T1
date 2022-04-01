void setup()
{
  for (int i = 3; i <=13; i ++) {
  	pinMode(i, OUTPUT);
  }
}

void loop()
{
  for (int pinNum = 13; pinNum >= 4; pinNum--) {
    for (int i = 1; i >= 0; i--) {
    digitalWrite(pinNum, i);
  	delay(100); 
    }
  }
  for (int pinNum = 3; pinNum <= 12; pinNum ++) {
    for (int i = 1; i >= 0; i--) {
    digitalWrite(pinNum, i);
  	delay(100); 
    } 
  }
}