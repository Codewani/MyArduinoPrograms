int redLED = 2;
int bright = 255;
int between = 126;
int dim = 25;
int wait = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redLED, dim);
  delay(wait);
  analogWrite(redLED, between);
  delay(wait);
  analogWrite(redLED, bright);
  delay(wait);
}
