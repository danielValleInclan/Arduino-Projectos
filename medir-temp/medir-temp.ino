#include <math.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  double temp;
  val = analogRead(0);
  temp = log(((10240000/val) - 10000));
  temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * temp * temp)) * temp);
  temp = temp - 273.15;
  Serial.print(temp);
  Serial.println("ºC");
  delay(1000);
}
