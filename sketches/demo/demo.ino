int led1 = 3;
int led3= 5;
int led2 = 12;
int button1 = 2;
int P1 = 0;
int button2 = 13;
int P2 = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

}

void loop() {
  
  if (digitalRead(button2) == HIGH) {
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(1000);
    digitalWrite(led2, HIGH);
    delay(1000);
  }
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  
  

  if (digitalRead(button1) == HIGH) {
    digitalWrite(led1, HIGH);
    //delay(1000);
    //digitalWrite(led1, LOW);
    //delay(1000);
    //digitalWrite(led1, HIGH);
    //delay(1000);
  } else {
    digitalWrite(led1, LOW);
  }

}
