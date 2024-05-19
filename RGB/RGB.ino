void setup() {
  // put your setup code here, to run once:
  pinMode (8, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //LOW turns it off
  //HIGH turns it on.
  //Blinking LED light.
  //Delay 500 allows the LED to be on for 500 milliseconds and off for 500 milliseconds.

  //This Loop makes a Red LED blink 5 times.
  for (int i = 0; i < 5; i++){
    digitalWrite (8, HIGH);
    delay(500);
    digitalWrite (8, LOW);
    delay(500);
  }

  //This Loop makes a Blue LED blink 10 times.
  for (int i = 0; i < 10; i++){
    digitalWrite (2, HIGH);
    delay(500);
    digitalWrite (2, LOW);
    delay(500);
  }

  //This Loop makes a Green LED blink 15 times.
  for (int i = 0; i < 15; i++){
    digitalWrite (5, HIGH);
    delay(500);
    digitalWrite (5, LOW);
    delay(500);
  }
  
}
