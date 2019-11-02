
#ifndef PROYECTO_POO_R
#define PROYECTO_POO_R

#include "tipo.h"


class Crobot{
  //priv
  rob slot;
  rob numero;

  public:
  //atributos
  robot();
  robot(int num, int s);
  bool condicion(); //on or off
  //métodos
  rob get_slot();
  rob get_condicion();
  mover_a_slot(int slot_destino);
  mover_a_home();
  guardar_inst();
}


#endif 