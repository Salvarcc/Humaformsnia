#pragma once
#include "Jugador.h"

namespace Humaformsnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			Alien = gcnew Jugador();
			Alien->cambiaimagen("Images//Alien.png");
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		Direccion teclapulsada;
		Jugador^ Alien;
	private: System::Windows::Forms::Timer^ Menu;
	private: System::Windows::Forms::Timer^ Mundo1;
	private: System::Windows::Forms::Timer^ Mundo2;
	private: System::Windows::Forms::Timer^ Mundo3;




		   Graphics^ canvas;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Menu = (gcnew System::Windows::Forms::Timer(this->components));
			this->Mundo1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Mundo2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Mundo3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// Menu
			// 
			this->Menu->Enabled = true;
			this->Menu->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// Mundo1
			// 
			this->Mundo1->Tick += gcnew System::EventHandler(this, &MyForm::Mundo1_Tick);
			// 
			// Mundo2
			// 
			this->Mundo2->Tick += gcnew System::EventHandler(this, &MyForm::Mundo2_Tick);
			// 
			// Mundo3
			// 
			this->Mundo3->Tick += gcnew System::EventHandler(this, &MyForm::Mundo3_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1382, 653);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		teclapulsada = Ninguno;
		if (e->KeyCode == Keys::Up) teclapulsada = Direccion::Arriba;
		if (e->KeyCode == Keys::Down) teclapulsada = Direccion::Abajo;
		if (e->KeyCode == Keys::Left) teclapulsada = Direccion::Izquierda;
		if (e->KeyCode == Keys::Right) teclapulsada = Direccion::Derecha;
		if (e->KeyCode == Keys::W) teclapulsada = Direccion::Arriba;
		if (e->KeyCode == Keys::S) teclapulsada = Direccion::Abajo;
		if (e->KeyCode == Keys::A) teclapulsada = Direccion::Izquierda;
		if (e->KeyCode == Keys::D) teclapulsada = Direccion::Derecha;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
		/*
		Alien->cambiardxdy(teclapulsada);
		Alien->moverimagen(teclapulsada);
		Alien->mostrarimagen(buffer->Graphics);
		*/
		teclapulsada = Direccion::Ninguno;

		buffer->Render(canvas);
		delete buffer;
		delete espacio_para_buffer;
		delete canvas;
	}
	private: System::Void Mundo1_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void Mundo2_Tick(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void Mundo3_Tick(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
