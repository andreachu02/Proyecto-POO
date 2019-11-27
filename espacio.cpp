#include "espacio.h"

Calmacenamiento::Calmacenamiento(tipo largo, tipo ancho): largo_total{largo}, ancho_total{ancho} {
  
    for (int i = 1; i <= largo_total; i++) {
        for(int j=1; j<= ancho_total; j++){
            Cslot s(j, i);
            slots.push_back(s);
        }
    }

}

void Calmacenamiento::imprimir_almacenamiento() {
  bool a = false;
  if(robots.size()>0){
    for(int i=1; i<=largo_total; i++){
        for(int j=1; j<=ancho_total; j++){
          
            for(int k=0;k<robots.size();k++){
              if(robots[k]->get_x() == j && robots[k]->get_y() == i){
                a = true;
                cout<<" O ";
              }
              /*else if(){

              }*/ 
               }
              if(a == false){
                cout<<" . ";
              }
              a = false;
          

          
        
        }
        cout<<endl;
    }
  }

}



void Calmacenamiento::add_robot(Crobot* r){
  robots.push_back(r);
}







