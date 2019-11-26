
#ifndef PROYECTO_POO_P
#define PROYECTO_POO_P

#include "tipo.h"



class Cproducto{
  //private:
  std::string tipo;
  al prod_pos_x;
  al prod_pos_y;
  
  public:
  Cproducto(std::string nombre, al x, al y);
  void set_px(al x);
  void set_py(al y);
  al get_px();
  al get_py();


};

#endif

