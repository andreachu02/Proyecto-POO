#ifndef INST
#define INST

#include "tipo.h"
#include "slot.h"
#include "espacio.h"
#include "robot.h"
#include "producto.h"

Cslot* busca_slot(tipo x, tipo y, Calmacenamiento alm);

void mueve_producto_a_slot(Crobot* rob, Cproducto* p, tipo x, tipo y, Calmacenamiento alm);

bool robot_in_slot(tipo x, tipo y, Calmacenamiento alm);

Crobot* get_este_robot(tipo x, tipo y, Calmacenamiento alm);

void saca_producto(Crobot* rob, Cproducto* p, Calmacenamiento alm);

Cproducto* encontrar_producto(string prod, Calmacenamiento alm);

#endif
