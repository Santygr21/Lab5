const int LED1 = 2;
const int LED2 = 4;
const int LED3 = 6;
const int LED4 = 8;
const int LED5 = 10;
const int PhotoRes = A0;
int PhotoValue = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  PhotoValue = analogRead(PhotoRes);

  //LED 1
  if(PhotoValue >= 1) {
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }

  //LED 2
  if(PhotoValue >= 150) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }

  //LED 3
  if(PhotoValue >= 300) {
    digitalWrite(LED3, HIGH);
  } else {
    digitalWrite(LED3, LOW);
  }

  //LED 4
  if(PhotoValue >= 450) {
    digitalWrite(LED4, HIGH);
  } else {
    digitalWrite(LED4, LOW);
  }

  //LED 5
  if(PhotoValue >= 600) {
    digitalWrite(LED5, HIGH);
  } else {
    digitalWrite(LED5, LOW);
  }

  Serial.println(PhotoValue);
  delay(100);
}
