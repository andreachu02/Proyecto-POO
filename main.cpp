#include <iostream>
#include <vector>
#include "tipo.h"
#include "slot.h"
#include "espacio.h"
#include "robot.h"
#include "producto.h"
#include "inst.h"




int main() {

//creacion de almacen
  tipo an;
  tipo lar;
  cout<<"--Creando almacenamiento--"<<endl;
  cout<<"Ingrese largo: ";
  cin>>lar;
  cout<<"Ingrese ancho: ";
  cin>>an;
  Calmacenamiento a(lar, an);

  //creacion de robots
  Crobot R1(1, 1, 1);
  Crobot* pR1 = &R1;
  a.add_robot(pR1);

  Crobot R2(2, 1, 2);
  Crobot* pR2 = &R2;
  a.add_robot(pR2);

  Crobot R3(3, 1, 3);
  Crobot* pR3 = &R3;
  a.add_robot(pR3);

  vector<Cproducto*> productos;

  //impresion de almacen inicial
  a.imprimir_almacenamiento();
  cout<<"---------------------------------------"<<endl;
  cout<<endl;

  //IMPRESION DEL MENU
  int opcion;
  cout<<endl;
  cout<<"---MENU---"<<endl;
  cout<<endl;
  cout<<"1. Agregar producto"<<endl;
  cout<<"2. Sacar producto"<<endl;
  cout<<"3. Regresar robots a home"<<endl;
  cout<<"4. Salir del programa."<<endl;
  
  cin>> opcion;

  //MENU
  while(opcion != 4){ 
    if(opcion == 1){
      tipo p_x;
      tipo p_y;
      string p_name;
      
      //creacion del producto
      cout<<"Nombre del producto: ";
      cin>>p_name;
      Cproducto* p = new Cproducto(0, 0, p_name);
      productos.push_back(p);
      //--------------------------------------------------
      //Destino y robot que lo lleva
      cout<<"Ingrese destino: ";
      cin>>p_x>>p_y;
      cout<<"Seleccione Robot (1, 2 o 3):"<<endl;
      int n_robot;
      cin>>n_robot;

      Cproducto* pp = productos[productos.size()-1];

      if(n_robot == 1){
        mueve_producto_a_slot(pR1, pp, p_x, p_y, a);
      }
      else if(n_robot == 2){
        mueve_producto_a_slot(pR2, pp, p_x, p_y, a);
      }
      else{
        mueve_producto_a_slot(pR3, pp, p_x, p_y, a);
      }
      
      cout<<endl;
      cout<<"---MENU---"<<endl;
      cout<<endl;
      cout<<"1. Agregar producto"<<endl;
      cout<<"2. Sacar producto"<<endl;
      cout<<"3. Regresar robots a home"<<endl;
      cout<<"4. Salir del programa."<<endl;

      cout<<endl;
      cout<<"Ingrese nueva opcion: ";
      cin>>opcion;
    }

    //SACAR LOS PRODUCTOS
    else if(opcion == 2){

      cout<<"Seleccione n producto de la lista: "<<endl;
      
      int n_prod;

      int n_p = 1;

      for(int i=0; i<productos.size(); i++){
          cout<<n_p++<<". "<<productos[i]->get_name()<<endl;
          
      }
      cout<<"Ingrese numero de producto: ";
      cin>>n_prod;
      n_prod = n_prod - 1;

      cout<<"Ingrese Robot: ";
      int n_robot;
      cin>>n_robot;

      if(n_robot == 1){
        saca_producto(pR1, productos[n_prod], a);
      }
      else if(n_robot == 2){
        saca_producto(pR2, productos[n_prod], a);
      }
      else{
        saca_producto(pR3, productos[n_prod], a);
      }

     // Cproducto* prodptr = encontrar_producto(productos, a)

      cout<<endl;
      cout<<"---MENU---"<<endl;
      cout<<endl;
      cout<<"1. Agregar producto"<<endl;
      cout<<"2. Sacar producto"<<endl;
      cout<<"3. Regresar robots a home"<<endl;
      cout<<"4. Salir del programa."<<endl;


      cout<<endl;
      cout<<"Ingrese nueva opcion: ";
      cin>>opcion;
    }
    //REGRESA ROBOTS A HOME
    else if(opcion == 3){

      R1.regresa_home();
      R2.regresa_home();
      R3.regresa_home();

      cout<<endl;
      a.imprimir_almacenamiento();

      cout<<endl;
      cout<<"---MENU---"<<endl;
      cout<<endl;
      cout<<"1. Agregar producto"<<endl;
      cout<<"2. Sacar producto"<<endl;
      cout<<"3. Regresar robots a home"<<endl;
      cout<<"4. Salir del programa."<<endl;

      cout<<endl;
      cout<<"Ingrese nueva opcion: ";
      cin>>opcion;
    }
    else if(opcion == 4){
      cout<<endl;
      cout<<"-------------programa terminado--------------"<<endl;
      return 0;
    }
    else{
      cout<<"Error. Elija una opcion del menu:"<<endl;

      cout<<endl;
      cout<<"---MENU---"<<endl;
      cout<<endl;
      cout<<"1. Agregar producto"<<endl;
      cout<<"2. Sacar producto"<<endl;
      cout<<"3. Regresar robots a home"<<endl;
      cout<<"4. Salir del programa."<<endl;

      cout<<endl;
      cout<<"Ingrese nueva opcion: ";
      cin>>opcion;
    }

  }
  
  


  return 0;

}
