/*
 * Sensor de movimiento PIR. Realizado por Alejandro Rojas
 * Imagina las posibilidades al conectar este tipo de sensores a el internet y poder monitoriar los movimientos en una casa o edificio 
 * y que su porpietario pueda verlo en tiempo real o que tal si al activarse activa su camara de seguridad y lo muestra en vivo.
 */
int led=12;
int pir=2;
void setup() 
{
 
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);

}

void loop() 
{
  int pirP=digitalRead(pir);
  if(pirP==HIGH)
  {
    digitalWrite(led,HIGH);
    Serial.println("Se detecto un movimiento");
    delay(50);
  }
  else
  {
    digitalWrite(led,LOW);
    digitalWrite(pir,LOW);
  }

}
