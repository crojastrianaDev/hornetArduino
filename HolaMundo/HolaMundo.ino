
/*
 * Hola Mundo con Arduino puerto serial, realizado por Alejandro Rojas de la tienda de porductos HORNET Popayán Colombia.
 */
void setup()
{
  Serial.begin(9600);// Abrimos el puerto serial con una velocidad de 9600 baudios
  

}

void loop()
{
  
  Serial.println("HOLA MUNDO DESDE HORNET");// Imprimimos nuestro Hola Mundo en consola, la consola se encuentra en herramientas-Monitor serie.
  // No olvide ingresar a herramientas y configurar su placa, procesador y el puerto al cual esta conectado su placa.

}
