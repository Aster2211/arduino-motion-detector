// Pin Definitions
const int pirPin = 2;
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Calibrating PIR sensor... Please wait.");
  
  // Turn ON Blue LED during calibration
  digitalWrite(bluePin, HIGH);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  
  delay(10000); // PIR sensor requires ~10 seconds to warm up
  
  digitalWrite(bluePin, LOW); // Turn OFF Blue LED
  Serial.println("Sensor Ready!");
}

void loop() {
  int motionDetected = digitalRead(pirPin); // Reads HIGH (1) or LOW (0)

  if (motionDetected == HIGH) {
    Serial.println("Motion Detected!");
    digitalWrite(redPin, HIGH);   // Red ON
    digitalWrite(greenPin, LOW);  // Green OFF
  } else {
    Serial.println("Area Clear.");
    digitalWrite(redPin, LOW);    // Red OFF
    digitalWrite(greenPin, HIGH); // Green ON
  }

  delay(200);
}