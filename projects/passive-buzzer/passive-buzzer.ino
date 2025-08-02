// Passive buzzer on D8 + GND
const int BUZZER = 8;

void setup() {
  randomSeed(analogRead(A0)); // seed for randomness (ok selv om A0 er "tom")
}

void loop() {
  // Police/arcade siren sweep up/down
  for (int f = 400; f <= 1200; f += 4) { tone(BUZZER, f, 8); delay(8); }
  for (int f = 1200; f >= 400; f -= 4) { tone(BUZZER, f, 8); delay(8); }

  // Random bleep burst
  for (int i = 0; i < 10; i++) {
    int f = random(500, 2000);
    int d = random(40, 140);
    tone(BUZZER, f, d);
    delay(d + random(20, 80));
  }

  delay(300);
}
