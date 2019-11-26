
#ifndef PROYECTO_POO_E
#define PROYECTO_POO_E

#include "tipo.h"
#include <vector>
#include "slot.h"
#include "robot.h"



class Calmacenamiento{
  al largo_total;
  al ancho_total;

  public:
  vector<Cslot> &slots;
  vector<Crobot> &robots;
  Calmacenamiento(al largo, al ancho);
  void imprimir_almacenamiento();
  void add_robot(Crobot &r);
  friend class Cslot;
};



#endif 
