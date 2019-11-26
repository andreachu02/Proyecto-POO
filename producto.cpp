#include <iostream>
#include "producto.h"
#include "tipo.h"
#include "slot.h"

Cproducto::Cproducto(std::string nombre, al x, al y):tipo{nombre}, prod_pos_x{x}, prod_pos_y{y}{
  //  Cslot->prods.push_back(Cproducto); (añadir producto a vector prods en slot)
}


void Cproducto::set_px(al x)
  {
    prod_pos_x = x;
}
  
void Cproducto::set_py(al y)
  {
    prod_pos_x = y;
}

al Cproducto::get_px()
  {
    return prod_pos_x;
}

al Cproducto::get_py()
  {
    return prod_pos_y;
}



