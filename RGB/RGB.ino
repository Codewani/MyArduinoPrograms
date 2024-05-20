int wait = 500;
int redLED = 8;
int blueLED = 2;
int greenLED = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode (redLED, OUTPUT);
  pinMode (blueLED, OUTPUT);
  pinMode (greenLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //LOW turns it off
  //HIGH turns it on.
  //Blinking LED light.
  //Delay 500 allows the LED to be on for 500 milliseconds and off for 500 milliseconds.

  //This Loop makes a Red LED blink 5 times.
  for (int i = 0; i < 5; i++){
    digitalWrite (redLED, HIGH);
    delay(wait);
    digitalWrite (redLED, LOW);
    delay(wait);
  }

  //This Loop makes a Blue LED blink 10 times.
  for (int i = 0; i < 10; i++){
    digitalWrite (blueLED, HIGH);
    delay(wait);
    digitalWrite (blueLED, LOW);
    delay(wait);
  }

  //This Loop makes a Green LED blink 15 times.
  for (int i = 0; i < 15; i++){
    digitalWrite (greenLED, HIGH);
    delay(wait);
    digitalWrite (greenLED, LOW);
    delay(wait);
  }
  
}
