#define LED 7
#define pushButton 12

void setup() {
  pinMode(LED, OUTPUT); //Se declara el pin 7 como salida
  pinMode(pushButton, INPUT); //Se declara el pin 12 como entrada
}

void loop() {
  if (digitalRead(pushButton) == HIGH) { //Se pregunta si se esta presionando el push button
    digitalWrite(LED, !digitalRead(LED)); //Se cambia el estado del LED por el contrario
    delay(250);
  }
}
