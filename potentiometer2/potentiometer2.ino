int potVal;
int V2;
int read = A3;
int redLED = 9;
int wait = 200;
void setup() {
  // put your setup code here, to run once:
  pinMode(read, INPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(read);
  V2 = (5./1023.) * potVal;
  while (V2 > 3){
    digitalWrite(redLED, HIGH);
    potVal = analogRead(read);
    V2 = (5./1023.) * potVal;
  }
  digitalWrite(redLED, LOW);
  delay(wait);
}
