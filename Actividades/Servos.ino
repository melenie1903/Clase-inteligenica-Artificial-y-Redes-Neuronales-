#include <Servo.h>
//int fruta;
Servo servo1;
Servo servo2;

void setup() {
  Serial.begin(9600);  // por si quieres imprimir algo después
  servo1.attach(9);
  servo2.attach(10);

  // Posición inicial de los servos (opcional)
  servo1.write(180);
  servo2.write(180);


}

void loop() 
{
if (Serial.available()) 
{
  //fruta=Serial.read();
  String fruta = Serial.readStringUntil('\n');
  //delay(500);
  if (fruta == "Apple") 
  {
    servo1.write(45);
    servo2.write(180);
    
  } 
  
  else if (fruta == "Orange") 
  {
    servo2.write(70);
    servo1.write(180);
  } 

 else if (fruta=="Strawberry")
 {
   servo1.write(180);
   servo2.write(180);
 }
}


}
