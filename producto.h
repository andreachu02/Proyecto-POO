#ifndef prod
#define prod

#include <string>
#include "tipo.h"

class Cproducto
{
  private:
  tipo pos_x;
  tipo pos_y;
  std::string nombre;

  public:
  Cproducto(tipo x, tipo y, string name);
  tipo get_x();
  tipo get_y();
  void mueve_producto(tipo x, tipo y);
  std::string get_name();

};

#endif
