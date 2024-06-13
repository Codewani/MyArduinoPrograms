int readPin = A3;
double V2 = 0;
int wait = 500;
int readVal = 0;
void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // The code below reads the voltage accross the second resistor and prints it out:
  readVal = analogRead(readPin);
  V2 = (5./1023.) * readVal;
  Serial.println(V2);
  delay(wait);
}
