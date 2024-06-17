int readPin = A3;
int redLED = 9;
int yellowLED = 8;
int greenLED = 7;
double Vout = 0;
int wait = 500;
int read = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //This evaluates the voltage based on how the potentiometer knob is turned:
  read = analogRead(readPin);
  Vout = (5./1023.) * read;
  //This turns on the green LED if the voltage is less than 3 volts.
  //The yellow LED on if the voltage is less than 4 volts.
  //The redLED on if the voltage is greater than 4 volts.
  Serial.print("The voltage is: ");
  Serial.println(Vout);
  if (Vout < 3){
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
  }
  else if (Vout < 4){
    digitalWrite(yellowLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);
  }
  else{
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
  }
  delay(wait);
}