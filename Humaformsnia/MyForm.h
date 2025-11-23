	#pragma once
	#include "Jugador.h"
	#include "RobotEnemigo.h"

#include "AlienAliado.h"
	#include <Vector>
	namespace Humaformsnia {

	
		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		using namespace System::Collections::Generic;

		public ref class Clase_Colisiones abstract sealed
		{
		public:
			static bool ColisionUsando_InsertectsWith(int obj1X, int obj1Y, int obj1A, int obj1L, int obj2X, int obj2Y, int obj2A, int obj2L)
			{
				System::Drawing::Rectangle rectObj1 = System::Drawing::Rectangle(obj1X, obj1Y, obj1A, obj1L);
				System::Drawing::Rectangle rectObj2 = System::Drawing::Rectangle(obj2X, obj2Y, obj2A, obj2L);
				return rectObj1.IntersectsWith(rectObj2);
			}
		};

		/// <summary>
		/// Summary for MyForm
		/// </summary>
		public ref class MyForm : public System::Windows::Forms::Form
		{
		public:
			MyForm(void)
			{
				InitializeComponent();

				Alien = gcnew Jugador();
				Alien->cambiaimagen("Images//Alien.png");


				aliado = gcnew AlienAliado();
				aliado->cambiar_imagen("images//Agualien.png");

				fondomenu = gcnew Bitmap(gcnew String("images//FondoMenus1.jpg"));

				robots = gcnew List<Robot^>();

				// ________ creacion de los robot  ________

				int espacio = this->ClientSize.Width / 7;

				for (int i = 0; i < 6; i++) {

					int x = espacio * (i + 1) - 10;

					int y = (i % 2 == 0) ? 0 : 500;

					Robot^ nuevo = gcnew Robot(x, y);
					nuevo->cambiar_imagen("images//Enemigo.png");
					robots->Add(nuevo);
				}
				//_________________________________________________
			// aqui activamos el mundo 1 que nos toca 
				Mundo1->Interval = 50;
				Mundo1->Enabled = true;

				// el tema del buff
				g = this->CreateGraphics();
				contexto = BufferedGraphicsManager::Current;
				buffer = contexto->Allocate(g, this->ClientRectangle);
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
			AlienAliado^ aliado;

			//__vector de los robot 
			List<Robot^>^ robots; //
			//---------------------

			//___- Buffer__________
			BufferedGraphicsContext^ contexto;
			BufferedGraphics^ buffer;
			Graphics^ g;
			//_____________________
		
			   Bitmap^ fondomenu;
			   Graphics^ canvas;

			   int intervalo = 0;
		private: System::Windows::Forms::Timer^ Menu;
		private: System::Windows::Forms::Timer^ Mundo1;
		private: System::Windows::Forms::Timer^ Mundo2;
		private: System::Windows::Forms::Timer^ Mundo3;




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
				this->ClientSize = System::Drawing::Size(2100, 1050);
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
				this->ResumeLayout(false);

			}
	#pragma endregion
		
			bool Colision(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2)
			{
				
				return x1 < x2 + w2 &&
					x1 + w1 > x2 &&
					y1 < y2 + h2 &&
					y1 + h1 > y2;
			}
			


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



		


		}
		private: System::Void Mundo1_Tick(System::Object^ sender, System::EventArgs^ e) {


			Graphics^ canvas = buffer->Graphics;
			canvas->Clear(Color::White);

			
			Alien->cambiardxdy(teclapulsada);
			Alien->moverimagen(teclapulsada);
			Alien->mostrarimagen(canvas);

			

			
			for (int i = 0; i < robots->Count; i++) {
				robots[i]->mover(canvas);
				robots[i]->mostrar(canvas);

				if (Colision(
					Alien->getX()-50, Alien->getY()-50, Alien->getAncho()-80, Alien->getAlto()-30,
					robots[i]->getX()-50, robots[i]->getY()-50, robots[i]->getAncho()-70, robots[i]->getAlto()-50))
				{
					
					Alien->setX(30);
					Alien->setY(350);
				}
			}
			aliado->mover(canvas);
			



			
			teclapulsada = Direccion::Ninguno;

			buffer->Render(g);

						
		}
		private: System::Void Mundo2_Tick(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void Mundo3_Tick(System::Object^ sender, System::EventArgs^ e) {
		}
	};
	}
