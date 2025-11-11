#pragma once
#include "Entidad.h"

enum Direccion { Arriba, Abajo, Izquierda, Derecha, Ninguno };

class Jugador : public Entidad
{
public:
	Jugador();
	~Jugador();
	void moverse(Direccion num);
	void moversprite(Direccion num);

	int getVidas();

	void setVidas(int vidas);

protected:
	int vidas;
};

Jugador::Jugador() : Entidad(0,0,0,0)
{
}

Jugador::~Jugador()
{
}
void Jugador::moverse(Direccion num) {
	switch (num)
	{
	case Arriba:	dx = 0; dy = -5; indicecolumnas++; break;
	case Abajo:		dx = 0; dy = 5; indicecolumnas++; break;
	case Izquierda:	dx = -5; dy = 0; indicecolumnas++; break;
	case Derecha:	dx = 5;  dy = 0; indicecolumnas++; break;
	case Ninguno:	dx = 0; dy = 0; break;
	}
}
void Jugador::moversprite(Direccion num) {
	if (num == Arriba) indicefilas = 1;
	if (num == Abajo)	indicefilas = 0;
	if (num == Derecha) indicefilas = 2;
	if (num == Izquierda) indicefilas = 3;

	if (indicecolumnas > 3) indicecolumnas = 0;
	x += dx;
	y += dy;
}

int Jugador::getVidas() {
	return vidas;
}

void Jugador::setVidas(int vidas) {
	this->vidas = vidas;
}
