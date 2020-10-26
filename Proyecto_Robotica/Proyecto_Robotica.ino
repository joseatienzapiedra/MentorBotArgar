/* PROGRAMACIÓN ROBÓTICA 1º MEL 
 */

//DECLARAMOS LOS PINES DE SALIDA PARA LOS 3 LM323n
/*PRIMER LM323n
 * 
 */
//MOTOR 1
int IN2 = 2;
int IN3 = 3;
//MOTOR 2
int IN4 = 4;
int IN5 = 5;
/*SEGUNDO LM323n
 * 
 */
//MOTOR 3
int IN6 = 6;
int IN7 = 7;
//MOTOR 4
int IN8 = 8;
int IN9 = 9;
/*TERCER LM323n
 * 
 */
//MOTOR 5
int IN10 = 10;
int IN11 = 11;
//MOTOR 6
int IN12 = 12;
int IN13 = 13;


void setup() {
//DECLARAMOS LOS PINES COMO SALIDA
  //MOTOR 1
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  //MOTOR 2
  pinMode (IN4, OUTPUT);
  pinMode (IN5, OUTPUT);
  //MOTOR 3
  pinMode (IN6, OUTPUT);
  pinMode (IN7, OUTPUT);
  //MOTOR 4
  pinMode (IN8, OUTPUT);
  pinMode (IN9, OUTPUT);
  //MOTOR 5
  pinMode (IN10, OUTPUT);
  pinMode (IN11, OUTPUT);
  //MOTOR 6
  pinMode (IN12, OUTPUT);
  pinMode (IN13, OUTPUT);
  

}

void loop() {


  if //Función para activar el motor 1 hacia la derecha
  {
    Motor_derecha_1 ();
  }
  if //Función para activar el motor 1 hacia la izquierda
  {
    Motor_izquierda_1 ();
  }
  if //Función para activar el motor 2 hacia la derecha
  {
    Motor_derecha_2 ();
  }
  if //Función para activar el motor 2 hacia la izquierda
  {
    Motor_izquierda_2 ();
  }
if //Función para activar el motor 3 hacia la derecha
  {
    Motor_derecha_3 ();
  }
  if //Función para activar el motor 3 hacia la izquierda
  {
    Motor_izquierda_3 ();
  }
  if //Función para activar el motor 4 hacia la derecha
  {
    Motor_derecha_4 ();
  }
  if //Función para activar el motor 2 hacia la izquierda
  {
    Motor_izquierda_4 ();
  }
if //Función para activar el motor 5 hacia la derecha
  {
    Motor_derecha_5 ();
  }
  if //Función para activar el motor 5 hacia la izquierda
  {
    Motor_izquierda_5 ();
  }
  if //Función para activar el motor 6 hacia la derecha
  {
    Motor_derecha_6 ();
  }
  if //Función para activar el motor 6 hacia la izquierda
  {
    Motor_izquierda_6 ();
  }  
}

//DECLARAMOS LAS FUNCIONES QUE VAMOS A UTILIZAR
//MOTOR 1
void Motor_derecha_1 ()
{
  // Motor gira en un sentido
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, LOW);
}
void Motor_izquierda_1 ()
{
  // Motor gira en sentido inverso
  digitalWrite (IN3, HIGH);
  digitalWrite (IN2, LOW);
}
void Motor_stop_1 ()
{
  // Motor no gira
  digitalWrite (IN2, LOW);

}
//MOTOR 2
void Motor_derecha_2 ()
{
  // Motor gira en un sentido
  digitalWrite (IN4, HIGH);
  digitalWrite (IN5, LOW);

}
void Motor_izquierda_2 ()
{
  // Motor gira en sentido inverso
  digitalWrite (IN5, HIGH);
  digitalWrite (IN4, LOW);
}
void Motor_stop_2 ()
{
  // Motor no gira
  digitalWrite (IN5, LOW);
}
//MOTOR 3
void Motor_derecha_3 ()
{
  // Motor gira en un sentido
  digitalWrite (IN6, HIGH);
  digitalWrite (IN7, LOW);

}
void Motor_izquierda_3 ()
{
  // Motor gira en sentido inverso
  digitalWrite (IN7, HIGH);
  digitalWrite (IN6, LOW);
}
void Motor_stop_3 ()
{
  // Motor no gira
  digitalWrite (IN7, LOW);
}
//MOTOR 4
void Motor_derecha_4 ()
{
  // Motor gira en un sentido
  digitalWrite (IN8, HIGH);
  digitalWrite (IN9, LOW);
}
void Motor_izquierda_4 ()
{
  // Motor gira en sentido inverso
  digitalWrite (IN9, HIGH);
  digitalWrite (IN8, LOW);
}
void Motor_stop_4 ()
{
  // Motor no gira
  digitalWrite (IN8, LOW);

}
//MOTOR 5
void Motor_derecha_5 ()
{
  // Motor gira en un sentido
  digitalWrite (IN10, HIGH);
  digitalWrite (IN11, LOW);

}
void Motor_izquierda_5 ()
{
  // Motor gira en sentido inverso
  digitalWrite (IN11, HIGH);
  digitalWrite (IN10, LOW);
}
void Motor_stop_5 ()
{
  // Motor no gira
  digitalWrite (IN10, LOW);
}
//MOTOR 6
void Motor_derecha_6 ()
{
  // Motor gira en un sentido
  digitalWrite (IN12, HIGH);
  digitalWrite (IN13, LOW);

}
void Motor_izquierda_6 ()
{
  // Motor gira en sentido inverso
  digitalWrite (IN13, HIGH);
  digitalWrite (IN12, LOW);
}
void Motor_stop_6 ()
{
  // Motor no gira
  digitalWrite (IN12, LOW);
}
