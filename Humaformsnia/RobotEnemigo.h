#pragma once
#include "Enemigo.h"

ref class Robot : public Enemigo
{
private:
   
public:

    Robot();

    void mover() override;


};

Robot::Robot()
{
   
    this->dano = 1;
    this->velocidad = 2; 
}

void Robot::mover()
{
  
}