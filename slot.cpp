

#include "slot.h"
#include "espacio.h"
#include "robot.h"

Cslot::Cslot(int posicion_x, int posicion_y): posicion_slot_x{posicion_x},
posicion_slot_y{posicion_y} {
  ocupado_robot = false;
  ocupado_producto = false;
}


int Cslot::get_x(){
  return posicion_slot_x;
}

int Cslot::get_y()
  {
    return posicion_slot_y;
}

bool Cslot::get_condicion_slot(){ 

  for(int i=1; i<=Calmacenamiento->largo_total; i++){
   for(int j=1; j<=Calmacenamiento->ancho_total; j++){
   if(posicion_slot_x == Calmacenamiento->slots[i].get_x && posicion_slot_y == Calmacenamiento->slots[i].get_y){
     if(prods.size() == 0) ocupado_producto =false;
     else ocupado_producto = true;
    }
   }
 }
  
   return ocupado_producto;
}


bool Cslot::get_condicion_robot(){
   for(int i=1; i<=Calmacenamiento.largo_total; i++){
    for(int j=1; j<=Calmacenamiento.ancho_total; j++){
      for(int k=0; k<Calmacenamiento->robots.size(); k++){
      if(posicion_slot_x == robots[k].get_rob_x() && posicion_slot_y == robots[k]->get_rob_y()){
          ocupado_robot = true;
        
          }
        else ocupado_robot = false;
        }
      }
    } 
    return ocupado_robot;
}



