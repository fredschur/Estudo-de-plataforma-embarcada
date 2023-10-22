#define LED 18

#define DOT_TIME 200
#define DASH_TIME 600
#define INTER_ELEMENT_GAP DOT_TIME
#define INTER_LETTER_GAP 3 * DOT_TIME
#define INTER_WORD_GAP 7 * DOT_TIME

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  blink(DOT_TIME);
  delay(INTER_ELEMENT_GAP);
  blink(DOT_TIME);
  delay(INTER_ELEMENT_GAP);
  blink(DOT_TIME);
  delay(INTER_LETTER_GAP);

  blink(DASH_TIME);
  delay(INTER_ELEMENT_GAP);
  blink(DASH_TIME);
  delay(INTER_ELEMENT_GAP);
  blink(DASH_TIME);
  delay(INTER_LETTER_GAP);

  blink(DOT_TIME);
  delay(INTER_ELEMENT_GAP);
  blink(DOT_TIME);
  delay(INTER_ELEMENT_GAP);
  blink(DOT_TIME);

  delay(INTER_WORD_GAP);
}

void blink(int duration) {
  digitalWrite(LED, HIGH);
  Serial.println("LED ON");
  delay(duration);
  digitalWrite(LED, LOW);
  Serial.println("LED OFF");
  delay(INTER_ELEMENT_GAP);
}
