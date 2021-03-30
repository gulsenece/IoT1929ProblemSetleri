int ledler[] = {8, 9, 10, 11, 12, 13};
int E;


void setup() {
  for (E = 0; E < 6; E++) {
    pinMode(ledler[E], OUTPUT);
  }
}

void loop() {
  for (E = 0; E < 6; E++) {
    digitalWrite(ledler[E], HIGH);
    delay(500);
    digitalWrite(ledler[E], LOW);
  }
  for (int K = 5; K > -1; K--) {
    digitalWrite(ledler[K], HIGH);
    delay(500);
    digitalWrite(ledler[K], LOW);
  }


}
