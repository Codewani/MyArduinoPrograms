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
  //... : S
  digitalWrite (redPin, HIGH);
  delay (shortDelay);
  digitalWrite (redPin, LOW);
  delay (shortDelay);

  digitalWrite (redPin, HIGH);
  delay (shortDelay);
  digitalWrite (redPin, LOW);
  delay (shortDelay);

  digitalWrite (redPin, HIGH);
  delay (shortDelay);
  digitalWrite (redPin, LOW);
  delay (shortDelay);

  digitalWrite (redPin, HIGH);
  delay (longDelay);
  digitalWrite (redPin, LOW);
  delay (longDelay);

  digitalWrite (redPin, HIGH);
  delay (longDelay);
  digitalWrite (redPin, LOW);
  delay (longDelay);


  digitalWrite (redPin, HIGH);
  delay (longDelay);
  digitalWrite (redPin, LOW);
  delay (longDelay);

  digitalWrite (redPin, HIGH);
  delay (shortDelay);
  digitalWrite (redPin, LOW);
  delay (shortDelay);

  digitalWrite (redPin, HIGH);
  delay (shortDelay);
  digitalWrite (redPin, LOW);
  delay (shortDelay);

  digitalWrite (redPin, HIGH);
  delay (shortDelay);
  digitalWrite (redPin, LOW);
  delay (shortDelay);

  delay (longW);

}
