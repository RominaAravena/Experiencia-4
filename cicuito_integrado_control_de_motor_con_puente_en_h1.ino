void setup()
{
  pinMode(8, OUTPUT); //se define el pin 8 como salida
  pinMode(9, OUTPUT); //se define el pin 9 como salida
  pinMode(13,OUTPUT); //se define el pin 13 como salida
}

void CambiaLed(){  //se define la funcion asociada al LED del arduino
  digitalWrite(13,!digitalRead(13));//esta funcion lee el estado del LED de control
  //y luego el !invierte el estado por lo que la luz se prende y 
  //se apaga cuando se usa la funcion
}

void loop()
{
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW); //giro del motor hacia la derecha 
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH); //detencion rapida del motor
  delay(500); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW); //giro del motor hacia la izquierda
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  CambiaLed(); //se llama la funcion definida mas arriba
}