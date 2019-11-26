
#ifndef PROYECTO_POO_R
#define PROYECTO_POO_R

#include "tipo.h"
#include "slot.h"

class Crobot{
  //priv
  al rob_x;
  al rob_y;
  int numero;
  bool condicion; 
  public:
  //atributos
  Crobot(int num, rob pos_x, rob pos_y);
  //métodos
  al get_rob_x();
  al get_rob_y();

  /* creo q no necesitamos estas funciones porq podemos usar mover_a_slot(x,y)

  void set_rob_x(int x);
  void set_rob_y(int y);
  */

  bool get_condicion();
  
  void mover_a_slot(al x, al y);
  void mover_a_home();
  
  friend class Cslot;

};


#endif 
