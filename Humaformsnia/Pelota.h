#pragma once
#include "Enemigo.h"

ref class Pelota : public Enemigo
{
public:
    Pelota();

    virtual void mover() override;
     void setVelocidad(int velocidad) override;
};


Pelota::Pelota()
{
    this->dano = 1;
    this->velocidad = 5; 

    
}

void Pelota::mover()
{
   
}

void Pelota::setVelocidad(int velocidad)
{
   
}