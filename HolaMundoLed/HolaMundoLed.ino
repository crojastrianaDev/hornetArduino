/*
 * Hola mundo, parpadeo de un led, Realizado por: Alejandro Rojas de HORNET.
 */
int led = 13;
void setup()
{
  pinMode(led,OUTPUT);

}

void loop() 
{
 digitalWrite(led,HIGH);
 delay(1000);
 digitalWrite(led,LOW);
 delay(500);
}
