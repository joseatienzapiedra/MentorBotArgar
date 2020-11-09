//ROBOT MENTOR - 1º MEL IES El ARGAR

#include <SoftwareSerial.h> 

//Definición de los pines de control de motores (De momento no se utiliza) 
/*
#define M11 2
#define M12 3
#define M21 4
#define M22 5
#define M31 6
#define M32 7
#define M41 8
#define M42 9
#define M51 10
#define M52 11
#define M61 12
#define M62 13*/

//Definimos pines y puerto serial software para comunicaciones BT
#define rxPin 50
#define txPin 52
SoftwareSerial BTSerial =  SoftwareSerial(rxPin, txPin);

int pwmvel = 0, serialin; //Declaramos la velocidad PWM a 0, y la variable en la que se almacenan los datos recibidos.

void setup() 
{
  BTSerial.begin(9600);   //Arrancamos puerto serial para comunicación BlueTooth
  pinsOutput();           //Llamada a la función de declaración de puertos PWM como salida.
  pinMode(rxPin, INPUT);  //Establecemos pin de entrada BT como entrada
  pinMode(txPin, OUTPUT); //Establecemos pin de salida BT como salida
}

void loop()
{
  if (BTSerial.available())                                   //Si hay datos en el puerto BT...
  {
    serialin = BTSerial.parseInt();                           //...Los parseamos a tipo int.

    if (serialin > 0 && serialin < 256)                       //Si el valor está entre 1 y 255...
    {
      pwmvel = serialin;                                      //...Se considera valor pwm y se asigna como velocidad.
    }
    else if (serialin == 0)                                   //Si por el contrario el valor es 0...
    {
      StopMotor();                                            //Se paran los motores.
    }
    else                                                      //Si no...
    {
      MovMotor (map(serialin, 256, 267, 2, 13));              //Se mapea el dato recibido, haciendo que el 256 corresponda con el valor 2 y el 267 con el valor 13.
    }                                                         //Y se invoca la función que permite mover el motor correspondiente.
  }
}


void MovMotor (int ACT)                                     //Cuando se invoca, mueve el motor correspondiente a la velocidad seleccionada.
{
  analogWrite (ACT, pwmvel);
}

void StopMotor()                                            //Cuando se invoca para todos los motores, poniendo el pwm a 0.
{
  int i;
  for (i = 2; i < 14; i++)
  {
    analogWrite(i, 0);
  }
}

void pinsOutput()
{
  int i;
  for (i = 2; i < 14; i++)
  {
    pinMode (i, OUTPUT);
  }
}
