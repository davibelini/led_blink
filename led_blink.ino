int highPin = 10;
int lowPin = 8;
int d = 5000;

void setup() {
  pinMode(highPin, OUTPUT);
  pinMode(lowPin, OUTPUT);
}

void loop() {
  digitalWrite(highPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(highPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
}
