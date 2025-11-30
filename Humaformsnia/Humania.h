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
	void Mundo1(BufferedGraphics^ buffer, BufferedGraphicsContext^ espacio_para_buffer, Graphics^ canvas, bool& portalaso1, bool& npchabla, bool& muerto, Jugador^ Alien, Visual^ Verde, Visual^ Amarillo, Visual^ Rojo, Visual^ Portal1, NPC^ Marciano1, AlienAliado^ aliado, Direccion teclapulsada, int% Mundo, int% nivel_actual, int% porcentajes, int% xcontrol, int% navecontrol, int% tecla, int% NPCH);
	void Mundo2(BufferedGraphics^ buffer, BufferedGraphicsContext^ espacio_para_buffer, Graphics^ canvas, bool& portalaso2, bool& npchabla, bool& muerto, Jugador^ Alien, Visual^ Verde, Visual^ Amarillo, Visual^ Rojo, Visual^ Portal2, Visual^ Portal3, NPC^ Marciano2, Arbitro^ arbitro, Direccion teclapulsada, int% Mundo, int% nivel_actual, int% NPCH, Messi^ messi, bool% logro7, bool% pelotas_detenidas);
	void Mundo3(BufferedGraphics^ buffer, BufferedGraphicsContext^ espacio_para_buffer, Graphics^ canvas, Visual^ Brillo, bool% final, Jugador^ Steve, Jugador^ Minipekka, Direccion teclapulsada, int% Mundo, int% nivel_actual, bool% logro1, bool& portalaso3, bool% malder1,bool%malaba1, bool%malarr1,bool%malizq1, bool%malder2,bool%malaba2, bool%malarr2, bool%malizq2);

	int getarchivo() {
		return archivo;
	}

private:
	int hablados = 0;
	int aliadados = 0;
	bool m2 = false, m3 = false, m4 = false, m5 = false, m6 = false, m7 = false, m8 = false;
	int y1 = 100, y2 = 100, y3 = 100, y4 = 100, y5 = 100, y6 = 100, y7 = 100, y8 = 100, dy1 = 1, dy2 = 1, dy3 = 1, dy4 = 1, dy5 = 1, dy6 = 1, dy7 = 1, dy8 = 1;
	int contador = 0;
	int archivo = 0;
	
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

