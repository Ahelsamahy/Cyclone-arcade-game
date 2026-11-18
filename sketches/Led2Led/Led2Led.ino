int led[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12};   //to intailaize the led to pin
unsigned long currentTime;                       //some global variables available anywhere in the program
const unsigned long Interval = 1000;             //time for each loop/blink
unsigned long previousTime = 0;                  //time that changes with every successive loop
bool ledState;                                   //record the state of LED for each player
int button1 = 2;                                 //button for player 1
int button2 = 13;                                //button for player 2
int P1 = 0, P2 = 0;                              //dealing with buttons
int P1_counter = 0 , P2_counter = 0;             //score counter

void setup() {
  for (int i = 0; i <= 9; i++) {
    pinMode(led[i], OUTPUT);
  }
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}


void loop() {
  P1 = digitalRead(button1);
  digitalWrite(led[1], ledState);
  currentTime = millis();

  //light goes from right to left
  for (int i = 0; i <= 9; i++) {
    if (currentTime - previousTime >= Interval) {            //false until the period elapses
      digitalWrite(led[i], !digitalRead(led[i]));
      previousTime = currentTime;
    }
  }

  /* if (P1 == HIGH && ledState == HIGH ) {
         P1_counter = P1_counter + 1;
         digitalWrite(led[3], HIGH);
         delay(500);
         digitalWrite(led[4], HIGH);
         P1 == LOW;
        }

    //light goes from left to right
    for (int i = 9; i >= 0; i--) {
    digitalWrite(led[i], HIGH);
    delay(Del);
    digitalWrite(led[i], LOW);
    }
  */
}
