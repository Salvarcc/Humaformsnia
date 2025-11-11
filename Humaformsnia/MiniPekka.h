#pragma once
#include "Jugador.h" 

class MiniPekka : public Jugador
{
public:
    MiniPekka();

    void mover_imagen(Direccion num) override;

};


MiniPekka::MiniPekka()
{
}

void MiniPekka::mover_imagen(Direccion num)
{
    if (num == Keys::Up) {
        dy = -velocidad;
        dx = 0;
        indicefilas = 3;
    }
    else if (num == Keys::Down) {
        dy = velocidad;
        dx = 0;
        indicefilas = 0;
    }
    else if (num == Keys::Left) {
        dx = -velocidad;
        dy = 0;
        indicefilas = 1;
    }
    else if (num == Keys::Right) {
        dx = velocidad;
        dy = 0;
        indicefilas = 2;
    }
}