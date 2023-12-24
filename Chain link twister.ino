const int hallEffectPin = 8;
const int relayPin = 9;
int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(hallEffectPin, INPUT);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(hallEffectPin);
  if (sensorValue == LOW) 
  {
    Serial.println("Magnetic field detected!");
    count++;
    Serial.println(count);
  }
if (count == 10) 
{
  Serial.println("Count reached 10. Turning off the relay.");
  digitalWrite(relayPin, HIGH); // Turn off the relay
} 
else 
{
  Serial.println("No magnetic field detected.");
}

  delay(5000);
}

