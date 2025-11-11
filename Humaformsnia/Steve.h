#pragma once
#include "Jugador.h" 

class Steve : public Jugador
{
public:
    Steve();

    void mover_imagen(Direccion num) override;

};


Steve::Steve()
{
}

void Steve::mover_imagen(Direccion num)
{
    if (num == Keys::W) {
        dy = -velocidad;
        dx = 0;
        indicefilas = 3;
    }
    else if (num == Keys::S) {
        dy = velocidad;
        dx = 0;
        indicefilas = 0;
    }
    else if (num == Keys::A) {
        dx = -velocidad;
        dy = 0;
        indicefilas = 1;
    }
    else if (num == Keys::D) {
        dx = velocidad;
        dy = 0;
        indicefilas = 2;
    }
}