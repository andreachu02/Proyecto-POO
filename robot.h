
#ifndef PROYECTO_POO_R
#define PROYECTO_POO_R

#include "tipo.h"

class Crobot{
  int numero;
  tipo rob_x;
  tipo rob_y;
  tipo home_x;
  tipo home_y;

  public:
  Crobot(int num, tipo hx, tipo hy);
  tipo get_x();
  tipo get_y();
  int get_num();
  void mover_a_slot(tipo x, tipo y);
  void regresa_home();


};






#endif
