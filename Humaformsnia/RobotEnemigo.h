#pragma once
#include "Enemigo.h"

class Robot : public Enemigo
{
private:
   

public:

    Robot();

     void mover() override;

     void setVelocidad(int velocidad) override;

};

Robot::Robot()
{
   
    this->dano = 1;
    this->velocidad = 2; 
}

void Robot::mover()
{
  
}
void Robot::setVelocidad(int velocidad)
{
    this-> velocidad=velocidad
}