#include "producto.h"
#include <string>

Cproducto::Cproducto(tipo x, tipo y, string name):
pos_x{x},pos_y{y},nombre{name}{
  
}

tipo Cproducto::get_x()
{return pos_x;}

tipo Cproducto::get_y()
{return pos_y;}

string Cproducto::get_name()
{return nombre;}

void Cproducto::mueve_producto(tipo x, tipo y){
  pos_x = x;
  pos_y = y;}


