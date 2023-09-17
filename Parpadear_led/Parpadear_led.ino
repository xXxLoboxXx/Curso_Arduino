#define led 13
void setup() {
  // Inicialización del código, se ejecuta solo una vez:
  pinMode(led,OUTPUT);

}

void loop() {
  // Se ejecuta en un ciclo infinito:
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
