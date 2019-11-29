#include "slot.h"


Cslot::Cslot(int x, int y): slot_x{x},
slot_y{y} {
  vacio_producto = true;
  vacio_robot = true;
  p_en_slot = nullptr;

}

tipo Cslot::get_s_x(){
  return slot_x;
}

tipo Cslot::get_s_y(){
  return slot_y;
}

void Cslot::agrega_producto(Cproducto* p){
  p_en_slot = p;
  vacio_producto = false;
}

void Cslot::saca_producto(){
  vacio_producto = true;
  p_en_slot = nullptr;
}

string Cslot::get_producto(){
  if(vacio_producto == false){

    return p_en_slot->get_name();
  }
  else return "No hay un producto";
}

Cproducto* Cslot::get_ptr_producto()
{
  return p_en_slot;
}

bool Cslot::get_v(){
  
  return vacio_producto;
}
