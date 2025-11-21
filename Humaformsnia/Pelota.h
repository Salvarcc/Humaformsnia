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
    Random Aleatorio;

    int variable= Aleatorio.Next(-15,-10);
    int variable1 = Aleatorio.Next(-10,-6);

    int variable2 = Aleatorio.Next(6, 8);
    int variable3 = Aleatorio.Next(8, 12);

    this->dano = 1;   
    this->velocidad = 2;

    this->x = canvas->VisibleClipBounds.Width - 150;
    this->y = canvas->VisibleClipBounds.Height / 2;

    
   


    if (numero_pelota % 2 == 0) {
        rebotando_abajo = true;  
        this->y = canvas->VisibleClipBounds.Height / 2-100;
        dx = variable1;
        dy = variable2;


    }

    else {
        rebotando_abajo = false;  
        this->y = canvas->VisibleClipBounds.Height / 2;
        dx = variable;
        dy = variable3;
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
    Random Aleatorio;

   
    float factor = 0.5; 

    x += dx * factor;

    x += Aleatorio.Next(-1, 1); 


    if (rebotando_abajo) {
        y += dy;

        if (y + alto >= canvas->VisibleClipBounds.Height - 40) {
            rebotando_abajo = false;

          
            dy = Aleatorio.Next(6, 9);
        }
    }
    else {
        y -= dy;

   
        if (y <= 150) {
            rebotando_abajo = true;

           
            dy = Aleatorio.Next(6, 9);
        }
    }

    // ANIMACIÓN
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

