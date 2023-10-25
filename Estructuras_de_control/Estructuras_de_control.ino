int a = 5;
int b = 10;

char caracter = 'a';

void setup() {
  Serial.begin(9600);
}

void loop() {
  /*if (a > b) {
    Serial.println("a es mayor que b");
  } else if (a < b) {
    Serial.println("a es menor que b");
  } else {
    Serial.println("La condicion fue falsa");
  }*/

  /*int i = 0;
  while (i < 5) {
    Serial.println(i);
    i++;
  }*/

  /*for (int i = 0; i < 5; i++) {
    Serial.println(i);
  }*/

  switch (caracter) {
    case 'a':
      Serial.println("a");
      break;
    case 'b':
      Serial.println("b");
      break;
    case 'c':
      Serial.println("c");
      break;
    default:
      Serial.println("No se encontro el valor");
      break;
  }

  delay(5000);
}
