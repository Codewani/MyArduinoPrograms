int readPin = A3;
int redLED = 9;
double Vout = 0;
int wait = 500;
int read = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //This evaluates the voltage based on how the potentiometer knob is turned:
  read = analogRead(readPin);
  Vout = (5./1023.) * read;
  //This turns on the red LED if the voltage is too high.
  //"Too high" would be atleast 4Volts.
  if (Vout > 4.){
    digitalWrite(redLED, HIGH);
  }
  else{
    digitalWrite(redLED, LOW);
  }
  delay(wait);
}