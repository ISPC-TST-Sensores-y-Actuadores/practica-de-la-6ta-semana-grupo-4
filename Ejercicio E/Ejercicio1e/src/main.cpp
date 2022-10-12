#include <Arduino.h>

#define espera 350 // defino un tiempo de espera entre cada numero

void setup()
{
  DDRD = 0xFF; // Configuro el puerto D como salida
}

void loop()
{
  for (int i = 0; i < 10; i++) // incremento el numerador desde 0 hasta 9
  {
    switch (i)
    {
    case 0:
      PORTD = 0x3f;
      delay(espera);
      break;
    case 1:
      PORTD = 0x06;
      delay(espera);
      break;
    case 2:
      PORTD = 0x5b;
      delay(espera);
      break;
    case 3:
      PORTD = 0x4f;
      delay(espera);
      break;
    case 4:
      PORTD = 0x66;
      delay(espera);
      break;
    case 5:
      PORTD = 0x6d;
      delay(espera);
      break;
    case 6:
      PORTD = 0x7d;
      delay(espera);
      break;
    case 7:
      PORTD = 0x07;
      delay(espera);
      break;
    case 8:
      PORTD = 0x7f;
      delay(espera);
      break;
    case 9:
      PORTD = 0x6f;
      delay(espera);
      break;
    }
  }

  for (int i = 8; i > 0; i--) // decremento el numerador desde 8 hasta 1
  {
    switch (i)
    {
    case 1:
      PORTD = 0x06;
      delay(espera);
      break;
    case 2:
      PORTD = 0x5b;
      delay(espera);
      break;
    case 3:
      PORTD = 0x4f;
      delay(espera);
      break;
    case 4:
      PORTD = 0x66;
      delay(espera);
      break;
    case 5:
      PORTD = 0x6d;
      delay(espera);
      break;
    case 6:
      PORTD = 0x7d;
      delay(espera);
      break;
    case 7:
      PORTD = 0x07;
      delay(espera);
      break;
    case 8:
      PORTD = 0x7f;
      delay(espera);
      break;
    }
  }
}