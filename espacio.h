#ifndef PROYECTO_POO_E
#define PROYECTO_POO_E

#include <iostream>
#include <vector>
#include "tipo.h"
#include "slot.h"
#include "robot.h"

class Calmacenamiento{
  tipo largo_total;
  tipo ancho_total;

  public:
  vector<Cslot> slots;
  vector<Crobot*> robots;
  Calmacenamiento(tipo largo, tipo ancho);
  void imprimir_almacenamiento();
  void add_robot(Crobot* r);
  
};

#endif
