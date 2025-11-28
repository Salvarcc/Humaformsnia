#pragma once
#include "Entidad.h"

enum Direccion { Arriba1, Abajo1, Izquierda1, Derecha1, Ninguno, Arriba2, Abajo2, Izquierda2, Derecha2
};

ref class Jugador : public Entidad
{
public:
	Jugador();
	~Jugador();
	void cambiardxdy(Direccion num);
	void cambiardxdyD(Direccion num);
	void cambiardxdy_2(Direccion num);
	void moverimagen(Direccion num);
	void moverimagenD(Direccion num);
	void cambiaimagen(String^ archivo);
	void mostrarimagen(Graphics^ canvas);

	int getVidas();
	int getVelocidad();

	void setVidas(int vidas);
	void setVelocidad(int velocidad);
	void setIndicec(int indicec);
	void setIndicef(int indicef);


protected:
	int vidas;
	int velocidad;
};

Jugador::Jugador() : Entidad(0, 0, 0, 0)
{
	x = 30;
	y = 250;
	vidas = 3;
}

Jugador::~Jugador()
{
}
void Jugador::cambiardxdy(Direccion num) {
	switch (num)
	{
	case Arriba1:
		if (y > 0)
		{
			dx = 0; dy = -5; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break
			;
	case Abajo1:

		if (y < 620)
		{
			dx = 0; dy = 5; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break;

	case Izquierda1:
		if (x > 0) {
			dx = -5; dy = 0; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break;


	case Derecha1:
		if (x > 1350) {
			dx = 5;  dy = 0; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break;



	case Ninguno:
		dx = 0; dy = 0; break;
	}
}
void Jugador::cambiardxdyD(Direccion num) {
	switch (num)
	{
	case Arriba2:
		if (y > 0)
		{
			dx = 0; dy = -5; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break
			;
	case Abajo2:

		if (y < 620)
		{
			dx = 0; dy = 5; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break;

	case Izquierda2:
		if (x > 0) {
			dx = -5; dy = 0; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break;


	case Derecha2:
		if (x > 1350) {
			dx = 5;  dy = 0; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break;



	case Ninguno:
		dx = 0; dy = 0; break;
	}
}
void Jugador::cambiardxdy_2(Direccion num)
{


	switch (num)
	{
	case Arriba1:
		if (y > 0)
		{
			dx = 0; dy = -5; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break
			;
	case Abajo1:

		if (y < 620)
		{
			dx = 0; dy = 5; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break;

	case Izquierda1:
		if (x > 0) {
			dx = -5; dy = 0; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break;


	case Derecha1:
		if (x > 1350) {
			dx = 5;  dy = 0; indicecolumnas++; break;
		}
		else
			dx = 0; dy = 0; break;



	case Ninguno:
		dx = 0; dy = 0; break;
	}

}
void Jugador::moverimagen(Direccion num)
{
	if (num == Arriba1) indicefilas = 1;
	if (num == Abajo1)	indicefilas = 0;
	if (num == Derecha1) indicefilas = 2;
	if (num == Izquierda1) indicefilas = 3;

	if (indicecolumnas > 3) indicecolumnas = 0;
	x += dx;
	y += dy;
}
void Jugador::moverimagenD(Direccion num)
{
	if (num == Arriba2) indicefilas = 1;
	if (num == Abajo2)	indicefilas = 0;
	if (num == Derecha2) indicefilas = 2;
	if (num == Izquierda2) indicefilas = 3;

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
void Jugador::setIndicec(int indicec) {
	this->indicecolumnas = indicec;
}
void Jugador::setIndicef(int indicef) {
	this->indicefilas = indicef;
}
