#include "inst.h"
#include "tipo.h"
#include "slot.h"
#include "espacio.h"
#include "robot.h"
#include "producto.h"
#include <string>

Cslot* busca_slot(tipo x, tipo y, Calmacenamiento alm){
  for(int i=0; i<alm.slots.size(); i++){
    if(alm.slots[i].get_s_x() == x && alm.slots[i].get_s_y() == y){
      return &alm.slots[i];
    }
  }
 return nullptr;
}

bool robot_in_slot(tipo x, tipo y, Calmacenamiento alm){
  for(int i=0; i<alm.robots.size(); i++){
    if(alm.robots[i]->get_x() == x && alm.robots[i]->get_y() == y){
      return true;
    }
  }
  return false;
}

Crobot* get_este_robot(tipo x, tipo y, Calmacenamiento alm){
  for(int i=0; i<alm.robots.size(); i++){
    if(alm.robots[i]->get_x() == x && alm.robots[i]->get_y() == y){
      return alm.robots[i];
    }
  }
  return nullptr;
}

void mueve_producto_a_slot(Crobot* rob, Cproducto* p, tipo x, tipo y, Calmacenamiento alm){

  bool check = robot_in_slot(x, y, alm);

  cout<<"---Moviendo producto a slot---"<<endl;

  if(check == false){

    rob->mover_a_slot(x, y);
    p->mueve_producto(x, y);

    
    Cslot* s = busca_slot(x, y, alm);

    if(s!= nullptr){

      s->agrega_producto(p);
      /*
      cout<<s->get_ptr_producto()->get_x()<<" ; "<<s->get_ptr_producto()->get_y()<<endl;
      */
    }

    alm.imprimir_almacenamiento();
    cout<<endl;
    cout<< p->get_name()<<" se encuentra en  ("<<x<<";"<<y<<")"<<endl;
    cout<< "Robot N"<<rob->get_num()<< " se encuentra en ("<<x<<";"<<y<<")"<<endl;

    cout<<endl;
    cout<<"---operacion terminada---"<<endl;
    cout<<endl;
  }
  else{
    Crobot* _r = get_este_robot(x, y, alm);
    cout<<endl;
    cout<<"Operacion no valida."<<endl;
    cout<<endl;
    cout<<"El robot "<<_r->get_num()<<" ya esta en este slot"<<endl;
    cout<<endl;
  }
}

void saca_producto(Crobot* rob, Cproducto* p, Calmacenamiento alm){

    cout<<"---sacando producto de slot---"<<endl;
    cout<<endl;

    tipo x = p->get_x();
    tipo y = p->get_y();

    rob->mover_a_slot(x, y);
    cout<<"El producto se encuentra en ("<<x<<";"<<y<<")"<<endl;
    cout<<"Moviendo robot al producto..."<<endl;

    alm.imprimir_almacenamiento();

    cout<<endl;
    cout<<"Retirando producto..."<<endl;
    cout<<endl;

    Cslot* s = busca_slot(x, y, alm);

    if(s != nullptr){
        s->saca_producto();
    }
    
    
    p->mueve_producto(0, 0);

    rob->regresa_home();

    alm.imprimir_almacenamiento();
    
    cout<<endl;
    cout<< "Robot N"<<rob->get_num()<< " se encuentra en ("<<rob->get_x()<<";"<<rob->get_y()<<")"<<endl;
    cout<<endl;
  
  
    cout<<"--Operacion terminada---"<<endl;

  
}
