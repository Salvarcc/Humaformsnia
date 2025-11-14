#pragma once
#include "Entidad.h"

using namespace System;
using namespace System::Drawing;

ref class Enemigo : public Entidad
{
protected:


    int dano;
    int velocidad;
    Bitmap^ sprite;


public:

    Enemigo();
    ~Enemigo();


    virtual void cambiar_imagen(String^ imagen) override;
    virtual void mover(Graphics^ canvas) override;
    virtual void mostrar(Graphics^ canvas) override;

    int getDano();
    void setVelocidad(int velocidad);

};


Enemigo::Enemigo() : Entidad(x, y, ancho, alto)
{
    this->dano = 1;
    this->velocidad = 0;



}

Enemigo::~Enemigo()
{

}

void Enemigo::cambiar_imagen(String^ imagen)
{

}


void Enemigo::mover(Graphics^ canvas)
{

}

void Enemigo::mostrar(Graphics^ canvas)
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