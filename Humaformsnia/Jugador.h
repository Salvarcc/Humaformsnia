#pragma once
#include "Entidad.h"

enum Direccion { Arriba, Abajo, Izquierda, Derecha, Ninguno };

class Jugador : public Entidad
{
public:
	Jugador();
	~Jugador();
	void cambiardx_dy(Direccion num);
	virtual void mover_imagen(Direccion num) = 0;

	int getVidas();
	int getVelocidad();

	void setVidas(int vidas);
	void setVelocidad(int velocidad);

protected:
	int vidas;
	int velocidad;

};

Jugador::Jugador() : Entidad(0,0,0,0)
{
}

Jugador::~Jugador()
{
}
void Jugador::cambiardx_dy(Direccion num) {
	switch (num)
	{
	case Arriba:	dx = 0; dy = -5; indicecolumnas++; break;
	case Abajo:		dx = 0; dy = 5; indicecolumnas++; break;
	case Izquierda:	dx = -5; dy = 0; indicecolumnas++; break;
	case Derecha:	dx = 5;  dy = 0; indicecolumnas++; break;
	case Ninguno:	dx = 0; dy = 0; break;
	}
}
//void Jugador::mover_imagen(Direccion num) {
//	if (num == Arriba) indicefilas = 1;
//	if (num == Abajo)	indicefilas = 0;
//	if (num == Derecha) indicefilas = 2;
//	if (num == Izquierda) indicefilas = 3;
//
//	if (indicecolumnas > 3) indicecolumnas = 0;
//	x += dx;
//	y += dy;
//}


int Jugador::getVidas() {
	return vidas;
}

void Jugador::setVidas(int vidas) {
	this->vidas = vidas;
}


int Jugador::getVelocidad() {
	return velocidad;
}

void Jugador::setVelocidad(int velocidad) {
	this->velocidad = velocidad;
}

