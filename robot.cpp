#include "robot.h"



Crobot::Crobot(int num, tipo hx, tipo hy):
numero{num},rob_x{hx}, rob_y{hy},home_x{hx}, home_y{hy} {
  
}

tipo Crobot::get_x()
{return rob_x;}

tipo Crobot::get_y()
{return rob_y;}

int Crobot::get_num()
{return numero;}

void Crobot::mover_a_slot(tipo x, tipo y)
{
  rob_x = x;
  rob_y = y;
}

void Crobot::regresa_home()
{
  rob_x = home_x;
  rob_y = home_y;
}


 
