int redLED = 10;
int greenLED = 8;
int blueLED = 6;
int wait = 3000;
String msg = "Which LED do you want to turn on?";
String myColor;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  Serial.print(msg);
  while (Serial.available() == 0)
  {

  }
  myColor = Serial.readString();
  if (myColor == "red"){
    digitalWrite(redLED, HIGH);
    delay(wait);
    digitalWrite(redLED, LOW);
  }
  else if(myColor == "green"){
    digitalWrite(greenLED, HIGH);
    delay(wait);
    digitalWrite(greenLED, LOW);
  }
  else if(myColor == "blue"){
    digitalWrite(blueLED, HIGH);
    delay(wait);
    digitalWrite(blueLED, LOW);
  }
}
