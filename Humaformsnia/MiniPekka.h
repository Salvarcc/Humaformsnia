#pragma once
#include "Jugador.h" 

ref class MiniPekka : public Jugador
{
public:
    MiniPekka();

    void mover_imagen(Direccion num) override;
private:
   
};


MiniPekka::MiniPekka()
{
}

void MiniPekka::mover_imagen(Direccion num)
{
    if (num == Arriba) {
        dy = -velocidad;
        dx = 0;
        indicefilas = 3;
    }
    else if (num ==Abajo) {
        dy = velocidad;
        dx = 0;
        indicefilas = 0;
    }
    else if (num == Izquierda) {
        dx = -velocidad;
        dy = 0;
        indicefilas = 1;
    }
    else if (num == Derecha) {
        dx = velocidad;
        dy = 0;
        indicefilas = 2;
    }
}