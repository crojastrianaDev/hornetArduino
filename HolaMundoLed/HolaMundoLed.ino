/*
 * Hola mundo, parpadeo de un led, Realizado por: Alejandro Rojas de HORNET.
 */
int led = 13;// Creamos la variable para el led en el pin 13.
void setup()
{
  pinMode(led,OUTPUT);//Indicamos el modo de pin, en este caso de salida.

}

void loop() 
{
 digitalWrite(led,HIGH);//Endendemos el led
 delay(1000);//Damos un segundo de espera.
 digitalWrite(led,LOW);//Apagamos el led
 delay(500);//Damos medio segundo de espera.
 //Se repite el ciclo.
}
