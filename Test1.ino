const int ledPin = 25;
static int delayTime = 5000;
static int currentTime = millis();

int state = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int num = Serial.read();
  relay(num);
}
void relay(int state){
  if(state == 0){
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
  }
  else if(state == 1 && currentTime >= delayTime){
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
  }
  else if(state == 1){
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println("No State Selected");
  }
}
