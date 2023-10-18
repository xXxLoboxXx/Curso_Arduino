void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("-------");
  /*
  Operadores Booleanos
  1.  NOT !
  2.  AND &&
  3.  OR ||
  */

  /*Serial.println(!true); //0
  Serial.println(!(4>5)); //1*/

  /*Serial.println(true && false); //0
  Serial.println((4>3) && (8==8)); //1
  Serial.println(true && (4>1) && (7==7)); //1
  Serial.println(true && (4>1) && (7==8)); //0*/

  Serial.println(true || false); //1
  Serial.println((4>3) || (8==8)); //1
  Serial.println(true || (4>1) || (7==7)); //1
  Serial.println(true || (4>1) || (7==8)); //1
  Serial.println(false || (4>10)); //0

  delay(10000);
}
