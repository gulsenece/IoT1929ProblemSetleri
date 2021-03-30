#include <Servo.h>
Servo iot1929;

void setup()
{
  iot1929.attach(3);

}

void loop()
{
  for (int baslangic = 0; baslangic <= 180; baslangic = baslangic + 15)
  {
    iot1929.write(baslangic);
    delay(1000);
  }
  for (int geridonus = 180; geridonus >= 0 ; geridonus = geridonus - 30)
  {
    iot1929.write(geridonus);
    delay(1000);
  }
}
