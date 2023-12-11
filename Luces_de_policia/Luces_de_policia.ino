/*
  Luces de policia
*/
int leds[] = {6,7,8,9,10,11,12,13};

void setup() {
  for (int i = 0; i <= (sizeof(leds) / sizeof(leds[0])) - 1; i++) {
    pinMode(leds[i],OUTPUT);
  }
}

void loop() {
  luces(HIGH);
  luces(LOW);
}

void luces(int estado) {
  for (int i = 0; i <= (sizeof(leds) / sizeof(leds[0])) - 1; i += 2) {
    digitalWrite(leds[i], estado);
    digitalWrite(leds[i + 1], !estado);
  }
  delay(200);
}