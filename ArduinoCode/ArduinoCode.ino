/* PROGRAMACIÓN ROBÓTICA 1º MEL 
 */
//DECLARAMOS LOS PINES DE SALIDA PARA LOS 3 LM323n
/*PRIMER LM323n
 * 
 */
//MOTOR 1
int M11 = 2;
int M12 = 3;
//MOTOR 2
int M21 = 4;
int M22 = 5;
//MOTOR 3
int M31 = 6;
int M32 = 7;
//MOTOR 4
int M41 = 8;
int M42 = 9;
//MOTOR 5
int M51 = 10;
int M52 = 11;
//MOTOR 6
int M61 = 12;
int M62 = 13;

int pwmvel=100;
int serialin;

void setup() {

  Serial.begin(9600);
//DECLARAMOS LOS PINES COMO SALIDA
  pinMode (M11, OUTPUT);
  pinMode (M12, OUTPUT);
  pinMode (M21, OUTPUT);
  pinMode (M22, OUTPUT);
  pinMode (M31, OUTPUT);
  pinMode (M32, OUTPUT);
  pinMode (M41, OUTPUT);
  pinMode (M42, OUTPUT);
  pinMode (M51, OUTPUT);
  pinMode (M52, OUTPUT);
  pinMode (M61, OUTPUT);
  pinMode (M62, OUTPUT);
}

void loop() 
{
  if (Serial.available())
  {
    serialin=Serial.parseInt();
    switch (serialin)
    {
      case 100:
      pwmvel = 100;
      break;
      
      case 150:
      pwmvel = 150;
      break;
      
      case 255:
      pwmvel = 255;
      break;

      case 15:
      StopMotor();
      break;
      
      default:
      MovMotor(serialin);
      break;
      
      }
    }
}

//DECLARAMOS LAS FUNCIONES QUE VAMOS A UTILIZAR
//MOTOR 1
void MovMotor (int ACT)
{
  analogWrite (ACT, pwmvel);
}

void StopMotor()
{
  digitalWrite (M11, LOW);
  digitalWrite (M12, LOW);
  digitalWrite (M21, LOW);
  digitalWrite (M22, LOW);
  digitalWrite (M31, LOW);
  digitalWrite (M32, LOW);
  digitalWrite (M41, LOW);
  digitalWrite (M42, LOW);
  digitalWrite (M51, LOW);
  digitalWrite (M52, LOW);
  digitalWrite (M61, LOW);
  digitalWrite (M62, LOW);
}
