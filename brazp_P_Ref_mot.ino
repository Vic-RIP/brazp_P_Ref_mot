//la 1.04 es la que jala con el control del play
//la version 1.05 no resolvio el pedo
//hay un pedo con mi libreria de multiplicacion de matrices
#define sp(r) Serial.print(r)
#define spl(r) Serial.println(r)
#define spF(r,f) Serial.print(r,f)
#define splF(r,f) Serial.println(r,f)
#define s(r) sin(r)
#define c(r) cos(r)
#define sen(r) sin(r)

#include "globales.h"




mov_mov brazo;
void setup() {
  Serial.begin(115200);
  spl("hola");
  brazo.caaall();
  brazo.print();
  brazo.calcular_ang();
  brazo.print();
}

void loop() {
  // put your main code here, to run repeatedly:

}
