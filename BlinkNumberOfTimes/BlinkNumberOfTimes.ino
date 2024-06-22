String msg = "Enter your number: ";
int numBlinks;
int wait = 500;
int redPin = 9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0){

  }
  numBlinks = Serial.parseInt();
  for (int j = 0; j < numBlinks; j++){
    digitalWrite(redPin, HIGH);
    delay(wait);
    digitalWrite(redPin, LOW);
    delay(wait);
  }
}
