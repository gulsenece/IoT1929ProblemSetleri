int KIRMIZI = 8;
int SARI = 9;
int YESIL = 10;
void setup() {
  pinMode (KIRMIZI, OUTPUT);
  pinMode (SARI, OUTPUT);
  pinMode (YESIL, OUTPUT);

}

void loop() {
  digitalWrite (KIRMIZI, HIGH);
  digitalWrite (SARI, LOW);
  digitalWrite (YESIL, LOW);
  delay (10000);
  digitalWrite (KIRMIZI, HIGH);
  digitalWrite (SARI, HIGH);
  digitalWrite (YESIL, LOW);
  delay (10000);
  digitalWrite (KIRMIZI, LOW);
  digitalWrite (SARI, LOW);
  digitalWrite (YESIL, LOW);
  delay (2000);
  digitalWrite (KIRMIZI, LOW);
  digitalWrite (SARI, LOW);
  digitalWrite (YESIL, HIGH);
  delay (5000);

}
