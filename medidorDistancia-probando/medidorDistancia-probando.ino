// C++ code
//

const int triggerPin = 11;
const int echoPin = 10;

unsigned long current_time = 0;
unsigned long previus_time = 0;

const long interval=100;


void setup()
{
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  current_time = millis();
  
  if(current_time - previus_time > interval){
    previus_time = current_time;
    float cm = measuringdistance();
    Serial.println(cm);
  }
}
float measuringdistance(){
	float duration, distance;
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(5);
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  duration = pulseIn(echoPin, HIGH, 15000);
  
  distance = duration * 0.01715;
  
  return distance;
}