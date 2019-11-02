
#ifndef PROYECTO_POO_SLOT
#define PROYECTO_POO_SLOT

#include "tipo.h"


class Cslot{
  //priv
  num posicion_slot;
  num max_slot;
  string producto;
  bool ocupado_producto;
  bool ocupado_robot;
  
  public:
  //atributos
  slot();
  slot(int posicion_x, int posicion_y);
   //métodos
  get_condicion();

}


#endif 