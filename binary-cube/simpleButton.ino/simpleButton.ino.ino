const unsigned int BUTTON_PIN = 7;
const unsigned int LED_PIN = 13;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

int button_state = LOW;
int led_state = LOW;

void loop() {
  const int BUTTON_STATE = digitalRead(BUTTON_PIN);
  if (BUTTON_STATE != button_state && BUTTON_STATE == HIGH) {
    if (led_state == LOW) {
      led_state = HIGH;
    } else {
      led_state = LOW;
    }
    digitalWrite(LED_PIN, led_state);
    delay(50);
  }
  button_state = BUTTON_STATE;
}
