#pragma once
using namespace System;
using namespace System::Drawing;


ref class Carga
{
private:
	int x, y;
	int xt, yt;
	int W, H;
	int indice_filas, indice_columnas;
	String^ imagen;
public:
	Carga();
	~Carga();
	void cambia_imagen(String^ nombre_archivo);
	void cambia_tecla(String^ nombre_archivo);
	void cambia_nave(String^ nombre_archivo);
	void cambia_alieninstrucciones(String^ nombre_archivo);
	void mostrar_imagen(Graphics^ canvas);
	void mostrar_tecla(Graphics^ canvas);
	void mostrar_alieninstrucciones(Graphics^ canvas);
	void mostrar_nave(Graphics^ canvas);

	void mover_imagen(int porcentaje);
	void mover_tecla(int tecla);
	void mover_teclaD(int tecla);
	void mover_nave(int tecla);

	void mover_alieninstrucciones(int tecla);

	//metodos de acceso
	void setX(int valor);
	void setY(int valor);
	void setW(int valor);
	void setH(int valor);
	int getX();
	int getY();
	int getW();
	int getH();
	void setXt(int xt);

};
//implementacion
Carga::Carga()
{
	x = 500;
	y = 450;
	xt = 800;
	yt = 200;
	indice_columnas = indice_filas = 0;
}
Carga::~Carga() {}


void Carga::cambia_imagen(String^ nombre_archivo)
{
	imagen = nombre_archivo;
	//carga la imagen
	Bitmap^ mi_sprite = gcnew Bitmap(gcnew String(imagen));

	W = mi_sprite->Width / 5;
	H = mi_sprite->Height / 2;

	delete mi_sprite;
}

void Carga::mostrar_imagen(Graphics^ canvas)
{
	//carga la imagen
	Bitmap^ mi_sprite = gcnew Bitmap(gcnew String(imagen));
	//define un rectangulo para cada imagen
	Rectangle cuadro = Rectangle(indice_columnas * W, indice_filas * H, W, H);
	//zoom
	Rectangle zoom = Rectangle(x + 50, y - 80, W * 1.5, H * 1.5);
	//dibuja la imagen
	canvas->DrawImage(mi_sprite, zoom, cuadro, GraphicsUnit::Pixel);
}

void Carga::mover_imagen(int porcentaje)
{


	if (porcentaje < 5)
	{
		indice_filas = 0;

		indice_columnas = porcentaje;



	}
	if (porcentaje > 5)
	{
		indice_filas = 1;

		indice_columnas = porcentaje - 6;


	}


}

void Carga::cambia_tecla(String^ nombre_archivo)
{
	imagen = nombre_archivo;
	//carga la imagen
	Bitmap^ mi_sprite2 = gcnew Bitmap(gcnew String(imagen));

	W = mi_sprite2->Width / 10;
	H = mi_sprite2->Height / 1;

	delete mi_sprite2;
}

void Carga::cambia_nave(String^ nombre_archivo)
{

	imagen = nombre_archivo;
	//carga la imagen
	Bitmap^ mi_sprite3 = gcnew Bitmap(gcnew String(imagen));

	W = mi_sprite3->Width / 11;
	H = mi_sprite3->Height / 1;

	delete mi_sprite3;
}


void Carga::mostrar_tecla(Graphics^ canvas)
{
	//carga la imagen
	Bitmap^ mi_sprite2 = gcnew Bitmap(gcnew String(imagen));
	//define un rectangulo para cada imagen
	Rectangle cuadro = Rectangle(indice_columnas * W, indice_filas * H, W, H);
	//zoom
	Rectangle zoom = Rectangle(xt - 100, yt, W, H);
	//dibuja la imagen
	canvas->DrawImage(mi_sprite2, zoom, cuadro, GraphicsUnit::Pixel);
}

void Carga::mover_tecla(int tecla)
{

	indice_filas = 0;


	if (tecla == 1)
		indice_columnas = 5;
	if (tecla == 2)
		indice_columnas = 6;
	if (tecla == 3)
		indice_columnas = 7;
	if (tecla == 4)
		indice_columnas = 8;
	if (tecla == 5)
		indice_columnas = 9;

}

void Carga::mover_teclaD(int tecla)
{

	indice_filas = 0;


	if (tecla == 1)
		indice_columnas = 0;
	if (tecla == 2)
		indice_columnas = 1;
	if (tecla == 3)
		indice_columnas = 2;
	if (tecla == 4)
		indice_columnas = 3;
	if (tecla == 5)
		indice_columnas = 4;
}

void Carga::mover_nave(int tecla)
{
	indice_filas = 0;

	indice_columnas = tecla - 1;

	xt += 50;

}

//-------------------------------------------

void Carga::cambia_alieninstrucciones(String^ nombre_archivo)
{
	imagen = nombre_archivo;
	Bitmap^ mi_sprite = gcnew Bitmap(gcnew String(imagen));

	W = mi_sprite->Width / 4;
	H = mi_sprite->Height / 4;

	delete mi_sprite;
}


void Carga::mostrar_alieninstrucciones(Graphics^ canvas)
{
	//carga la imagen
	Bitmap^ mi_sprite2 = gcnew Bitmap(gcnew String(imagen));
	//define un rectangulo para cada imagen
	Rectangle cuadro = Rectangle(indice_columnas * W, indice_filas * H, W, H);
	//zoom
	Rectangle zoom = Rectangle(xt - 600, yt, W * 4, H * 4);
	//dibuja la imagen
	canvas->DrawImage(mi_sprite2, zoom, cuadro, GraphicsUnit::Pixel);
}

void Carga::mostrar_nave(Graphics^ canvas)
{
	//carga la imagen
	Bitmap^ mi_sprite3 = gcnew Bitmap(gcnew String(imagen));
	//define un rectangulo para cada imagen
	Rectangle cuadro = Rectangle(indice_columnas * W, indice_filas * H, W, H);
	//zoom
	Rectangle zoom = Rectangle(xt - 800, yt - 50, W * 2, H * 2);
	//dibuja la imagen
	canvas->DrawImage(mi_sprite3, zoom, cuadro, GraphicsUnit::Pixel);
}

void Carga::mover_alieninstrucciones(int tecla)
{

	indice_columnas = 0;


	if (tecla == 1)
		indice_filas = 1;
	if (tecla == 2)
		indice_filas = 0;
	if (tecla == 3)
		indice_filas = 1;
	if (tecla == 4)
		indice_filas = 2;
	if (tecla == 5)
		indice_filas = 3;

}


void Carga::setX(int valor) { x = valor; }
void Carga::setY(int valor) { y = valor; }
void Carga::setW(int valor) { W = valor; }
void Carga::setH(int valor) { H = valor; }
int  Carga::getX() { return x; }
int  Carga::getY() { return y; }
int  Carga::getW() { return W; }
int  Carga::getH() { return H; }

void Carga::setXt(int xt)
{
	this->xt = xt;
}