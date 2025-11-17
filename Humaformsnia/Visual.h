#pragma once
#include "Entidad.h"
#include <string> 

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

ref class Visual : public Entidad
{
public:
    Visual(int n);
    ~Visual();
    void cambiaimagen(String^ archivo);
    void mostrarimagen(Graphics^ canvas);
    void animacion();



protected:
    int n;
};


Visual::Visual(int n) : Entidad(0, 0, 0, 0)
{
    this->n = n;
}

Visual::~Visual()
{

}

void Visual::animacion() {
    indicecolumnas++;
    if (indicecolumnas > n - 1) indicecolumnas = 0;
}

void Visual::cambiaimagen(String^ archivo) {
    imagen = archivo;
    Bitmap^ mi_sprite = gcnew Bitmap(gcnew String(imagen));

    ancho = mi_sprite->Width / n;
    alto = mi_sprite->Height;

    delete mi_sprite;
}

void Visual::mostrarimagen(Graphics^ canvas)
{
    Bitmap^ mi_sprite = gcnew Bitmap(gcnew String(imagen));
    Rectangle cuadro = Rectangle(indicecolumnas * ancho, indicefilas * alto, ancho, alto);
    Rectangle zoom = Rectangle(x, y, ancho, alto);
    canvas->DrawImage(mi_sprite, zoom, cuadro, GraphicsUnit::Pixel);
}
