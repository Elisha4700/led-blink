/**
LED blink
Blinks the onboard LED every X seconds
*/


int led_pin = 13;
int SEC = 1000;
int blink_rate = 1 * SEC;

void setup() 
{
  // intialize pins & outputs
  pinMode(led_pin, OUTPUT);
  
}
  
void loop() 
{
  digitalWrite(led_pin, HIGH);
  delay(blink_rate);
  digitalWrite(led_pin, LOW);
  delay(blink_rate);
}
