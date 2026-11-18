const int ledR1 = 3;
const int ledB1 = 4;
const int ledB2 = 5;
const int ledB3 = 6;
const int ledB4 = 7;
const int ledB5 = 8;
const int ledB6 = 9;
const int ledB7 = 10;
const int ledB8 = 11;
const int ledR2 = 12;
const int Del = 50;

void setup() {
pinMode(ledR1, OUTPUT);
pinMode(ledB1, OUTPUT);
pinMode(ledB2, OUTPUT);
pinMode(ledB3, OUTPUT);
pinMode(ledB4, OUTPUT);
pinMode(ledB5, OUTPUT);
pinMode(ledB6, OUTPUT);
pinMode(ledB7, OUTPUT);
pinMode(ledB8, OUTPUT);
pinMode(ledR2, OUTPUT);
}

void loop() {
//the light goes from right to left

digitalWrite(ledR1, HIGH);
  delay(Del);
digitalWrite(ledB1, HIGH);
  delay(Del);
digitalWrite(ledB2, HIGH);
  delay(Del);
digitalWrite(ledB3, HIGH);
  delay(Del);
digitalWrite(ledB4, HIGH);
  delay(Del);
digitalWrite(ledB5, HIGH);
  delay(Del);
digitalWrite(ledB6, HIGH);
  delay(Del);
digitalWrite(ledB7, HIGH);
  delay(Del);
digitalWrite(ledB8, HIGH);
  delay(Del);
digitalWrite(ledR2, HIGH);
  delay(Del);

//to turn off the light
digitalWrite(ledR1, LOW);
  delay(Del); 
digitalWrite(ledB1, LOW);
  delay(Del);
digitalWrite(ledB2, LOW);
  delay(Del);
digitalWrite(ledB3, LOW);
  delay(Del);
digitalWrite(ledB4, LOW);
  delay(Del);
digitalWrite(ledB5, LOW);
  delay(Del);
digitalWrite(ledB6, LOW);
  delay(Del);
digitalWrite(ledB7, LOW);
  delay(Del);
digitalWrite(ledB8, LOW);
  delay(Del);
digitalWrite(ledR2, LOW);
  delay(Del);

//the light goes from left to right
digitalWrite(ledR2, HIGH);
  delay(Del);
digitalWrite(ledB8, HIGH);
  delay(Del);
digitalWrite(ledB7, HIGH);
  delay(Del);
digitalWrite(ledB6, HIGH);
  delay(Del);
digitalWrite(ledB5, HIGH);
  delay(Del);
digitalWrite(ledB4, HIGH);
  delay(Del);
digitalWrite(ledB3, HIGH);
  delay(Del);
digitalWrite(ledB2, HIGH);
  delay(Del);
digitalWrite(ledB1, HIGH);
  delay(Del);
digitalWrite(ledR1, HIGH);
  delay(Del);

digitalWrite(ledR2, LOW);
  delay(Del);
digitalWrite(ledB8, LOW);
  delay(Del);
digitalWrite(ledB7, LOW);
  delay(Del);
digitalWrite(ledB6, LOW);
  delay(Del);
digitalWrite(ledB5, LOW);
  delay(Del);
digitalWrite(ledB4, LOW);
  delay(Del);
digitalWrite(ledB3, LOW);
  delay(Del);
digitalWrite(ledB2, LOW);
  delay(Del);
digitalWrite(ledB1, LOW);
  delay(Del);
digitalWrite(ledR1, LOW);
  delay(Del);
}
