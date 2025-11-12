#pragma once
#include "Entidad.h"
#include <string> 

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms; 

ref class NPC : public Entidad
{
public:
    NPC();
    ~NPC();


    virtual void dibujar(Graphics^ canvas) override;
    virtual void mover() override;

    virtual void borrar(Graphics^ canvas) override;


    String^ getMensaje();

    void mostrarMensaje();

protected:

    String^ mensaje;

};


NPC::NPC() : Entidad(0, 0, 0, 0)
{

}

NPC::~NPC()
{
   
}

void NPC::dibujar(Graphics^ canvas)
{
   
}

void NPC::mover()
{
    
}

void NPC::borrar(Graphics^ canvas)
{
   
}

String^ NPC::getMensaje()
{
    return this->mensaje;
}

void NPC::mostrarMensaje()
{
    
}