#include "robot.h"
#include <iostream>
#include "slot.h"
#include "tipo.h"
#include "producto.h"


Crobot::Crobot(int num, rob pos_x, rob pos_y): numero{num}, rob_x{pos_x}, rob_y{pos_y}{

  condicion = false;

  //añadir robot a CAlmacenamiento

}

al Crobot::get_rob_x(){
    return rob_x;
}

al Crobot::get_rob_y()
  {
    return rob_y;
}
/*
void Crobot::set_rob_x(int x)
  {
    rob_x = x;
}

void Crobot::set_rob_y(int y)
  {
    rob_y = y;
}
*/

bool Crobot::get_condicion(){
  return condicion;
}


void Crobot::mover_a_slot(al x, al y){
  rob_x = x;
  rob_y = y;

}

void Crobot::mover_a_home(){
  rob_x = 0;
  rob_y = 0;
}






