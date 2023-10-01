int entero = 5;
float flotante = 3.5;
char caracter = 'a';
bool booleano = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*Serial.print("Hola a todos");
  Serial.println(", bienvenidos al canal!");*/
  Serial.print("El valor del entero es ");
  Serial.println(entero);
  Serial.print("El valor del flotante es ");
  Serial.println(flotante);
  Serial.print("El valor del caracter es ");
  Serial.println(caracter);
  Serial.print("El valor del booleano es ");
  Serial.println(booleano);
  delay(10000);
}
