void setup() {
  Serial.begin(115200);
  // Initialize pins as outputs
  pinMode(15, OUTPUT); // Red LED
  pinMode(27, OUTPUT); // Orange LED
  pinMode(17, OUTPUT); // Green LED
}

void loop() {
  // Red light ON
  digitalWrite(15, HIGH);
  digitalWrite(27, LOW);
  digitalWrite(17, LOW);
  delay(2000); // Red light for 2 seconds
  digitalWrite(15, LOW); // Turn off red light

  // Orange light ON
  digitalWrite(27, HIGH);
  digitalWrite(15, LOW);
  digitalWrite(17, LOW);
  delay(2000); // Orange light for 2 seconds
  digitalWrite(27, LOW); // Turn off orange light

  // Green light ON
  digitalWrite(17, HIGH);
  digitalWrite(15, LOW);
  digitalWrite(27, LOW);
  delay(2000); // Green light for 2 seconds
  digitalWrite(17, LOW); // Turn off green light
}
