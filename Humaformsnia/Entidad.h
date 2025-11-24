#pragma once
#include "conio.h"

using namespace System;
using namespace System::Drawing;

ref class Entidad
{
public:
	Entidad(int x, int y, int ancho, int alto);
	~Entidad();
	int getX();
	int getY();
	int getAncho();
	int getAlto();
	int getDx();
	int getDy();
	int getIndicefilas();
	int getIndicecolumnas();

	void setX(int x);
	void setY(int y);
	void setAncho(int ancho);
	void setAlto(int alto);
	void setDx(int dx);
	void setDy(int dy);
	void setIndicefilas(int indicefilas);
	void setIndicecolumnas(int indicecolumnas);
protected:
	int x, y;
	int ancho, alto;
	int dx,dy;
	int indicefilas, indicecolumnas;
	String^ imagen;
};

Entidad::Entidad(int x, int y, int ancho, int alto)
{
	this->x = x;
	this->y = y;
	this->ancho = ancho;
	this->alto = alto;
	dx = dy = 0;
	indicecolumnas = indicefilas = 0;
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
int Entidad::getDx() {
	return dx;
}
int Entidad::getDy() {
	return dy;
}
int Entidad::getIndicefilas() {
	return indicefilas;
}
int Entidad::getIndicecolumnas() {
	return indicecolumnas;
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
void Entidad::setDx(int dx) {
	this->dx = dx;
}
void Entidad::setDy(int dy) {
	this->dy = dy;
}
void Entidad::setIndicefilas(int indicefilas) {
	this->indicefilas = indicefilas;
}
void Entidad::setIndicecolumnas(int indicecolumnas) {
	this->indicecolumnas = indicecolumnas;
}