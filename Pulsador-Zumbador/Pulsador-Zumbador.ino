const int buttonPin = 2;
const int buzzerPin = 12;

int buttonState = 0;


void setup(){
  pinMode(buttonPin, INPUT);

  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);


  if (buttonState == HIGH) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
}