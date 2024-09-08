void setup() {
  pinMode(2, OUTPUT);  // Configure la broche 2 comme sortie
}

void loop() {
  digitalWrite(2, HIGH);  // Allume la LED
  delay(1000);            // Attend 1 seconde
  digitalWrite(2, LOW);   // Éteint la LED
  delay(1000);            // Attend 1 seconde
}
