int a = 10;
int b = 10;
int c = 12;

void setup() {
  Serial.begin(9600);

}

void loop() {
  delay(3000);
  /* Operadores de Comparación
  != distinto que
  < menor que
  <= menor o igual que
  == igual que
  > mayor que
  >= mayor o igual que
  */

  /*Serial.print("10 es distinto que 10? R=");
  Serial.println(a != b); //False = 0
  Serial.print("10 es distinto que 12? R=");
  Serial.println(a != c); //True = 1*/

  /*Serial.print("10 es menor que 10? R=");
  Serial.println(a < b); //False = 0
  Serial.print("10 es menor que 12? R=");
  Serial.println(a < c); //True = 1*/

  /*Serial.print("10 es menor o igual que 10? R=");
  Serial.println(a <= b); //True = 1
  Serial.print("10 es menor o igual que 12? R=");
  Serial.println(a <= c); //True = 1*/

  /*Serial.print("10 es igual que 10? R=");
  Serial.println(a == b); //True = 1
  Serial.print("10 es igual que 12? R=");
  Serial.println(a == c); //False = 0*/

  /*Serial.print("10 es mayor que 10? R=");
  Serial.println(a > b); //False = 0
  Serial.print("10 es mayor que 12? R=");
  Serial.println(a > c); //False = 0*/

  Serial.print("10 es mayor o igual que 10? R=");
  Serial.println(a >= b); //True = 1
  Serial.print("10 es mayor o igual que 12? R=");
  Serial.println(a >= c); //False = 0

  delay(10000);
}
