unsigned long currentTime;               //time when the program starts (it is intial value is 0)
unsigned long previousTime = 0;          //time that is going to be updated when the pro. enters the loop
const unsigned long Interval = 500;      //
const int buttonPin1 = 2;
const int led1 = 3 ;
bool status = LOW;

void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT);
  pinMode (led1, OUTPUT);
}

void loop() {
  currentTime = millis();
  
  //Serial.println("outside the loop");
  if (currentTime - previousTime >= Interval  ){
    Serial.println("inside the loop");
    digitalWrite(led1,!digitalRead(led1));
    previousTime = currentTime ;
    }
}
