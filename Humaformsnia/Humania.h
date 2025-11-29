#pragma once

#include "Jugador.h"
#include "RobotEnemigo.h"
#include "Npc.h"
#include "Visual.h"
#include "AlienAliado.h"
#include "Carga.h"
#include "Pelota.h"
#include "Messi.h"
#include "Arbitro.h"
#include "Archivo.h"

class Humania
{
public:
	Humania();
	~Humania();

	bool Colision(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2);
	void Menu(BufferedGraphics^ buffer, BufferedGraphicsContext^ espacio_para_buffer, Graphics^ canvas, Bitmap^ H, Bitmap^ U, Bitmap^ M, Bitmap^ A, Bitmap^ N, Bitmap^ Raya, Bitmap^ I);

private:
	int hablados = 0;
	int aliadados = 0;
	bool m2 = false, m3 = false, m4 = false, m5 = false, m6 = false, m7 = false, m8 = false;
	int y1 = 100, y2 = 100, y3 = 100, y4 = 100, y5 = 100, y6 = 100, y7 = 100, y8 = 100, dy1 = 1, dy2 = 1, dy3 = 1, dy4 = 1, dy5 = 1, dy6 = 1, dy7 = 1, dy8 = 1;

};

Humania::Humania()
{
}

Humania::~Humania()
{
}

bool Humania::Colision(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2)
{

	return x1 < x2 + w2 &&
		x1 + w1 > x2 &&
		y1 < y2 + h2 &&
		y1 + h1 > y2;
}

void Humania::Menu(BufferedGraphics^ buffer, BufferedGraphicsContext^ espacio_para_buffer,Graphics^ canvas, Bitmap^ H, Bitmap^ U, Bitmap^ M, Bitmap^ A, Bitmap^ N, Bitmap^ Raya, Bitmap^ I) {
	hablados = 0;
	aliadados = 0;
	buffer->Graphics->DrawImage(H, 400, y1);
	buffer->Graphics->DrawImage(U, 470, y2);
	buffer->Graphics->DrawImage(M, 550, y3);
	buffer->Graphics->DrawImage(A, 650, y4);
	buffer->Graphics->DrawImage(N, 740, y5);
	buffer->Graphics->DrawImage(Raya, 840, y6);
	buffer->Graphics->DrawImage(I, 900, y7);
	buffer->Graphics->DrawImage(A, 940, y8);




	y1 -= 2 * dy1;
	if (y1 == 90 || m2) {
		y2 -= 2 * dy2;
		m2 = true;
	}
	if (y2 == 90 || m3) {
		y3 -= 2 * dy3;
		m3 = true;
	}
	if (y3 == 90 || m4) {
		y4 -= 2 * dy4;
		m4 = true;
	}
	if (y4 == 90 || m5) {
		y5 -= 2 * dy5;
		m5 = true;
	}
	if (y5 == 90 || m6) {
		y6 -= 2 * dy6;
		m6 = true;
	}
	if (y6 == 90 || m7) {
		y7 -= 2 * dy7;
		m7 = true;
	}
	if (y7 == 90 || m8) {
		y8 -= 2 * dy8;
		m8 = true;
	}


	if (y1 == 70 || y1 == 130)dy1 *= -1;
	if (y2 == 70 || y2 == 130)dy2 *= -1;
	if (y3 == 70 || y3 == 130)dy3 *= -1;
	if (y4 == 70 || y4 == 130)dy4 *= -1;
	if (y5 == 70 || y5 == 130)dy5 *= -1;
	if (y6 == 70 || y6 == 130)dy6 *= -1;
	if (y7 == 70 || y7 == 130)dy7 *= -1;
	if (y8 == 70 || y8 == 130)dy8 *= -1;
}