
#include <iostream>
#include <vector>
#include "espacio.h"
#include "slot.h"
#include "robot.h"

using namespace std;

Calmacenamiento::Calmacenamiento(al largo, al ancho): largo_total{largo}, ancho_total{ancho} {
 
    for (int i = 1; i <= ancho_total; i++) {
        for(int j=1; j<= largo_total; j++){
            Cslot s(i, j);
            slots.push_back(s);
        }
    }

    /*
    Cslot* s = new s(x, y);
    slots.push_back(*s);
    delete s;
    */

}

void Calmacenamiento::imprimir_almacenamiento() {
    for(int i=0; i<ancho_total; i++){
        for(int j=0; j<largo_total; j++){
          for(int k=0;k<robots.size();k++){
            if(robots[k].get_rob_x() == i && robots[k].get_rob_y() == j){
              cout<<" O ";
            }
            else cout<<" . "; 
          }
        }
        cout<<endl;
    }
}

//

void Calmacenamiento::add_robot(Crobot &r){
  robots.push_back(r);
}




