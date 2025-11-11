#pragma once
#include "Entidad.h"

using namespace System;
using namespace System::Drawing;

class Enemigo : public Entidad
{
public:
    Enemigo();
    ~Enemigo();


    virtual void dibujar(Graphics^ canvas) override;
    virtual void borrar(Graphics^ canvas) override;
    virtual void mover() = 0;

    int getDano();
     void setVelocidad(int velocidad);

protected:

    int dano;
    int velocidad;
    Bitmap^ sprite; 

  

    void cambiarimagen();
};


Enemigo::Enemigo()
    
{
    this->dano = 1;
    this->velocidad = 0;

   
}

Enemigo::~Enemigo()
{
    
}

void Enemigo::dibujar(Graphics^ canvas)
{
    
}

void Enemigo::borrar(Graphics^ canvas)
{
}

int Enemigo::getDano()
{
    return this->dano;
}

void Enemigo::setVelocidad(int velocidad)
{
    this->velocidad = velocidad;
}

void Enemigo::cambiarimagen()
{


}

