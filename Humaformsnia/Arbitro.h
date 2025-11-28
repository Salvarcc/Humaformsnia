#pragma once
#include "Entidad.h"

ref class Arbitro : public Entidad
{
private:
    bool activo;
    int imagen_animadas;

public:

    Arbitro();

    void cambiar_imagen(String^ nombre_archivo);
    void mover(Graphics^ canvas);
    void mostrar(Graphics^ canvas);
    void reiniciar();


    void Activo() { activo = true; }
};

Arbitro::Arbitro() : Entidad(0, 0, 0, 0)
{
    this->x = 700;
    this->y = 300;
    dx = 0;
    dy = 0;
    indicecolumnas = 0;
    activo = false;
    imagen_animadas = 0;

}
void Arbitro::reiniciar()
{
    x = 700;
    y = 300;
    dx = 0;
    dy = 0;

    activo = false;
    indicecolumnas = 0;
    imagen_animadas = 0;
}

void Arbitro::cambiar_imagen(String^ nombre_archivo)
{
    imagen = nombre_archivo;
    Bitmap^ sprite = gcnew Bitmap(imagen);
    ancho = sprite->Width / 11;
    alto = sprite->Height;
    delete sprite;
}

void Arbitro::mover(Graphics^ canvas)
{
    if (activo)
    {
        indicecolumnas++;
        imagen_animadas++;

        if (indicecolumnas > 10) indicecolumnas = 10;
        if (imagen_animadas >= 11) activo = false;
    }
}


void Arbitro::mostrar(Graphics^ canvas)
{
    Bitmap^ sprite = gcnew Bitmap(imagen);
    Rectangle cuadro = Rectangle(indicecolumnas * ancho, 0, ancho, alto);
    Rectangle destino = Rectangle(x, y, ancho, alto);
    canvas->DrawImage(sprite, destino, cuadro, GraphicsUnit::Pixel);
    delete sprite;
}
 
