void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //LOW turns it off
  //HIGH turns it on.
  //Blinking LED light.
  //Delay 15 allows the LED to be on for 15 milliseconds and off for 15 milliseconds.
  //After attempting different combinations this is the minumum delay combination that makes the blink percievable.
  digitalWrite (13, HIGH);
  delay(15);
  digitalWrite (13, LOW);
  delay(15);
}
