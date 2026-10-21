
const int ldrPin = A0;
const int buzzerPin = 8;

int batasLaser = 500;

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

  Serial.println("LASER SECURITY READY");
}

void loop() {
  int nilaiLDR = analogRead(ldrPin);

  Serial.print("Nilai LDR: ");
  Serial.println(nilaiLDR);

  if (nilaiLDR < batasLaser) {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("ALARM! LASER TERPUTUS!");
  } else {
    digitalWrite(buzzerPin, LOW);
    Serial.println("AMAN");
  }

  delay(100);
}
