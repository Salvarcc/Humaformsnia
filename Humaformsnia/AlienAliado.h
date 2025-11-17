#pragma once
#include "Enemigo.h"

ref class AlienAliado : public Enemigo
{
private:
    bool activo;

public:

    AlienAliado();

    void cambiar_imagen(String^ nombre_archivo) override;
    void mover(Graphics^ canvas) override;
    void mostrar(Graphics^ canvas) override;

    void setActivo(bool activo);
    void Activo() { activo = true; }
};

AlienAliado::AlienAliado() :Enemigo()
{

    this->dano = 1;
    this->velocidad = 2;
    this->x = 670;
    this->y = 300;
    dx = 0;
    dy = 0;
    indicecolumnas = 0;
    activo = false;

}


void AlienAliado::cambiar_imagen(String^ nombre_archivo)
{
    imagen = nombre_archivo;
    Bitmap^ sprite = gcnew Bitmap(imagen);
    ancho = sprite->Width / 17;
    alto = sprite->Height;
    delete sprite;
}

void AlienAliado::mover(Graphics^ canvas)
{
    if (activo)
    {

        indicecolumnas++;
        if (indicecolumnas > 16) indicecolumnas = 0;

    }

}


void AlienAliado::mostrar(Graphics^ canvas)
{
    Bitmap^ sprite = gcnew Bitmap(imagen);
    Rectangle cuadro = Rectangle(indicecolumnas * ancho, 0, ancho, alto);
    Rectangle destino = Rectangle(x, y, ancho, alto);
    canvas->DrawImage(sprite, destino, cuadro, GraphicsUnit::Pixel);
    delete sprite;
}

void AlienAliado::setActivo(bool activo) {
    activo = true;
}