#include <dht.h>

dht DHT;
#define DHT11_PIN 7

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = DHT.read11(DHT11_PIN);
  float t = DHT.temperature; 
  float h = DHT.humidity;
  Serial.print("Temperature in C = ");
  Serial.println(DHT.temperature);
  Serial.print("Temperature in F = ");
  Serial.println((t * 9.0) / 5.0 + 32.0);
  Serial.print("Temperature in K = ");
  Serial.println(t = t + 273.15);
  Serial.print("Humidity  = ");
  Serial.println(DHT.humidity);
  delay(5000);
}
