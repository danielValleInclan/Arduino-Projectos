// C++ code
//

const int pinPot = A0;

void setup()
{
  
  Serial.begin(9600);
}

void loop()
{
  int lectura = analogRead(pinPot); // valor entre 0 y 1023
  
  float voltaje = lectura * 5.0 / 1024.0; // voltaje entre 0 y 5V
  
  Serial.print("Voltaje: ");
  Serial.println(voltaje);
  
  delay(2000);
}
