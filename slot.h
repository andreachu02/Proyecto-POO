
#ifndef PROYECTO_POO_SLOT
#define PROYECTO_POO_SLOT

#include <vector>
#include "tipo.h"
#include "producto.h"

class Cslot{
  //priv
  num posicion_slot_x;
  num posicion_slot_y;

  bool ocupado_producto; //true cuando hay un producto en el slot
  bool ocupado_robot;
  vector<Cproducto> &prods;

  public:
  //atributos
  Cslot(int posicion_x, int posicion_y);
   //métodos
  int get_x();
  int get_y();
  bool get_condicion_slot();
  bool get_condicion_robot();


};




#endif 

