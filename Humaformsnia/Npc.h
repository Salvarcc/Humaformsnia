#pragma once
#include "Entidad.h"
#include <string> 
using namespace std;
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms; 

class NPC : public Entidad
{
public:
    NPC();
    ~NPC();


    virtual void dibujar(Graphics^ canvas) override;
    virtual void mover() override;

    virtual void borrar(Graphics^ canvas) override;


    string getMensaje();

    void mostrarMensaje();

protected:
    string mensaje; 

    
};


NPC::NPC()
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

string NPC::getMensaje()
{
    return this->mensaje;
}

void NPC::mostrarMensaje()
{
    
}