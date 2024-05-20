int shortDelay = 250;
int longDelay = 700;
int redPin = 13;
int longW = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode (redPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //. . . : S
  for (int i = 0; i < 3; i++){
    digitalWrite (redPin, HIGH);
    delay (shortDelay);
    digitalWrite (redPin, LOW);
    delay (shortDelay);
  }
  //_ _ _ : O
  for (int i = 0; i < 3; i++){
    digitalWrite (redPin, HIGH);
    delay (longDelay);
    digitalWrite (redPin, LOW);
    delay (longDelay);
  }
  //. . . : S
  for (int i = 0; i < 3; i++){
    digitalWrite (redPin, HIGH);
    delay (shortDelay);
    digitalWrite (redPin, LOW);
    delay (shortDelay);
  }
  delay (longW);

}
