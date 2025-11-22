#pragma once
#include "Enemigo.h"

ref class Messi : public Enemigo
{
private:
    bool abajo;

public:

    Messi(int x, int y);

    void cambiar_imagen(String^ nombre_archivo) override;
    void mover(Graphics^ canvas) override;
    void mostrar(Graphics^ canvas) override;


};

Messi::Messi(int x, int y) :Enemigo()
{

    this->dano = 1;
    this->velocidad = 2;
    this->x = x;
    this->y = y;
    dx = 0;
    dy = 8;
    indicecolumnas = 0;
    abajo = true;

}


void Messi::cambiar_imagen(String^ nombre_archivo)
{
    imagen = nombre_archivo;
    Bitmap^ sprite = gcnew Bitmap(imagen);
    ancho = sprite->Width / 14;
    alto = sprite->Height;
    delete sprite;
}
void Messi::mover(Graphics^ canvas)
{

    indicecolumnas++;
    if (indicecolumnas > 13) indicecolumnas = 0;
}

void Messi::mostrar(Graphics^ canvas)
{
    Bitmap^ sprite = gcnew Bitmap(imagen);
    Rectangle cuadro = Rectangle(indicecolumnas * ancho, 0, ancho, alto);
    Rectangle destino = Rectangle(x, y, ancho, alto);
    canvas->DrawImage(sprite, destino, cuadro, GraphicsUnit::Pixel);
    delete sprite;
}
