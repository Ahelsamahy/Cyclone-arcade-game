const int LEDR = 12;
const int LEDG = 7;

void setup ()
{
pinMode(LEDG, OUTPUT);
pinMode(LEDR, OUTPUT);
}
void loop()
{
digitalWrite(LEDG, LOW);
delay(1000);
digitalWrite(LEDR, HIGH);
delay(1000);
digitalWrite(LEDG, HIGH);
delay(1000);
digitalWrite(LEDR, LOW);
delay(1000);
}
