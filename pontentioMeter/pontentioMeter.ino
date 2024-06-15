int readPin = A3;
double Vout = 0;
int wait = 500;
int read = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  //This code prints out voltages based on how the resistance of the potentialmeter is adjusted using the knob:
  read = analogRead(readPin);
  Vout = (5./1023.) * read;
  Serial.println(Vout);
  delay(wait);
}
