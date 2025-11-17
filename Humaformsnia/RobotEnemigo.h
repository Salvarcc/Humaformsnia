#pragma once
#include "Enemigo.h"

ref class Robot : public Enemigo
{
private:
    bool abajo;

public:

    Robot(int x, int y);

    void cambiar_imagen(String^ nombre_archivo) override;
    void mover(Graphics^ canvas) override;
    void mostrar(Graphics^ canvas) override;


};

Robot::Robot(int x, int y) :Enemigo()
{

    this->dano = 1;
    this->velocidad = 2;
    this->x = x;
    this->y = y;
    dx = 0;
    dy = 8;
    indicecolumnas = 0;
    abajo = true;

}


void Robot::cambiar_imagen(String^ nombre_archivo)
{
    imagen = nombre_archivo;
    Bitmap^ sprite = gcnew Bitmap(imagen);
    ancho = sprite->Width / 8;
    alto = sprite->Height;
    delete sprite;
}

void Robot::mover(Graphics^ canvas)
{
    if (abajo)
    {
        y += dy;
        indicecolumnas++;
        if (indicecolumnas > 3) indicecolumnas = 0;
        if (y + alto >= canvas->VisibleClipBounds.Bottom) abajo = false;
    }
    else
    {
        y -= dy;
        indicecolumnas++;
        if (indicecolumnas < 4 || indicecolumnas > 7) indicecolumnas = 4;
        if (y <= 0) abajo = true;
    }
}
void Robot::mostrar(Graphics^ canvas)
{
    Bitmap^ sprite = gcnew Bitmap(imagen);
    Rectangle cuadro = Rectangle(indicecolumnas * ancho, 0, ancho, alto);
    Rectangle destino = Rectangle(x, y, ancho, alto);
    canvas->DrawImage(sprite, destino, cuadro, GraphicsUnit::Pixel);
    delete sprite;
}


//// InitializeComponent();
//			// ______AQUI ES LA LISTA _____
//robots = gcnew List<Robot^>();
//// _____________________________
//
//// DECLARAMOS EL BUFFER_________;)
//g = this->CreateGraphics();
//contexto = BufferedGraphicsManager::Current;
//buffer = contexto->Allocate(g, this->ClientRectangle);
////___________________________NO se puede usar vector en clases 
//// especiales (ref ), tampoco s epuede usar el push back normal
//// nativo de listas ;



// declaracion de variables en el form 
//______vector de los robot __________
//List<Robot^>^ robots;
////-----------------------
//
////___- Buffer__________
//BufferedGraphicsContext^ contexto;
//BufferedGraphics^ buffer;
//Graphics^ g;
////_____________________



// dentro del timer del mundo 1 

//private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
//
//    int espacio = this->ClientSize.Width / 7;
//
//    for (int i = 0; i < 6; i++) {
//        int x = espacio * (i + 1) - 50;
//
//
//        int y;
//        if (i % 2 == 0)
//            y = 0;
//        else
//            y = 500;
//
//        Robot^ nuevo = gcnew Robot(x, y);
//        nuevo->cambiar_imagen("images//Enemigo.png");
//        robots->Add(nuevo);
//    }
//
//    timer1->Interval = 50;
//    timer1->Enabled = true;
//}



// dentro del timer del mundo 1 

//private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
//
//
//
//    if (intervalo % 2 == 0) {
//        Graphics^ canvas = buffer->Graphics;
//        canvas->Clear(Color::White);
//
//        for (int i = 0; i < robots->Count; i++) {
//            robots[i]->mover(canvas);
//            robots[i]->mostrar(canvas);
//        }
//    }
//
//    buffer->Render(g);
//
//    intervalo++;
//}
//    };