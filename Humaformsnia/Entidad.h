#pragma once
#include "conio.h"
#include <cstdlib> 

using namespace System;
using namespace System::Drawing;

class Entidad
{
public:
	Entidad(int x, int y, int ancho, int alto, int velocidad);
	~Entidad();

	virtual void dibujar(Graphics^ canvas) = 0;
	virtual void mover() = 0;
	virtual void borrar(Graphics^ canvas) = 0;

	int getX();
	int getY();
	int getAncho();
	int getAlto();
	int getVelocidad();

	void setX(int x);
	void setY(int y);
	void setAncho(int ancho);
	void setAlto(int alto);
	void setVelocidad(int velocidad);
protected:
	int x, y;
	int ancho, alto;
	int velocidad;
};

Entidad::Entidad(int x, int y, int ancho, int alto, int velocidad)
{
	this->x = x;
	this->y = y;
	this->ancho = ancho;
	this->alto = alto;
	this->velocidad = velocidad;
}

Entidad::~Entidad()
{
}
int Entidad::getX() {
	return x;
}
int Entidad::getY() {
	return y;
}
int Entidad::getAncho() {
	return ancho;
}
int Entidad::getAlto() {
	return alto;
}
int Entidad::getVelocidad() {
	return velocidad;
}

void Entidad::setX(int x) {
	this->x = x;
}
void Entidad::setY(int y) {
	this->y = y;
}
void Entidad::setAncho(int ancho) {
	this->ancho = ancho;
}
void Entidad::setAlto(int alto) {
	this->alto = alto;
}
void Entidad::setVelocidad(int velocidad) {
	this->velocidad = velocidad;
}