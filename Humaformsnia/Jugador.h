#pragma once
#include "Entidad.h"

enum Direccion { Arriba, Abajo, Izquierda, Derecha, Ninguno };

ref class Jugador : public Entidad
{
public:
	Jugador();
	~Jugador();
	void cambiardxdy(Direccion num);
    void moverimagen(Direccion num) ;
	void cambiaimagen(String^ archivo);
	void mostrarimagen(Graphics^ canvas);

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
void Jugador::cambiardxdy(Direccion num) {
	switch (num)
	{
	case Arriba:	dx = 0; dy = -5; indicecolumnas++; break;
	case Abajo:		dx = 0; dy = 5; indicecolumnas++; break;
	case Izquierda:	dx = -5; dy = 0; indicecolumnas++; break;
	case Derecha:	dx = 5;  dy = 0; indicecolumnas++; break;
	case Ninguno:	dx = 0; dy = 0; break;
	}
}
void Jugador::moverimagen(Direccion num)
{
	if (num == Arriba) indicefilas = 1;
	if (num == Abajo)	indicefilas = 0;
	if (num == Derecha) indicefilas = 2;
	if (num == Izquierda) indicefilas = 3;

	if (indicecolumnas > 3) indicecolumnas = 0;
	x += dx;
	y += dy;
}

void Jugador::cambiaimagen(String^ archivo)
{
	imagen = archivo;
	Bitmap^ mi_sprite = gcnew Bitmap(gcnew String(imagen));

	ancho = mi_sprite->Width / 4;
	alto = mi_sprite->Height / 4;

	delete mi_sprite;
}
void Jugador::mostrarimagen(Graphics^ canvas)
{
	Bitmap^ mi_sprite = gcnew Bitmap(gcnew String(imagen));
	Rectangle cuadro = Rectangle(indicecolumnas * ancho, indicefilas * alto, ancho, alto);
	Rectangle zoom = Rectangle(x, y, ancho, alto);
	canvas->DrawImage(mi_sprite, zoom, cuadro, GraphicsUnit::Pixel);
}

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