void Humania::Menu(BufferedGraphics^ buffer, BufferedGraphicsContext^ espacio_para_buffer, Graphics^ canvas, Bitmap^ H, Bitmap^ U, Bitmap^ M, Bitmap^ A, Bitmap^ N, Bitmap^ Raya, Bitmap^ I) {
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

void Humania::Mundo1(BufferedGraphics^ buffer, BufferedGraphicsContext^ espacio_para_buffer, Graphics^ canvas, bool& portalaso1, bool& npchabla, bool& muerto, Jugador^ Alien, Visual^ Verde, Visual^ Amarillo, Visual^ Rojo, Visual^ Portal1, NPC^ Marciano1, AlienAliado^ aliado, Direccion teclapulsada, int% Mundo, int% nivel_actual, int% porcentajes, int% xcontrol, int% navecontrol, int% tecla, int% NPCH) {
	Mundo = 1;
	bool normal = true;
	nivel_actual = 1;

	Alien->cambiardxdy(teclapulsada);
	Alien->moverimagen(teclapulsada);
	Alien->mostrarimagen(buffer->Graphics);
	/*
	if (pausita) {
		paucha = true;

		this->Pausa->Enabled = true;
	}
	pausita = false;
	*/

	if (Alien->getVidas() == 3) {
		Verde->mostrarimagen(buffer->Graphics);
		if (contador % 2 == 0)Verde->animacion();
	}
	if (Alien->getVidas() == 2) {
		Amarillo->mostrarimagen(buffer->Graphics);
		if (contador % 2 == 0)Amarillo->animacion();
	}
	if (Alien->getVidas() == 1) {
		Rojo->mostrarimagen(buffer->Graphics);
		if (contador % 2 == 0)Rojo->animacion();
	}
	Portal1->mostrarimagen(buffer->Graphics);
	Portal1->animacion();

	if (Colision(
		Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, Portal1->getX() - 50, Portal1->getY() - 50, Portal1->getAncho() - 70, Portal1->getAlto() - 50))
	{
		portalaso1 = true;

		//GuardarTodo();
		//RespuestaUno->Enabled = true;
		//Mundo1->Enabled = false;

		porcentajes = 1;
		tecla = 1;
		navecontrol = 0;
		xcontrol = 0;
		Alien->setX(50);
		Alien->setY(250);
		Alien->setVidas(3);
		archivo = 0;
	}
	Marciano1->mostrarimagen(buffer->Graphics);

	if (contador % 2 == 0)Marciano1->animacion();
	/*
	for (int i = 0; i < robots->Count; i++) {

		robots[i]->mover(buffer->Graphics);

		if (normal) {

			robots[i]->mostrar(buffer->Graphics);


		}
		else {
			if (contador % 2 == 0) {



				robots[i]->mostrar(buffer->Graphics);


			}

		}





		if (Colision(
			Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, robots[i]->getX() - 50, robots[i]->getY() - 50, robots[i]->getAncho() - 70, robots[i]->getAlto() - 50))
		{

			Alien->setX(30);
			Alien->setY(250);
			Alien->setVidas(Alien->getVidas() - 1);
		}

		if (Colision(Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30,
			aliado->getX() - 50, aliado->getY() - 50, aliado->getAncho() - 70, aliado->getAlto() - 50))
		{

			aliado->Activo();
			robots[i]->setDy(3);
			aliadados++;

		}


	}





	*/

	aliado->mover(buffer->Graphics);
	aliado->mostrar(buffer->Graphics);

	if (Colision(Alien->getX() - 30, Alien->getY() - 20, Alien->getAncho() - 60, Alien->getAlto() - 40, Marciano1->getX() - 30, Marciano1->getY() - 20, Marciano1->getAncho() - 60, Marciano1->getAlto() - 40)) {
		Alien->setY(Alien->getY() + 50);
		NPCH = 1;

		npchabla = true;
		//this->NPChabla->Enabled = true;
	}

	if (Alien->getVidas() == 0) {
		muerto = true;

		//GameOver->Enabled = true;
		//Mundo1->Enabled = false;

	}

	teclapulsada = Direccion::Ninguno;



	contador++;
	archivo++;
}

void Humania::Mundo2(BufferedGraphics^ buffer, BufferedGraphicsContext^ espacio_para_buffer, Graphics^ canvas, bool& portalaso2, bool& npchabla, bool& muerto, Jugador^ Alien, Visual^ Verde, Visual^ Amarillo, Visual^ Rojo, Visual^ Portal2, Visual^ Portal3, NPC^ Marciano2, Arbitro^ arbitro, Direccion teclapulsada, int% Mundo, int% nivel_actual, int% NPCH, Messi^ messi, bool% logro7, bool% pelotas_detenidas) {
	Mundo = 2;

	nivel_actual = 2;


	arbitro->setY(158);
	/*
	if (!pelotas_detenidas) {
		indice_pelota++;
		if (indice_pelota >= intervalo_creacion) {
			Pelota^ nueva = gcnew Pelota(buffer->Graphics, contador_pelotas);
			nueva->cambiar_imagen("Images//PELOTA.png");
			pelotas->Add(nueva);
			indice_pelota = 0;
			contador_pelotas++;
		}
	}
	*/
	Portal2->mostrarimagen(buffer->Graphics);
	if (contador % 3 == 0)Portal2->animacion();
	Portal3->mostrarimagen(buffer->Graphics);
	if (contador % 3 == 0)Portal3->animacion();
	messi->mostrar(buffer->Graphics);
	if (contador % 2 == 0)messi->mover(buffer->Graphics);

	if (Colision(
		Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, messi->getX() - 50, messi->getY() - 50, messi->getAncho() - 70, messi->getAlto() - 50))
	{

		logro7 = true;
		Alien->setX(30);
		Alien->setY(250);
		Alien->setVidas(Alien->getVidas() - 1);
	}


	Alien->cambiardxdy(teclapulsada);
	Alien->moverimagen(teclapulsada);
	Alien->mostrarimagen(buffer->Graphics);

	/*
	if (pausita) {
		this->Pausa->Enabled = true;
	}
	pausita = false;
	*/
	if (Alien->getVidas() == 3) {
		Verde->mostrarimagen(buffer->Graphics);
		if (contador % 2 == 0) Verde->animacion();
	}
	if (Alien->getVidas() == 2) {
		Amarillo->mostrarimagen(buffer->Graphics);
		if (contador % 2 == 0) Amarillo->animacion();
	}
	if (Alien->getVidas() == 1) {
		Rojo->mostrarimagen(buffer->Graphics);
		if (contador % 2 == 0) Rojo->animacion();
	}

	Marciano2->mostrarimagen(buffer->Graphics);
	if (contador % 2 == 0)Marciano2->animacion();

	if (Colision(Alien->getX() - 30, Alien->getY() - 20, Alien->getAncho() - 60, Alien->getAlto() - 40, Marciano2->getX() - 30, Marciano2->getY() - 20, Marciano2->getAncho() - 60, Marciano2->getAlto() - 40)) {
		Alien->setY(Alien->getY() + 50);
		NPCH = 2;
		npchabla = true;

		//this->NPChabla->Enabled = true;
	}

	if (Colision(Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, arbitro->getX() - 50, arbitro->getY() - 50, arbitro->getAncho() - 70, arbitro->getAlto() - 50))
	{
		arbitro->Activo();
		pelotas_detenidas = true;
		aliadados++;
	}
	/*
	// mover pelotas
	for (int i = 0; i < pelotas->Count; i++) {


		if (contador % 2 == 0)
		{
			if (!pelotas_detenidas) {
				pelotas[i]->mover(buffer->Graphics);
			}
		}
		// mostramos la pelota
		pelotas[i]->mostrar(buffer->Graphics);

		//colision con el arbitro
		if (Colision(
			Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, pelotas[i]->getX() - 50, pelotas[i]->getY() - 50, pelotas[i]->getAncho() - 70, pelotas[i]->getAlto() - 50))
		{
			Alien->setX(100);
			Alien->setY(300);
			Alien->setVidas(Alien->getVidas() - 1);

		}



		//elimna las pelotas que ya pasaon del limite
		if (!pelotas_detenidas && pelotas[i]->getX() + pelotas[i]->getAncho() < 300) {
			pelotas->RemoveAt(i);
			i--;
		}
	}
	*/

	arbitro->mover(buffer->Graphics);
	arbitro->mostrar(buffer->Graphics);


	if (Colision(
		Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, Portal2->getX() - 50, Portal2->getY() - 50, Portal2->getAncho() - 70, Portal2->getAlto() - 50))
	{


		Alien->setX(50);
		Alien->setY(250);
		Alien->setVidas(3);

		portalaso2 = true;

		//GuardarTodo();
		//RespuestaDos->Enabled = true;
		//Mundo2->Enabled = false;
		archivo = 0;
	}

	if (Colision(
		Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, Portal3->getX() - 50, Portal3->getY() - 50, Portal3->getAncho() - 70, Portal3->getAlto() - 50))
	{


		Alien->setX(50);
		Alien->setY(250);
		Alien->setVidas(3);

		portalaso2 = true;

		//GuardarTodo();
		//RespuestaDos->Enabled = true;
		//Mundo2->Enabled = false;
		archivo = 0;
	}
	teclapulsada = Direccion::Ninguno;
	if (Alien->getVidas() == 0) {
		muerto = true;
		/*
		GameOver->Enabled = true;
		Mundo2->Enabled = false;
		*/
	}
	contador++;
	archivo++;
}

void Humania::Mundo3(BufferedGraphics^ buffer, BufferedGraphicsContext^ espacio_para_buffer, Graphics^ canvas, Visual^ Brillo, bool% final, Jugador^ Steve, Jugador^ Minipekka, Direccion teclapulsada, int% Mundo, int% nivel_actual, bool% logro1, bool& portalaso3, bool% malder1, bool% malaba1, bool% malarr1, bool% malizq1, bool% malder2, bool% malaba2, bool% malarr2, bool% malizq2) {
	Mundo = 3;
	nivel_actual = 3;

	if (final)teclapulsada = Direccion::Abajo1;
	Steve->cambiardxdy(teclapulsada);
	Steve->moverimagen(teclapulsada);
	Steve->mostrarimagen(buffer->Graphics);
	if (final)teclapulsada = Direccion::Abajo2;
	Minipekka->cambiardxdyD(teclapulsada);
	Minipekka->moverimagenD(teclapulsada);
	Minipekka->mostrarimagen(buffer->Graphics);
	/*
	if (pausita) {
		this->Pausa->Enabled = true;
	}
	pausita = false;
	*/
	if (final)Brillo->mostrarimagen(buffer->Graphics);

	malder1 = malarr1 = malaba1 = malizq1 = malder2 = malarr2 = malaba2 = malizq2 = false;

	
	if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50) && !final) {
		Steve->setIndicec(0);
		Minipekka->setIndicec(0);
		Steve->setIndicef(0);
		Minipekka->setIndicef(0);
		Steve->setX(570);
		Steve->setY((Steve->getY() + Minipekka->getY()) / 2);
		Minipekka->setX(Steve->getX() + 48);
		Minipekka->setY(Steve->getY());
		logro1 = true;
		final = true;
	}
	if (final) {
		Mundo = 4;

		portalaso3 = true;

		//GuardarTodo();
		//this->Mundo3->Enabled = false;
		//this->RespuestaTres->Enabled = true;

	}

	if (!final)teclapulsada = Direccion::Ninguno;

	buffer->Render(canvas);
	contador++;
}