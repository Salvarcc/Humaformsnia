#pragma once
#include "Enemigo.h"

ref class Pelota : public Enemigo
{
private:
    bool rebotando_abajo; 

public:
    Pelota(Graphics^ canvas, int numero_pelota); 
    void cambiar_imagen(String^ nombre_archivo) override;
    void mover(Graphics^ canvas) override;
    void mostrar(Graphics^ canvas) override;
};


Pelota::Pelota(Graphics^ canvas, int numero_pelota)
{
    this->dano = 1;
    this->velocidad = 2;

    this->x = canvas->VisibleClipBounds.Width - 150;
    this->y = canvas->VisibleClipBounds.Height / 2;

    
   


    if (numero_pelota % 2 == 0) {
        rebotando_abajo = true;  
        this->y = canvas->VisibleClipBounds.Height / 2-100;dx = -8; dy = 6;
    }
    else {
        rebotando_abajo = false;  
        this->y = canvas->VisibleClipBounds.Height / 2;
        dx = -10;
        dy = 10;
    }

    indicecolumnas = 0;
}


void Pelota::cambiar_imagen(String^ nombre_archivo)
{
    imagen = nombre_archivo;
    Bitmap^ sprite = gcnew Bitmap(imagen);
    ancho = sprite->Width / 5;
    alto = sprite->Height;
    delete sprite;
}

void Pelota::mover(Graphics^ canvas)
{
    x += dx;

    if (rebotando_abajo) {
        y += dy;
        if (y + alto >= canvas->VisibleClipBounds.Height-40)
            rebotando_abajo = false;
    }
    else {
        y -= dy;
        if (y <= 150)
            rebotando_abajo = true;
    }

    indicecolumnas++;
    if (indicecolumnas > 4) indicecolumnas = 0;


  
}

void Pelota::mostrar(Graphics^ canvas)
{
    Bitmap^ sprite = gcnew Bitmap(imagen);
    Rectangle porcion = Rectangle(indicecolumnas * ancho, 0, ancho, alto);
    canvas->DrawImage(sprite, x, y, porcion, GraphicsUnit::Pixel);
    delete sprite;
}

