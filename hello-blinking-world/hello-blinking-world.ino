const unsigned int LED_PIN = 13;

const unsigned int PUNKT = 200;
const unsigned int STRICH = PUNKT * 3;
const unsigned int SYMBOLABSTAND = PUNKT;
const unsigned int BUCHSTABENABSTAND = STRICH;
const unsigned int WORTABSTAND = PUNKT * 7;


void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  m();a();n();u();e();l();delay(WORTABSTAND);
}

void strich() {
  digitalWrite(LED_PIN, HIGH);
  delay(STRICH);
  digitalWrite(LED_PIN, LOW);
  delay(SYMBOLABSTAND);
}

void punkt() {
  digitalWrite(LED_PIN, HIGH);
  delay(PUNKT);
  digitalWrite(LED_PIN, LOW);
  delay(SYMBOLABSTAND);
}

void buchstabeEnde() {
  digitalWrite(LED_PIN, LOW);
  delay(BUCHSTABENABSTAND);
}

void m() {
  strich();
  strich();
  buchstabeEnde();
}

void a() {
  punkt();
  strich();
  buchstabeEnde();
}

void n() {
  strich();
  punkt();
  buchstabeEnde();
}

void u() {
  punkt();
  punkt();
  strich();
  buchstabeEnde();
}

void e() {
  punkt();
  buchstabeEnde();
}

void l() {
  punkt();
  strich();
  punkt();
  punkt();
  buchstabeEnde();
}
