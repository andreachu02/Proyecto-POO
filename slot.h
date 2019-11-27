
#ifndef PROYECTO_POO_SLOT
#define PROYECTO_POO_SLOT

#include <vector>
#include "tipo.h"

#include "producto.h"

class Cslot{
  tipo slot_x;
  tipo slot_y;
  bool vacio_producto;
  bool vacio_robot; 
  Cproducto* p_en_slot;

  public:
  Cslot(tipo x, tipo y);

  tipo get_s_x();
  tipo get_s_y();
  string get_producto();
  Cproducto* get_ptr_producto();
  void agrega_producto(Cproducto* p);
  void saca_producto();


};






#endif
