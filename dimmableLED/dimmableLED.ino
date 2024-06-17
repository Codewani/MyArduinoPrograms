int readPin = A3;
int ledPin = 9;
int potVal;
float ledVal;
int wait = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(readPin);
  Serial.print("The potVal is: ");
  Serial.println(potVal);
  ledVal = (255./1023.) * potVal;
  Serial.print("The ledVal is: ");
  Serial.println(ledVal);
  delay(wait);
  analogWrite(ledPin, ledVal);
}
