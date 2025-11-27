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
#include <Vector>


namespace Humaformsnia {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Drawing::Imaging;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//ALIEN________________
			Alien = gcnew Jugador();
			Alien->cambiaimagen("Images//Alien.png");
			//_______________________________________
			Minipekka = gcnew Jugador();
			Minipekka->cambiaimagen("Images//MiniPekka.png");
			Minipekka->setX(1300);
			Minipekka->setY(0);
			Steve = gcnew Jugador();
			Steve->cambiaimagen("Images//Steve.png");
			Steve->setX(0);
			Steve->setY(600);

			// CARGA

			AlienInstrucciones = gcnew Carga();
			AlienInstrucciones->cambia_alieninstrucciones("Images//Alien.png");
			SteveInstrucciones = gcnew Carga();
			SteveInstrucciones->cambia_alieninstrucciones("Images//Steve.png");
			MiniPekkaInstrucciones = gcnew Carga();
			MiniPekkaInstrucciones->cambia_alieninstrucciones("Images//MiniPekka.png");

			Cargas = gcnew Carga();
			Cargas->cambia_imagen("Images//SPRITESCARGAS.png");

			Teclas = gcnew Carga();
			Teclas->cambia_tecla("Images//TECLAS.png");

			Nave = gcnew Carga();
			Nave->cambia_nave("Images//NAVEEE.png");



			canvas = this->CreateGraphics();

			// ALIADO__________________________________
			aliado = gcnew AlienAliado();
			aliado->cambiar_imagen("images//Agualien.png");


			arbitro = gcnew Arbitro();
			arbitro->cambiar_imagen("images//Arbitro[1].png");
			//____________________________________________
			Marciano1 = gcnew NPC();
			M1hablando = gcnew NPC();
			Marciano2 = gcnew NPC();
			M2hablando = gcnew NPC();
			Verde = gcnew Visual(12);
			Amarillo = gcnew Visual(12);
			Rojo = gcnew Visual(12);
			Portal1 = gcnew Visual(8);
			Portal2 = gcnew Visual(8);
			Portal3 = gcnew Visual(8);
			Marciano1->cambiaimagen("Images//AlienAmarrillo.png");
			M1hablando->cambiaimagen("Images//alianita2.png");
			Marciano2->cambiaimagen("Images//AlienVerde.png");
			M2hablando->cambiaimagen("Images//AlienVerdeHablando.png");
			Verde->cambiaimagen("Images//Vidaverde2.png");
			Verde->setX(1150);
			Verde->setY(-50);
			Amarillo->cambiaimagen("Images//Vidaamarilla.png");
			Amarillo->setX(1150);
			Amarillo->setY(-50);
			Rojo->cambiaimagen("Images//Vidaroja.png");
			Rojo->setX(1150);
			Rojo->setY(-50);
			Portal1->cambiaimagen("Images//PortalNether4.png");
			Portal1->setX(1250);
			Portal1->setY(300);
			Portal2->cambiaimagen("Images//PortalCielo.png");
			Portal2->setX(1250);
			Portal2->setY(100);
			Portal3->cambiaimagen("Images//PortalCielo.png");
			Portal3->setX(1250);
			Portal3->setY(500);
			M1hablando->setX(800);
			M1hablando->setY(100);
			Brillo = gcnew Visual(1);
			Brillo->cambiaimagen("Images//Brillo.png");
			Brillo->setX(600);
			Brillo->setY(650);
			fondomenu = gcnew Bitmap(gcnew String("images//FondoMenus.jpg"));
			fondomundo1 = gcnew Bitmap(gcnew String("images//Mundo1.jpg"));
			fondomundo3 = gcnew Bitmap(gcnew String("images//Mundo3.png"));

			H = gcnew Bitmap(gcnew String("images//H.png"));
			U = gcnew Bitmap(gcnew String("images//U.png"));
			M = gcnew Bitmap(gcnew String("images//M.png"));
			A = gcnew Bitmap(gcnew String("images//A.png"));
			N = gcnew Bitmap(gcnew String("images//N.png"));
			Raya = gcnew Bitmap(gcnew String("images//-.png"));
			I = gcnew Bitmap(gcnew String("images//I.png"));
			this->KeyPreview = true;
			//samuel 

			fondologo = gcnew Bitmap(gcnew String("Images//UPC.png"));
			fondomenu1 = gcnew Bitmap(gcnew String("Images//MISASA.png"));

			P = gcnew Bitmap(gcnew String("Images//P.png"));
			R = gcnew Bitmap(gcnew String("Images//R.png"));
			E = gcnew Bitmap(gcnew String("Images//E.png"));
			G = gcnew Bitmap(gcnew String("Images//G.png"));
			Up = gcnew Bitmap(gcnew String("Images//Up.png"));
			Np = gcnew Bitmap(gcnew String("Images//Np.png"));
			T = gcnew Bitmap(gcnew String("Images//T.png"));
			Ap = gcnew Bitmap(gcnew String("Images//Ap.png"));

			I1 = gcnew Bitmap(gcnew String("Images//InstruccionesI.png"));
			N1 = gcnew Bitmap(gcnew String("Images//InstruccionesN.png"));
			S1 = gcnew Bitmap(gcnew String("Images//InstruccionesS.png"));
			T1 = gcnew Bitmap(gcnew String("Images//InstruccionesT.png"));
			R1 = gcnew Bitmap(gcnew String("Images//InstruccionesR.png"));
			U1 = gcnew Bitmap(gcnew String("Images//InstruccionesU.png"));
			C1 = gcnew Bitmap(gcnew String("Images//InstruccionesC.png"));
			C2 = gcnew Bitmap(gcnew String("Images//InstruccionesC.png"));
			I2 = gcnew Bitmap(gcnew String("Images//InstruccionesI.png"));
			O1 = gcnew Bitmap(gcnew String("Images//InstruccionesO.png"));
			N2 = gcnew Bitmap(gcnew String("Images//InstruccionesN.png"));
			E1 = gcnew Bitmap(gcnew String("Images//InstruccionesE.png"));
			S2 = gcnew Bitmap(gcnew String("Images//InstruccionesS.png"));


			// mundo 2




			CERO = gcnew Bitmap(gcnew String("Images//CERO.png"));
			UNO = gcnew Bitmap(gcnew String("Images//UNO.png"));
			DOS = gcnew Bitmap(gcnew String("Images//DOS.png"));
			TRES = gcnew Bitmap(gcnew String("Images//TRES.png"));

			Pregunta1 = gcnew Bitmap(gcnew String("Images//PREGUNTA1.png"));
			Respuesta1 = gcnew Bitmap(gcnew String("Images//RESPUESTA1.png"));
			Pregunta2 = gcnew Bitmap(gcnew String("Images//PREGUNTA2.png"));
			Respuesta2 = gcnew Bitmap(gcnew String("Images//RESPUESTA2.png"));
			Pregunta3 = gcnew Bitmap(gcnew String("Images//PREGUNTA3.png"));
			Respuesta3 = gcnew Bitmap(gcnew String("Images//RESPUESTA3.png"));

			Carga1 = gcnew Bitmap(gcnew String("Images//Carga1.jpeg"));
			Carga2 = gcnew Bitmap(gcnew String("Images//Carga2.jpeg"));
			Carga3 = gcnew Bitmap(gcnew String("Images//Carga3.jpeg"));


			fondopregunta1 = gcnew Bitmap(gcnew String("Images//Fondo1.png"));
			fondopregunta2 = gcnew Bitmap(gcnew String("Images//Fondo2.png"));
			fondopregunta3 = gcnew Bitmap(gcnew String("Images//Fondo3.png"));

			espacio_para_buffer = BufferedGraphicsManager::Current;
			buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);

			control = 1;
			opacidad = 0.0;
			sombra = 0.05;

			this->Opacity = 1.0;
			messi = gcnew Messi(1250, 325);
			messi->cambiar_imagen("images//Messi.png");
			//
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
			//__________creacion de pelotas ___________

			pelotas = gcnew List<Pelota^>();
			indice_pelota = 0;
			intervalo_creacion = 35;
			contador_pelotas = 0;
			fondo_mundo_2 = gcnew Bitmap(gcnew String("Images//mundo_2.jpg"));;

			Mundo2->Interval = 50;
			pelotas_detenidas = false;

			// aqui activamos el mundo 1 que nos toca 
			Mundo1->Interval = 50;

			// el tema del buff
			g = this->CreateGraphics();
			contexto = BufferedGraphicsManager::Current;
			bufferS = contexto->Allocate(g, this->ClientRectangle);

			//game over_________

			fondoGO = gcnew Bitmap(gcnew String("Images//fondo_go1.jpg"));
			fondoGO1 = gcnew Bitmap(gcnew String("images//fondo_go2.jpg"));
			//personaje_GO = gcnew Personaje_go();
			//personaje_GO->cambiar_imagen("Images//mmm.jpg");

			_G = gcnew Bitmap(gcnew String("images//g_game.jpg"));
			_A = gcnew Bitmap(gcnew String("images//a_game.jpg"));
			_M = gcnew Bitmap(gcnew String("images//m_game.jpg"));
			_E_ = gcnew Bitmap(gcnew String("images//e_game_.png"));
			_O = gcnew Bitmap(gcnew String("images//o_game_.png"));
			_V = gcnew Bitmap(gcnew String("images//v_game.jpg"));
			_E1_ = gcnew Bitmap(gcnew String("images//e_game_.png"));
			_R = gcnew Bitmap(gcnew String("images//r_game.jpg"));
			P_go = gcnew Bitmap(gcnew String("images//person_.png"));
			go = gcnew Bitmap(gcnew String("images//person__1.png"));
			continua = gcnew Bitmap(gcnew String("images//continua_1.png"));
			this->KeyPreview = true;
			contadorFondo = 0;

			Logos->Enabled = false;
			CargaUno->Enabled = false;
			CargaDos->Enabled = false;
			CargaTres->Enabled = false;

			InstruccionesUno->Enabled = false;
			InstruccionesDos->Enabled = false;
			Mundo1->Enabled = false;
			PreguntaUno->Enabled = false;
			RespuestaUno->Enabled = false;
			PreguntaDos->Enabled = true;
			RespuestaDos->Enabled = false;
			PreguntaTres->Enabled = false;
			RespuestaTres->Enabled = false;
			Menu->Enabled = false;
			BtnJugar->Visible = false;
			BtnCreditos->Visible = false;
			BtnSalir->Visible = false;

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
		Carga^ AlienInstrucciones;
		Carga^ SteveInstrucciones;
		Carga^ MiniPekkaInstrucciones;
		Carga^ Cargas;
		Carga^ Teclas;
		Carga^ Nave;

		Direccion teclapulsada;
		Jugador^ Alien;
		Jugador^ Steve;
		Jugador^ Minipekka;
		AlienAliado^ aliado;
		NPC^ Marciano1;
		NPC^ M1hablando;
		NPC^ Marciano2;
		NPC^ M2hablando;
		Visual^ Verde;
		Visual^ Amarillo;
		Visual^ Rojo;
		Visual^ Portal1;
		Visual^ Portal2;
		Visual^ Portal3;
		Visual^ Brillo;
		Messi^ messi;

		bool entered = false;
		int NPCH;
		int incremental = 0;
		String^ frase = "He intentado cruzar al otro lado para obtener \nla respuesta,pero no puedo, si quieres llegar al \notro lado debes descubrir el algoritmo de los \nrobots para poder pasar, uno de nuestros \naliados se quedo en la mitad del camino, si \nte acercas a el seguro te ayudara a llegar a la \nrespuesta, suerte viajero.";
		String^ frase2 = "Me alegro ver que has llegado hasta aca, pero \naun debemos cruzar a la segunda respuesta, pero \nese humano conocido como messi no nos deja\n avanzar, intenta atravesar la cancha \nesquivando los balones, el arbitro aliado te \nayudara a llegar al otro lado si te acercas a el, \nsuerte viajero.";

		String^ textillo;
		int grr = 0;
		bool iniciar = false;
		int Botonazo;
		int subida = 0, texto = 0;
		Bitmap^ fondomundo1;
		Bitmap^ fondomundo3;

		Bitmap^ H;
		Bitmap^ U;
		Bitmap^ M;
		Bitmap^ A;
		Bitmap^ N;
		Bitmap^ Raya;
		Bitmap^ I;

		int y1 = 100, y2 = 100, y3 = 100, y4 = 100, y5 = 100, y6 = 100, y7 = 100, y8 = 100, dy1 = 1, dy2 = 1, dy3 = 1, dy4 = 1, dy5 = 1, dy6 = 1, dy7 = 1, dy8 = 1;
		bool m2 = false, m3 = false, m4 = false, m5 = false, m6 = false, m7 = false, m8 = false;
		bool malder1 = false, malaba1 = false, malarr1 = false, malizq1 = false, malder2 = false, malaba2 = false, malarr2 = false, malizq2 = false;
		bool final = false;
		// SAMUEL

		int control = 2;

		// variables pregunta 1

		int Y_P = 10;
		int Y_R = 10;
		int Y_E = 10;
		int Y_G = 10;
		int Y_U = 10;
		int Y_N = 10;
		int Y_T = 10;
		int Y_A = 10;
		int Y_CERO = 10;
		int Y_UNO = 10;
		int Y_DOS = 10;

		int ancho_pregunta = 80;
		int C_P = 1;
		int C_R;
		int C_E;
		int C_G;
		int C_U;
		int C_N;
		int C_T;
		int C_A;
		int C_CERO;
		int C_UNO;
		int C_DOS;

		int X_P1 = 700;
		int Y_P1 = 450;
		int W_P1 = 10;
		int H_P1 = 10;

		// variables nave

		int X_Nave = 0;
		int Y_Nave = 175;



		// mundos 2_____________________

		int indice_pelota;
		int intervalo_creacion;
		int contador_pelotas;
		Bitmap^ fondo_mundo_2;
		//______________________________

		int velocidad = 1;
		int anchooobjetivo_pregunta2 = 1120;
		int altoobjetivo_pregunta2 = 520;

		int anchooobjetivo_pregunta1 = 1280;
		int altoobjetivo_pregunta1 = 720;

		int anchooobjetivor = 1200;
		int altoobjetivor = 400;

		int anchooobjetivorespuesta2 = 1200;
		int altoobjetivorespuesta2 = 400;

		int anchooobjetivo_pregunta3 = 1200;
		int altoobjetivo_pregunta3 = 400;

		// carga1

		int porcentajes = 1;
		int xcontrol = 0;
		int navecontrol = 0;

		int cambio = 0;
		bool escapep1 = false;
		bool escapei1 = false;
		bool escaper1 = false;
		bool escapep2 = false;
		bool escaper2 = false;
		bool escapep3 = false;
		bool escapei2 = false;
		bool escapei2_1 = false;
		bool escapei2_2 = false;

		bool escaper3 = false;

		Bitmap^ go;
		Bitmap^ fondoGO;
		Bitmap^ fondoGO1;
		Bitmap^ _G;
		Bitmap^ _A;
		Bitmap^ _M;
		Bitmap^ _E_;
		Bitmap^ _O;
		Bitmap^ _V;
		Bitmap^ _E1_;
		Bitmap^ _R;
		Bitmap^ P_go;
		Bitmap^ continua;
		bool usarFondo1 = true;
		int contadorFondo = 0;
		int nivel_actual = 0;
		// variables instrucciones

		int Y_I1 = 10;
		int Y_N1 = 10;
		int Y_S1 = 10;
		int Y_T1 = 10;
		int Y_R1 = 10;
		int Y_U1 = 10;
		int Y_C1 = 10;
		int Y_C2 = 10;
		int Y_I2 = 10;
		int Y_O1 = 10;
		int Y_N2 = 10;
		int Y_E1 = 10;
		int Y_S2 = 10;



		int ancho_instrucciones = 250;
		int C_I1 = 1;
		int C_N1;
		int C_S1;
		int C_T1;
		int C_R1;
		int C_U1;
		int C_C1;
		int C_C2;
		int C_I2;
		int C_O1;
		int C_N2;
		int C_E1;
		int C_S2;

		int tecla = 1;
		int controltecla = 1;
		int contrologos = 0;
		int cambioin = 0;
		Bitmap^ fondologo;

		Bitmap^ fondomenu1;
		Bitmap^ P;
		Bitmap^ R;
		Bitmap^ E;
		Bitmap^ G;
		Bitmap^ Up;
		Bitmap^ Np;
		Bitmap^ T;
		Bitmap^ Ap;
		Bitmap^ CERO;
		Bitmap^ UNO;
		Bitmap^ DOS;
		Bitmap^ TRES;



		Bitmap^ I1;
		Bitmap^ N1;
		Bitmap^ S1;
		Bitmap^ T1;
		Bitmap^ R1;
		Bitmap^ U1;
		Bitmap^ C1;
		Bitmap^ C2;
		Bitmap^ I2;
		Bitmap^ O1;
		Bitmap^ N2;
		Bitmap^ E1;
		Bitmap^ S2;


		Bitmap^ Pregunta1;
		Bitmap^ Respuesta1;
		Bitmap^ Pregunta2;
		Bitmap^ Respuesta2;
		Bitmap^ Pregunta3;
		Bitmap^ Respuesta3;

		Bitmap^ Carga1;
		Bitmap^ Carga2;
		Bitmap^ Carga3;

		// mundos 2 

		Bitmap^ mundo2;


		Bitmap^ fondopregunta1;
		Bitmap^ fondopregunta2;
		Bitmap^ fondopregunta3;


		BufferedGraphics^ buffer;
		BufferedGraphicsContext^ espacio_para_buffer;
		Graphics^ canvas;

		float opacidad;
		float sombra;

		//--------------------------------------------------
		//__vector de los robot 
		List<Robot^>^ robots; //
		//---------------------
		//_______________________
		List<Pelota^>^ pelotas;
		Arbitro^ arbitro;
		bool pelotas_detenidas;

		//___- Buffer__________
		BufferedGraphicsContext^ contexto;
		BufferedGraphics^ bufferS;
		Graphics^ g;
		//_____________________
	// bitmaps_______________
		Bitmap^ fondomenu;
		//_____________________
 //contadores int ______________

		int contador = 0;

		int intervalo = 0;

		// game over elementos______________________________________________________________________________________________

		bool l1 = false, l2 = false, l3 = false, l4 = false, l5 = false, l6 = false, l7 = false, l8 = false, b9 = false;
		int contadorTipeo = 0;


	private: System::Windows::Forms::Timer^ Menu;
	private: System::Windows::Forms::Timer^ Mundo1;
	private: System::Windows::Forms::Timer^ Mundo2;
	private: System::Windows::Forms::Timer^ Mundo3;
	private: System::Windows::Forms::Timer^ NPChabla;
	private: System::Windows::Forms::Button^ BtnJugar;
	private: System::Windows::Forms::Timer^ PressBtn;
	private: System::Windows::Forms::Button^ BtnCreditos;
	private: System::Windows::Forms::Button^ BtnSalir;
	private: System::Windows::Forms::Label^ label1;
		   System::Windows::Forms::Timer^ Logos;
		   System::Windows::Forms::Timer^ CargaUno;
		   System::Windows::Forms::Timer^ PreguntaUno;
		   System::Windows::Forms::Timer^ InstruccionesUno;
		   System::Windows::Forms::Button^ BtnNo;
		   System::Windows::Forms::Timer^ RespuestaUno;
		   System::Windows::Forms::Timer^ PreguntaDos;
		   System::Windows::Forms::Timer^ RespuestaDos;
		   System::Windows::Forms::Timer^ PreguntaTres;
		   System::Windows::Forms::Timer^ RespuestaTres;
		   System::Windows::Forms::Timer^ InstruccionesDos;
		   System::Windows::Forms::Timer^ CargaDos;
		   System::Windows::Forms::Timer^ CargaTres;

		   private: System::Windows::Forms::Timer^ GameOver;
		  private: System::Windows::Forms::Button^ BtnSi;



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
			   this->BtnJugar = (gcnew System::Windows::Forms::Button());
			   this->PressBtn = (gcnew System::Windows::Forms::Timer(this->components));
			   this->NPChabla = (gcnew System::Windows::Forms::Timer(this->components));
			   this->BtnCreditos = (gcnew System::Windows::Forms::Button());
			   this->BtnSalir = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());

			   this->Logos = (gcnew System::Windows::Forms::Timer(this->components));
			   this->CargaUno = (gcnew System::Windows::Forms::Timer(this->components));
			   this->PreguntaUno = (gcnew System::Windows::Forms::Timer(this->components));
			   this->InstruccionesUno = (gcnew System::Windows::Forms::Timer(this->components));
			   this->RespuestaUno = (gcnew System::Windows::Forms::Timer(this->components));
			   this->PreguntaDos = (gcnew System::Windows::Forms::Timer(this->components));
			   this->RespuestaDos = (gcnew System::Windows::Forms::Timer(this->components));
			   this->PreguntaTres = (gcnew System::Windows::Forms::Timer(this->components));
			   this->RespuestaTres = (gcnew System::Windows::Forms::Timer(this->components));
			   this->InstruccionesDos = (gcnew System::Windows::Forms::Timer(this->components));
			   this->CargaDos = (gcnew System::Windows::Forms::Timer(this->components));
			   this->CargaTres = (gcnew System::Windows::Forms::Timer(this->components));
			   this->GameOver = (gcnew System::Windows::Forms::Timer(this->components));
			   this->BtnSi = (gcnew System::Windows::Forms::Button());
			   this->BtnNo = (gcnew System::Windows::Forms::Button());
			   // 
			   // Logos
			   // 
			   this->Logos->Tick += gcnew System::EventHandler(this, &MyForm::Logos_Tick);
			   // 
			   // CargaUno
			   // 
			   this->CargaUno->Enabled = false;
			   this->CargaUno->Tick += gcnew System::EventHandler(this, &MyForm::Carga1_Tick);
			   // 
			   // PreguntaUno
			   // 
			   this->PreguntaUno->Interval = 10;
			   this->PreguntaUno->Tick += gcnew System::EventHandler(this, &MyForm::Pregunta1_Tick);
			   // 
			   // InstruccionesUno
			   // 
			   this->InstruccionesUno->Interval = 10;
			   this->InstruccionesUno->Tick += gcnew System::EventHandler(this, &MyForm::InstruccionesUno_Tick);// Logos


			   // 
			   // Menu
			   // 
			   this->Menu->Tick += gcnew System::EventHandler(this, &MyForm::Menu_Tick);
			   // 
			   // 
			   // Mundo1
			   // 
			   this->Mundo1->Enabled = false;
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
			  // NPChabla
			  // 
			   this->NPChabla->Tick += gcnew System::EventHandler(this, &MyForm::NPChabla_Tick);
			   // 
			   // BtnJugar
			   // 
			   this->BtnJugar->AutoSize = true;
			   this->BtnJugar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->BtnJugar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->BtnJugar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->BtnJugar->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->BtnJugar->FlatAppearance->BorderSize = 0;
			   this->BtnJugar->Location = System::Drawing::Point(597, 300);
			   this->BtnJugar->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			   this->BtnJugar->Name = L"BtnJugar";
			   this->BtnJugar->Image = gcnew Bitmap(gcnew String("images//Jugar.png"));
			   this->BtnJugar->Size = System::Drawing::Size(6, 6);
			   this->BtnJugar->TabIndex = 0;
			   this->BtnJugar->UseVisualStyleBackColor = false;
			   this->BtnJugar->Click += gcnew System::EventHandler(this, &MyForm::BtnJugar_Click);
			   this->BtnJugar->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::BtnJugar_MouseClick);
			   this->BtnJugar->MouseEnter += gcnew System::EventHandler(this, &MyForm::BtnJugar_MouseEnter);
			   this->BtnJugar->MouseLeave += gcnew System::EventHandler(this, &MyForm::BtnJugar_MouseLeave);
			   // 
			   // PressBtn
			   // 
			   this->PressBtn->Interval = 300;
			   this->PressBtn->Tick += gcnew System::EventHandler(this, &MyForm::PressBtn_Tick);
			   // 
			   // BtnCreditos
			   // 
			   this->BtnCreditos->AutoSize = true;
			   this->BtnCreditos->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->BtnCreditos->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->BtnCreditos->Location = System::Drawing::Point(597, 400);
			   this->BtnCreditos->Name = L"BtnCreditos";
			   this->BtnCreditos->Image = gcnew Bitmap(gcnew String("images//Creditos.jpg"));
			   this->BtnCreditos->Size = System::Drawing::Size(6, 6);
			   this->BtnCreditos->TabIndex = 1;
			   this->BtnCreditos->UseVisualStyleBackColor = false;
			   this->BtnCreditos->Click += gcnew System::EventHandler(this, &MyForm::BtnCreditos_Click);
			   this->BtnCreditos->MouseEnter += gcnew System::EventHandler(this, &MyForm::BtnCreditos_MouseEnter);
			   this->BtnCreditos->MouseLeave += gcnew System::EventHandler(this, &MyForm::BtnCreditos_MouseLeave);
			   // 
			   // BtnSalir
			   // 
			   this->BtnSalir->AutoSize = true;
			   this->BtnSalir->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->BtnSalir->Location = System::Drawing::Point(597, 500);
			   this->BtnSalir->Name = L"BtnSalir";
			   this->BtnSalir->Image = gcnew Bitmap(gcnew String("images//Salir.jpg"));
			   this->BtnSalir->Size = System::Drawing::Size(6, 6);
			   this->BtnSalir->TabIndex = 2;
			   this->BtnSalir->UseVisualStyleBackColor = false;
			   this->BtnSalir->Click += gcnew System::EventHandler(this, &MyForm::BtnSalir_Click);
			   this->BtnSalir->MouseEnter += gcnew System::EventHandler(this, &MyForm::BtnSalir_MouseEnter);
			   this->BtnSalir->MouseLeave += gcnew System::EventHandler(this, &MyForm::BtnSalir_MouseLeave);
			   // 
               // BtnSi
               // 
			   this->BtnSi->Image = gcnew Bitmap(gcnew String("images//si.jpg"));
			   this->BtnSi->Location = System::Drawing::Point(540, 345);
			   this->BtnSi->Name = L"BtnSi";
			   this->BtnSi->Size = System::Drawing::Size(127, 49);
			   this->BtnSi->TabIndex = 3;
			   this->BtnSi->UseVisualStyleBackColor = true;
			   this->BtnSi->Click += gcnew System::EventHandler(this, &MyForm::BtnSi_Click);

			   this->BtnSi->Visible = false;
			   // 
			   // BtnNo
			   // 

			   this->BtnNo->Image = gcnew Bitmap(gcnew String("images//no.jpg"));

			   this->BtnNo->Location = System::Drawing::Point(737, 345);
			   this->BtnNo->Name = L"BtnNo1";
			   this->BtnNo->Size = System::Drawing::Size(127, 49);
			   this->BtnNo->TabIndex = 4;
			   this->BtnNo->UseVisualStyleBackColor = true;
			   this->BtnNo->Click += gcnew System::EventHandler(this, &MyForm::BtnNo_Click);

			   this->BtnNo->Visible = false;
			   // 
			   // GAMEOVER
			   // 
			   this->GameOver->Tick += gcnew System::EventHandler(this, &MyForm::GameOver_Tick);

			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Visible = false;
			   this->label1->Location = System::Drawing::Point(100, 150);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(57, 16);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"";
			   this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1400, 700);
			   this->Controls->Add(this->BtnSalir);
			   this->Controls->Add(this->BtnCreditos);
			   this->Controls->Add(this->BtnJugar);
			   this->Controls->Add(this->BtnSi);
			   this->Controls->Add(this->BtnNo);
			   this->Controls->Add(this->label1);
			   this->KeyPreview = true;
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			   this->ResumeLayout(false);

			   // RespuestaUno
			  // 
			   this->RespuestaUno->Interval = 10;
			   this->RespuestaUno->Tick += gcnew System::EventHandler(this, &MyForm::RespuestaUno_Tick);
			   // 
			   // PreguntaDos
			   // 
			   this->PreguntaDos->Interval = 10;
			   this->PreguntaDos->Tick += gcnew System::EventHandler(this, &MyForm::PreguntaDos_Tick);
			   // 
			   // RespuestaDos
			   // 
			   this->RespuestaDos->Interval = 10;
			   this->RespuestaDos->Tick += gcnew System::EventHandler(this, &MyForm::RespuestaDos_Tick);
			   // 
			   // PreguntaTres
			   // 
			   this->PreguntaTres->Interval = 10;
			   this->PreguntaTres->Tick += gcnew System::EventHandler(this, &MyForm::PreguntaTres_Tick);
			   // 
			   // RespuestaTres
			   // 
			   this->RespuestaTres->Interval = 10;
			   this->RespuestaTres->Tick += gcnew System::EventHandler(this, &MyForm::RespuestaTres_Tick);
			   // 
			   // InstruccionesDos
			   // 
			   this->InstruccionesDos->Interval = 10;
			   this->InstruccionesDos->Tick += gcnew System::EventHandler(this, &MyForm::InstruccionesDos_Tick);
			   // 
			   // CargaDos
			   // 
			   this->CargaDos->Tick += gcnew System::EventHandler(this, &MyForm::CargaDos_Tick);
			   // 
			   // CargaTres
			   // 
			   this->CargaTres->Tick += gcnew System::EventHandler(this, &MyForm::CargaTres_Tick);

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
		if (!final) {
			if (e->KeyCode == Keys::Up)  if (!malarr2)teclapulsada = Direccion::Arriba2;
			if (e->KeyCode == Keys::Down)  if (!malaba2)teclapulsada = Direccion::Abajo2;
			if (e->KeyCode == Keys::Left)  if (!malizq2)teclapulsada = Direccion::Izquierda2;
			if (e->KeyCode == Keys::Right) if (!malder2)teclapulsada = Direccion::Derecha2;

			if (e->KeyCode == Keys::W) {
				if (!malarr1) {
					teclapulsada = Direccion::Arriba1;
				}
			}
			if (e->KeyCode == Keys::S) {
				if (!malaba1) {
					teclapulsada = Direccion::Abajo1;
				}
			}
			if (e->KeyCode == Keys::A) {
				if (!malizq1) {
					teclapulsada = Direccion::Izquierda1;
				}
			}
			if (e->KeyCode == Keys::D) {
				if (!malder1) {
					teclapulsada = Direccion::Derecha1;
				}
			}
			if (e->KeyCode == Keys::C) entered = true;
			if (e->KeyCode == Keys::Enter) entered = true;
		}

		if (escapep1) {
			if (e->KeyCode == Keys::Escape) {


				PreguntaUno->Enabled = false;
				escapep1 = false;
				C_P = 1;
				C_R = 0;
				C_E = 0;
				C_G = 0;
				C_U = 0;
				C_N = 0;
				C_T = 0;
				C_A = 0;
				C_CERO = 0;
				C_UNO = 0;
				C_I1 = 1;
				C_N1 = 0;
				C_S1 = 0;
				C_T1 = 0;
				C_R1 = 0;
				C_U1 = 0;
				C_C1 = 0;
				C_C2 = 0;
				C_I2 = 0;
				C_O1 = 0;
				C_N2 = 0;
				C_E1 = 0;
				C_S2 = 0;
				Y_P = 10;
				Y_R = 10;
				Y_E = 10;
				Y_G = 10;
				Y_U = 10;
				Y_N = 10;
				Y_T = 10;
				Y_A = 10;
				Y_CERO = 10;
				Y_UNO = 10;
				Y_DOS = 10;

				cambio = 0;
				X_P1 = 700;
				Y_P1 = 450;
				W_P1 = 10;
				H_P1 = 10;
				InstruccionesUno->Enabled = true;

			}
		}
		if (escapei1) {
			if (e->KeyCode == Keys::Escape) {


				InstruccionesUno->Enabled = false;
				Mundo1->Enabled = true;
				escapei1 = false;
				C_P = 1;
				C_R = 0;
				C_E = 0;
				C_G = 0;
				C_U = 0;
				C_N = 0;
				C_T = 0;
				C_A = 0;
				C_CERO = 0;
				C_UNO = 0;
				C_I1 = 1;
				C_N1 = 0;
				C_S1 = 0;
				C_T1 = 0;
				C_R1 = 0;
				C_U1 = 0;
				C_C1 = 0;
				C_C2 = 0;
				C_I2 = 0;
				C_O1 = 0;
				C_N2 = 0;
				C_E1 = 0;
				C_S2 = 0;
				Y_P = 10;
				Y_R = 10;
				Y_E = 10;
				Y_G = 10;
				Y_U = 10;
				Y_N = 10;
				Y_T = 10;
				Y_A = 10;
				Y_CERO = 10;
				Y_UNO = 10;
				Y_DOS = 10;

				cambio = 0;
				X_P1 = 700;
				Y_P1 = 450;
				W_P1 = 10;
				H_P1 = 10;
			}
		}
		if (escaper1) {
			if (e->KeyCode == Keys::Escape) {


				RespuestaUno->Enabled = false;
				escaper1 = false;
				C_P = 1;
				C_R = 0;
				C_E = 0;
				C_G = 0;
				C_U = 0;
				C_N = 0;
				C_T = 0;
				C_A = 0;
				C_CERO = 0;
				C_UNO = 0;
				C_I1 = 1;
				C_N1 = 0;
				C_S1 = 0;
				C_T1 = 0;
				C_R1 = 0;
				C_U1 = 0;
				C_C1 = 0;
				C_C2 = 0;
				C_I2 = 0;
				C_O1 = 0;
				C_N2 = 0;
				C_E1 = 0;
				C_S2 = 0;
				Y_P = 10;
				Y_R = 10;
				Y_E = 10;
				Y_G = 10;
				Y_U = 10;
				Y_N = 10;
				Y_T = 10;
				Y_A = 10;
				Y_CERO = 10;
				Y_UNO = 10;
				Y_DOS = 10;

				cambio = 0;
				X_P1 = 700;
				Y_P1 = 450;
				W_P1 = 10;
				H_P1 = 10;

				porcentajes = 1;
				tecla = 1;
				navecontrol = 0;
				xcontrol = 0;

				CargaDos->Enabled = true;

			}
		}
		if (escapep2) {
			if (e->KeyCode == Keys::Escape) {


				PreguntaDos->Enabled = false;
				Mundo2->Enabled = true;
				escapep2 = false;
				C_P = 1;
				C_R = 0;
				C_E = 0;
				C_G = 0;
				C_U = 0;
				C_N = 0;
				C_T = 0;
				C_A = 0;
				C_CERO = 0;
				C_UNO = 0;
				C_I1 = 1;
				C_N1 = 0;
				C_S1 = 0;
				C_T1 = 0;
				C_R1 = 0;
				C_U1 = 0;
				C_C1 = 0;
				C_C2 = 0;
				C_I2 = 0;
				C_O1 = 0;
				C_N2 = 0;
				C_E1 = 0;
				C_S2 = 0;
				Y_P = 10;
				Y_R = 10;
				Y_E = 10;
				Y_G = 10;
				Y_U = 10;
				Y_N = 10;
				Y_T = 10;
				Y_A = 10;
				Y_CERO = 10;
				Y_UNO = 10;
				Y_DOS = 10;

				cambio = 0;
				X_P1 = 700;
				Y_P1 = 450;
				W_P1 = 10;
				H_P1 = 10;
			}
		}
		if (escaper2) {
			if (e->KeyCode == Keys::Escape) {


				RespuestaDos->Enabled = false;
				CargaTres->Enabled = true;
				escaper2 = false;
				C_P = 1;
				C_R = 0;
				C_E = 0;
				C_G = 0;
				C_U = 0;
				C_N = 0;
				C_T = 0;
				C_A = 0;
				C_CERO = 0;
				C_UNO = 0;
				C_I1 = 0;
				C_N1 = 0;
				C_S1 = 0;
				C_T1 = 0;
				C_R1 = 0;
				C_U1 = 0;
				C_C1 = 0;
				C_C2 = 0;
				C_I2 = 0;
				C_O1 = 0;
				C_N2 = 0;
				C_E1 = 0;
				C_S2 = 0;
				Y_P = 10;
				Y_R = 10;
				Y_E = 10;
				Y_G = 10;
				Y_U = 10;
				Y_N = 10;
				Y_T = 10;
				Y_A = 10;
				Y_CERO = 10;
				Y_UNO = 10;
				Y_DOS = 10;

				cambio = 0;
				X_P1 = 700;
				Y_P1 = 450;
				W_P1 = 10;
				H_P1 = 10;

				porcentajes = 1;
				tecla = 1;
				navecontrol = 0;
				xcontrol = 0;
				Nave->setXt(800);
			}
		}
		if (escapep3) {
			if (e->KeyCode == Keys::Escape) {


				PreguntaTres->Enabled = false;
				InstruccionesDos->Enabled = true;
				escapep3 = false;


				C_P = 1;
				C_R = 0;
				C_E = 0;
				C_G = 0;
				C_U = 0;
				C_N = 0;
				C_T = 0;
				C_A = 0;
				C_CERO = 0;
				C_UNO = 0;

				C_I1 = 1;
				C_N1 = 0;
				C_S1 = 0;
				C_T1 = 0;
				C_R1 = 0;
				C_U1 = 0;
				C_C1 = 0;
				C_C2 = 0;
				C_I2 = 0;
				C_O1 = 0;
				C_N2 = 0;
				C_E1 = 0;
				C_S2 = 0;


				Y_P = 10;
				Y_R = 10;
				Y_E = 10;
				Y_G = 10;
				Y_U = 10;
				Y_N = 10;
				Y_T = 10;
				Y_A = 10;
				Y_CERO = 10;
				Y_UNO = 10;
				Y_DOS = 10;


				Y_I1 = 10;
				Y_N1 = 10;
				Y_S1 = 10;
				Y_T1 = 10;
				Y_R1 = 10;
				Y_U1 = 10;
				Y_C1 = 10;
				Y_C2 = 10;
				Y_I2 = 10;
				Y_O1 = 10;
				Y_N2 = 10;
				Y_E1 = 10;
				Y_S2 = 10;


				cambio = 0;
				X_P1 = 700;
				Y_P1 = 450;
				W_P1 = 10;
				H_P1 = 10;


				porcentajes = 1;
				tecla = 1;
				navecontrol = 0;
				xcontrol = 0;


				escapei2 = false;
				escapei2_1 = false;
				escapei2_2 = false;
				controltecla = 1;
				cambioin = 0;
			}
		}
		if (escapei2) {
			if (e->KeyCode == Keys::Escape) {

				escapei2 = false;
				escapei2_1 = true;

				tecla = 1;
				controltecla = 1;
				cambioin = 0;

			}
		}

		if (escapei2_2) {

			if (e->KeyCode == Keys::Escape) {

				escapei2_1 = false;

				InstruccionesDos->Enabled = false;
				Mundo3->Enabled = true;

				C_P = 1;
				C_R = 0;
				C_E = 0;
				C_G = 0;
				C_U = 0;
				C_N = 0;
				C_T = 0;
				C_A = 0;
				C_CERO = 0;
				C_UNO = 0;
				C_I1 = 0;
				C_N1 = 0;
				C_S1 = 0;
				C_T1 = 0;
				C_R1 = 0;
				C_U1 = 0;
				C_C1 = 0;
				C_C2 = 0;
				C_I2 = 0;
				C_O1 = 0;
				C_N2 = 0;
				C_E1 = 0;
				C_S2 = 0;
				Y_P = 10;
				Y_R = 10;
				Y_E = 10;
				Y_G = 10;
				Y_U = 10;
				Y_N = 10;
				Y_T = 10;
				Y_A = 10;
				Y_CERO = 10;
				Y_UNO = 10;
				Y_DOS = 10;

				cambio = 0;
				X_P1 = 700;
				Y_P1 = 450;
				W_P1 = 10;
				H_P1 = 10;




			}
		}
		if (escaper3) {
			if (e->KeyCode == Keys::Escape) {


				RespuestaTres->Enabled = false;
				escaper3 = false;
				C_P = 1;
				C_R = 0;
				C_E = 0;
				C_G = 0;
				C_U = 0;
				C_N = 0;
				C_T = 0;
				C_A = 0;
				C_CERO = 0;
				C_UNO = 0;
				C_I1 = 0;
				C_N1 = 0;
				C_S1 = 0;
				C_T1 = 0;
				C_R1 = 0;
				C_U1 = 0;
				C_C1 = 0;
				C_C2 = 0;
				C_I2 = 0;
				C_O1 = 0;
				C_N2 = 0;
				C_E1 = 0;
				C_S2 = 0;
				Y_P = 10;
				Y_R = 10;
				Y_E = 10;
				Y_G = 10;
				Y_U = 10;
				Y_N = 10;
				Y_T = 10;
				Y_A = 10;
				Y_CERO = 10;
				Y_UNO = 10;
				Y_DOS = 10;

				cambio = 0;
				X_P1 = 700;
				Y_P1 = 450;
				W_P1 = 10;
				H_P1 = 10;
			}
		}

	}
	private: System::Void Menu_Tick(System::Object^ sender, System::EventArgs^ e) {

		buffer->Graphics->DrawImage(fondomenu, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);
		buffer->Graphics->DrawImage(H, 400, y1);
		buffer->Graphics->DrawImage(U, 470, y2);
		buffer->Graphics->DrawImage(M, 550, y3);
		buffer->Graphics->DrawImage(A, 650, y4);
		buffer->Graphics->DrawImage(N, 740, y5);
		buffer->Graphics->DrawImage(Raya, 840, y6);
		buffer->Graphics->DrawImage(I, 900, y7);
		buffer->Graphics->DrawImage(A, 940, y8);
		buffer->Render(canvas);




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
	private: System::Void Mundo1_Tick(System::Object^ sender, System::EventArgs^ e) {

		bool normal = true;
		nivel_actual = 1;

		buffer->Graphics->DrawImage(fondomundo1, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);

		Alien->cambiardxdy(teclapulsada);
		Alien->moverimagen(teclapulsada);
		Alien->mostrarimagen(buffer->Graphics);


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
			RespuestaUno->Enabled = true;
			Mundo1->Enabled = false;
			porcentajes = 1;
			tecla = 1;
			navecontrol = 0;
			xcontrol = 0;
			Alien->setX(50);
			Alien->setY(250);
			Alien->setVidas(3);
		}
		Marciano1->mostrarimagen(buffer->Graphics);

		if (contador % 2 == 0)Marciano1->animacion();

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


			}


		}
		aliado->mover(buffer->Graphics);
		aliado->mostrar(buffer->Graphics);

		if (Colision(Alien->getX() - 30, Alien->getY() - 20, Alien->getAncho() - 60, Alien->getAlto() - 40, Marciano1->getX() - 30, Marciano1->getY() - 20, Marciano1->getAncho() - 60, Marciano1->getAlto() - 40)) {
			Alien->setY(Alien->getY() + 50);
			NPCH = 1;
			this->NPChabla->Enabled = true;
		}

		if (Alien->getVidas() == 0) {

			GameOver->Enabled = true;
			Mundo1->Enabled = false;
		}

		teclapulsada = Direccion::Ninguno;

		buffer->Render(canvas);


		contador++;


	}



	private: System::Void Mundo2_Tick(System::Object^ sender, System::EventArgs^ e) {
		canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
		buffer->Graphics->DrawImage(fondo_mundo_2, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);
		nivel_actual = 2;

		arbitro->setY(158);
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
		Portal2->mostrarimagen(buffer->Graphics);
		if (contador % 3 == 0)Portal2->animacion();
		Portal3->mostrarimagen(buffer->Graphics);
		if (contador % 3 == 0)Portal3->animacion();
		messi->mostrar(buffer->Graphics);
		if (contador % 2 == 0)messi->mover(buffer->Graphics);

		Alien->cambiardxdy(teclapulsada);
		Alien->moverimagen(teclapulsada);
		Alien->mostrarimagen(buffer->Graphics);
		

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
			this->NPChabla->Enabled = true;
		}


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
				if (Alien->getVidas() <= 0) {
					Alien->setVidas(3);
					Mundo2->Enabled = false;
				}
			}

			if (Colision(Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, arbitro->getX() - 50, arbitro->getY() - 50, arbitro->getAncho() - 70, arbitro->getAlto() - 50))
			{
				arbitro->Activo();
				pelotas_detenidas = true;
			}

			//elimna las pelotas que ya pasaon del limite
			if (!pelotas_detenidas && pelotas[i]->getX() + pelotas[i]->getAncho() < 300) {
				pelotas->RemoveAt(i);
				i--;
			}
		}
		if (Alien->getVidas() == 0) {

			GameOver->Enabled = true;
			Mundo2->Enabled = false;
		}
		arbitro->mover(buffer->Graphics);
		arbitro->mostrar(buffer->Graphics);


		if (Colision(
			Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, Portal2->getX() - 50, Portal2->getY() - 50, Portal2->getAncho() - 70, Portal2->getAlto() - 50))
		{
			RespuestaDos->Enabled = true;

			Alien->setX(50);
			Alien->setY(250);
			Alien->setVidas(3);
			Mundo2->Enabled = false;
		}

		if (Colision(
			Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, Portal3->getX() - 50, Portal3->getY() - 50, Portal3->getAncho() - 70, Portal3->getAlto() - 50))
		{
			RespuestaDos->Enabled = true;

			Alien->setX(50);
			Alien->setY(250);
			Alien->setVidas(3);
			Mundo2->Enabled = false;
		}
		teclapulsada = Direccion::Ninguno;

		buffer->Render(canvas);
		contador++;
		
	}
	private: System::Void Mundo3_Tick(System::Object^ sender, System::EventArgs^ e) {

		canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
		buffer->Graphics->DrawImage(fondomundo3, 0, 0, Rectangle(0, 0, fondomundo3->Width, fondomundo3->Height), GraphicsUnit::Pixel);

		//this->label1->Enabled = true;
		//this->label1->Visible = true;
		//this->label1->Text = L"" + (Steve->getX() + 40) + " " + (Steve->getY() + 25 + 78) + " " + (Steve->getAncho() - 80) + " " + (Steve->getAlto() - 50);
		if (final)teclapulsada = Direccion::Abajo1;
		Steve->cambiardxdy(teclapulsada);
		Steve->moverimagen(teclapulsada);
		Steve->mostrarimagen(buffer->Graphics);
		if (final)teclapulsada = Direccion::Abajo2;
		Minipekka->cambiardxdyD(teclapulsada);
		Minipekka->moverimagenD(teclapulsada);
		Minipekka->mostrarimagen(buffer->Graphics);

		if (final)Brillo->mostrarimagen(buffer->Graphics);

		malder1 = malarr1 = malaba1 = malizq1 = malder2 = malarr2 = malaba2 = malizq2 = false;

		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 90, 125, 1, 700))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 408, 0, 1, 158))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 573, 135, 1, 150))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 223, 270, 1, 128))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 283, 525, 1, 40))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 428, 395, 1, 213))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 573, 570, 1, 200))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 658, 0, 1, 103))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 723, 210, 1, 600))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 853, 340, 1, 178))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 983, 340, 1, 75))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 1073, 500, 1, 60))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 1003, 0, 1, 90))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 1128, 0, 1, 263))malder1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 1263, 0, 1, 555))malder1 = true;

		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 90 + 27, 125, 1, 700))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 408 + 27, 0, 1, 158))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 573 + 27, 135, 1, 150))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 223 + 27, 270, 1, 128))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 283 + 27, 525, 1, 40))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 428 + 27, 395, 1, 213))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 573 + 27, 570, 1, 200))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 658 + 27, 0, 1, 103))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 723 + 27, 210, 1, 600))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 853 + 27, 340, 1, 178))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 983 + 27, 340, 1, 75))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 1073 + 27, 500, 1, 60))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 1003 + 27, 0, 1, 90))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 1128 + 27, 0, 1, 263))malizq1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 1263 + 27, 0, 1, 555))malizq1 = true;


		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 90, 128, 193, 1))malaba1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 225, 273, 378, 1))malaba1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 115, 568, 193, 1))malaba1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 425, 583, 183, 1))malaba1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 425, 398, 183, 1))malaba1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 400, 138, 193, 1))malaba1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 655, 78, 188, 1))malaba1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 725, 213, 283, 1))malaba1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 850, 343, 163, 1))malaba1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 1070, 503, 188, 1))malaba1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 960, 563, 143, 1))malaba1 = true;

		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 90, 128 + 27, 193, 1))malarr1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 225, 273 + 27, 378, 1))malarr1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 115, 568 + 27, 193, 1))malarr1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 425, 583 + 27, 183, 1))malarr1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 425, 398 + 27, 183, 1))malarr1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 400, 138 + 27, 193, 1))malarr1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 655, 78 + 27, 188, 1))malarr1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 725, 213 + 27, 283, 1))malarr1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 850, 343 + 27, 163, 1))malarr1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 1070, 503 + 27, 188, 1))malarr1 = true;
		if (Colision(Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50, 960, 563 + 27, 143, 1))malarr1 = true;

		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 90, 125, 1, 700))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 408, 0, 1, 158))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 573, 135, 1, 150))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 223, 270, 1, 128))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 283, 525, 1, 40))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 428, 395, 1, 213))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 573, 570, 1, 200))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 658, 0, 1, 103))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 723, 210, 1, 600))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 853, 340, 1, 178))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 983, 340, 1, 75))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 1073, 500, 1, 60))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 1003, 0, 1, 90))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 1128, 0, 1, 263))malder2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 1263, 0, 1, 555))malder2 = true;

		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 90 + 27, 125, 1, 700))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 408 + 27, 0, 1, 158))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 573 + 27, 135, 1, 150))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 223 + 27, 270, 1, 128))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 283 + 27, 525, 1, 40))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 428 + 27, 395, 1, 213))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 573 + 27, 570, 1, 200))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 658 + 27, 0, 1, 103))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 723 + 27, 210, 1, 600))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 853 + 27, 340, 1, 178))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 983 + 27, 340, 1, 75))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 1073 + 27, 500, 1, 60))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 1003 + 27, 0, 1, 90))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 1128 + 27, 0, 1, 263))malizq2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 1263 + 27, 0, 1, 555))malizq2 = true;


		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 90, 128, 193, 1))malaba2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 225, 273, 378, 1))malaba2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 115, 568, 193, 1))malaba2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 425, 583, 183, 1))malaba2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 425, 398, 183, 1))malaba2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 400, 138, 193, 1))malaba2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 655, 78, 188, 1))malaba2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 725, 213, 283, 1))malaba2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 850, 343, 163, 1))malaba2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 1070, 503, 188, 1))malaba2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 960, 563, 143, 1))malaba2 = true;

		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 90, 128 + 27, 193, 1))malarr2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 225, 273 + 27, 378, 1))malarr2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 115, 568 + 27, 193, 1))malarr2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 425, 583 + 27, 183, 1))malarr2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 425, 398 + 27, 183, 1))malarr2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 400, 138 + 27, 193, 1))malarr2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 655, 78 + 27, 188, 1))malarr2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 725, 213 + 27, 283, 1))malarr2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 850, 343 + 27, 163, 1))malarr2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 1070, 503 + 27, 188, 1))malarr2 = true;
		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, 960, 563 + 27, 143, 1))malarr2 = true;

		if (Colision(Minipekka->getX() + 40, Minipekka->getY() + 25, Minipekka->getAncho() - 80, Minipekka->getAlto() - 50, Steve->getX() + 40, Steve->getY() + 25, Steve->getAncho() - 80, Steve->getAlto() - 50) && !final) {
			Steve->setIndicec(0);
			Minipekka->setIndicec(0);
			Steve->setIndicef(0);
			Minipekka->setIndicef(0);
			Steve->setX(570);
			Steve->setY((Steve->getY() + Minipekka->getY()) / 2);
			Minipekka->setX(Steve->getX() + 48);
			Minipekka->setY(Steve->getY());
			final = true;
		}
		if (Minipekka->getY() == 700) {
			
			this->RespuestaTres->Enabled = true;

			this->Mundo3->Enabled = false;
		}

		if (!final)teclapulsada = Direccion::Ninguno;

		buffer->Render(canvas);
		contador++;
		delete buffer;
		delete espacio_para_buffer;
		delete canvas;
	}
	private: System::Void NPChabla_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->Mundo1->Enabled = false;
		this->Mundo2->Enabled = false;

		canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
		if (NPCH == 1) {
			buffer->Graphics->DrawImage(fondomundo1, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);
			this->label1->Visible = true;
			if (subida % 1 == 0 && texto < 306) {
				this->label1->Text = L"" + textillo + frase[texto];
				texto++;
			}
			textillo = this->label1->Text;
			subida++;
			M1hablando->mostrarimagen(buffer->Graphics);
			if (subida % 2 == 0) {

				M1hablando->animacion();
			}

			if (texto == 306 && entered) {
				texto = 0;
				this->label1->Visible = false;
				this->label1->Text = L"";
				textillo = this->label1->Text;
				this->Mundo1->Enabled = true;
				this->NPChabla->Enabled = false;
			}
			entered = false;
			buffer->Render(canvas);
			
		}
		if (NPCH == 2) {
			buffer->Graphics->DrawImage(fondo_mundo_2, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);
			this->label1->Visible = true;
			if (subida % 1 == 0 && texto < 289) {
				this->label1->Text = L"" + textillo + frase2[texto];
				texto++;
			}
			textillo = this->label1->Text;
			subida++;
			M2hablando->setY(100);
			M2hablando->setX(800);
			M2hablando->mostrarimagen(buffer->Graphics);
			if (subida % 2 == 0) {

				M2hablando->animacion();
			}

			if (texto == 289 && entered) {
				texto = 0;
				this->label1->Visible = false;
				this->label1->Text = L"";
				textillo = this->label1->Text;
				this->Mundo2->Enabled = true;
				this->NPChabla->Enabled = false;
			}
			entered = false;
			buffer->Render(canvas);
			
		}
	}

	private: System::Void BtnJugar_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnJugar_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->PressBtn->Enabled = true;
		Botonazo = 1;
		grr = 0;
	}
	private: System::Void BtnCreditos_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PressBtn->Enabled = true;
		Botonazo = 2;
		grr = 0;
	}
	private: System::Void BtnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PressBtn->Enabled = true;
		Botonazo = 3;
		grr = 0;
	}
	private: System::Void PressBtn_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (Botonazo == 1) {
			this->BtnCreditos->Enabled = false;
			this->BtnSalir->Enabled = false;
			if (grr == 0)this->BtnJugar->Image = gcnew Bitmap(gcnew String("images//JugarMorado.png"));
			if (grr == 1)this->BtnJugar->Image = gcnew Bitmap(gcnew String("images//Jugar.png"));
			if (grr == 2)this->BtnJugar->Image = gcnew Bitmap(gcnew String("images//JugarMorado.png"));
			if (grr == 3)this->BtnJugar->Image = gcnew Bitmap(gcnew String("images//Jugar.png"));
			if (grr == 4)this->BtnJugar->Image = gcnew Bitmap(gcnew String("images//JugarMorado.png"));
			if (grr == 5)this->BtnJugar->Image = gcnew Bitmap(gcnew String("images//Jugar.png"));
			if (grr == 6) {
				this->PressBtn->Enabled = false;
				this->Menu->Enabled = false;
				this->CargaUno->Enabled = true;
				this->BtnJugar->Visible = false;
				this->BtnCreditos->Visible = false;
				this->BtnSalir->Visible = false;
			}
			grr++;
		}
		if (Botonazo == 2) {
			this->BtnJugar->Enabled = false;
			this->BtnSalir->Enabled = false;
			if (grr == 0)this->BtnCreditos->Image = gcnew Bitmap(gcnew String("images//CreditosMorado.png"));
			if (grr == 1)this->BtnCreditos->Image = gcnew Bitmap(gcnew String("images//Creditos.jpg"));
			if (grr == 2)this->BtnCreditos->Image = gcnew Bitmap(gcnew String("images//CreditosMorado.png"));
			if (grr == 3)this->BtnCreditos->Image = gcnew Bitmap(gcnew String("images//Creditos.jpg"));
			if (grr == 4)this->BtnCreditos->Image = gcnew Bitmap(gcnew String("images//CreditosMorado.png"));
			if (grr == 5)this->BtnCreditos->Image = gcnew Bitmap(gcnew String("images//Creditos.jpg"));
			if (grr == 6)this->PressBtn->Enabled = false;
			grr++;
		}
		if (Botonazo == 3) {
			this->BtnCreditos->Enabled = false;
			this->BtnJugar->Enabled = false;
			if (grr == 0)this->BtnSalir->Image = gcnew Bitmap(gcnew String("images//SalirMorado.png"));
			if (grr == 1)this->BtnSalir->Image = gcnew Bitmap(gcnew String("images//Salir.jpg"));
			if (grr == 2)this->BtnSalir->Image = gcnew Bitmap(gcnew String("images//SalirMorado.png"));
			if (grr == 3)this->BtnSalir->Image = gcnew Bitmap(gcnew String("images//Salir.jpg"));
			if (grr == 4)this->BtnSalir->Image = gcnew Bitmap(gcnew String("images//SalirMorado.png"));
			if (grr == 5)this->BtnSalir->Image = gcnew Bitmap(gcnew String("images//Salir.jpg"));
			if (grr == 6)this->PressBtn->Enabled = false;
			grr++;
		}
	}
	private: System::Void BtnJugar_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->BtnJugar->Image = gcnew Bitmap(gcnew String("images//JugarMorado.png"));
	}
	private: System::Void BtnJugar_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->BtnJugar->Image = gcnew Bitmap(gcnew String("images//Jugar.png"));
	}
	private: System::Void BtnCreditos_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->BtnCreditos->Image = gcnew Bitmap(gcnew String("images//CreditosMorado.png"));
	}
	private: System::Void BtnCreditos_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->BtnCreditos->Image = gcnew Bitmap(gcnew String("images//Creditos.jpg"));
	}
	private: System::Void BtnSalir_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->BtnSalir->Image = gcnew Bitmap(gcnew String("images//SalirMorado.png"));
	}
	private: System::Void BtnSalir_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->BtnSalir->Image = gcnew Bitmap(gcnew String("images//Salir.jpg"));
	}
	private: System::Void Logos_Tick(System::Object^ sender, System::EventArgs^ e) {


		buffer->Graphics->Clear(Color::Black);

		ImageAttributes^ atributo = gcnew ImageAttributes();
		ColorMatrix^ filtro = gcnew ColorMatrix();


		if (control == 1) {
			opacidad += sombra;
			if (opacidad >= 1.0) {
				opacidad = 1.0;
				control++;
			}
		}
		if (control == 2) {
			opacidad -= sombra;
			if (opacidad <= 0.0) {
				opacidad = 0.0;
				control++;
			}
		}

		if (control == 3) {
			opacidad += sombra;
			if (opacidad >= 1.0) {
				opacidad = 1.0;
				control = 4;
			}
		}
		if (control == 4) {
			opacidad -= sombra;
			if (opacidad <= 0.0) {
				opacidad = 0.0;
				control = 5;
			}
		}
		if (control == 5) {


			Logos->Enabled = false;
			Menu->Enabled = true;
			BtnJugar->Visible = true;
			BtnCreditos->Visible = true;
			BtnSalir->Visible = true;


		}


		filtro->Matrix33 = opacidad;

		atributo->SetColorMatrix(filtro, ColorMatrixFlag::Default, ColorAdjustType::Bitmap);


		if (control == 1 || control == 2)
		{
			buffer->Graphics->DrawImage(fondologo, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondologo->Width, fondologo->Height, GraphicsUnit::Pixel, atributo);
		}
		if (control == 3 || control == 4)
		{
			buffer->Graphics->DrawImage(fondomenu1, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondomenu1->Width, fondomenu1->Height, GraphicsUnit::Pixel, atributo);

		}

		buffer->Render(canvas);



	}
	private: System::Void Carga1_Tick(System::Object^ sender, System::EventArgs^ e) {

		buffer->Graphics->Clear(Color::Black);

		buffer->Graphics->DrawImage(Carga1, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, Carga1->Width, Carga1->Height, GraphicsUnit::Pixel);





		Cargas->mover_imagen(porcentajes);
		Cargas->mostrar_imagen(buffer->Graphics);


		Nave->mostrar_nave(buffer->Graphics);
		Nave->mover_nave(tecla);

		xcontrol += 50;
		navecontrol += 30;


		if (xcontrol == 150)
		{
			xcontrol = 0;

			porcentajes++;

		}

		if (navecontrol == 30) {

			tecla++;
			navecontrol = 0;
		}

		if (tecla == 11)
			tecla = 1;


		if (porcentajes == 10)
		{
			CargaUno->Enabled = false;
			PreguntaUno->Enabled = true;
			tecla = 1;
			controltecla = 1;


		}




		buffer->Render(canvas);
	}
	private: System::Void Pregunta1_Tick(System::Object^ sender, System::EventArgs^ e) {

		buffer->Graphics->Clear(Color::Black);
		buffer->Graphics->DrawImage(fondopregunta1, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta1->Width, fondopregunta1->Height, GraphicsUnit::Pixel);
		buffer->Graphics->DrawImage(P, 370 - ancho_pregunta, Y_P);
		buffer->Graphics->DrawImage(R, 450 - ancho_pregunta, Y_R);
		buffer->Graphics->DrawImage(E, 535 - ancho_pregunta, Y_E);
		buffer->Graphics->DrawImage(G, 615 - ancho_pregunta, Y_G);
		buffer->Graphics->DrawImage(Up, 695 - ancho_pregunta, Y_U);
		buffer->Graphics->DrawImage(Np, 780 - ancho_pregunta, Y_N);
		buffer->Graphics->DrawImage(T, 860 - ancho_pregunta, Y_T);
		buffer->Graphics->DrawImage(Ap, 945 - ancho_pregunta, Y_A);
		buffer->Graphics->DrawImage(CERO, 1070 - ancho_pregunta, Y_CERO);
		buffer->Graphics->DrawImage(UNO, 1160 - ancho_pregunta, Y_UNO);

		int caida1 = 4;
		int subida = 2;
		int caida2 = 1;


		if (C_P == 1)
		{
			Y_P += caida1;
			if (Y_P >= 80) { Y_P = 80; C_P = 2; }
		}
		if (C_P == 2)
		{
			Y_P -= subida;
			if (Y_P <= 50) { Y_P = 50; C_P = 3; }
		}
		if (C_P == 3)
		{
			Y_P += caida2;
			if (Y_P >= 80) { Y_P = 80; C_P = 4; }
		}




		if (C_R == 1) { Y_R += caida1; if (Y_R >= 80) { Y_R = 80; C_R = 2; } }
		if (C_R == 2) { Y_R -= subida; if (Y_R <= 50) { Y_R = 50; C_R = 3; } }
		if (C_R == 3) { Y_R += caida2; if (Y_R >= 80) { Y_R = 80; C_R = 4; } }


		if (C_E == 1) { Y_E += caida1; if (Y_E >= 80) { Y_E = 80; C_E = 2; } }
		else if (C_E == 2) { Y_E -= subida; if (Y_E <= 50) { Y_E = 50; C_E = 3; } }
		else if (C_E == 3) { Y_E += caida2; if (Y_E >= 80) { Y_E = 80; C_E = 4; } }


		if (C_G == 1) { Y_G += caida1; if (Y_G >= 80) { Y_G = 80; C_G = 2; } }
		else if (C_G == 2) { Y_G -= subida; if (Y_G <= 50) { Y_G = 50; C_G = 3; } }
		else if (C_G == 3) { Y_G += caida2; if (Y_G >= 80) { Y_G = 80; C_G = 4; } }

		if (C_U == 1) { Y_U += caida1; if (Y_U >= 80) { Y_U = 80; C_U = 2; } }
		else if (C_U == 2) { Y_U -= subida; if (Y_U <= 50) { Y_U = 50; C_U = 3; } }
		else if (C_U == 3) { Y_U += caida2; if (Y_U >= 80) { Y_U = 80; C_U = 4; } }


		if (C_N == 1) { Y_N += caida1; if (Y_N >= 80) { Y_N = 80; C_N = 2; } }
		else if (C_N == 2) { Y_N -= subida; if (Y_N <= 50) { Y_N = 50; C_N = 3; } }
		else if (C_N == 3) { Y_N += caida2; if (Y_N >= 80) { Y_N = 80; C_N = 4; } }


		if (C_T == 1) { Y_T += caida1; if (Y_T >= 80) { Y_T = 80; C_T = 2; } }
		else if (C_T == 2) { Y_T -= subida; if (Y_T <= 50) { Y_T = 50; C_T = 3; } }
		else if (C_T == 3) { Y_T += caida2; if (Y_T >= 80) { Y_T = 80; C_T = 4; } }


		if (C_A == 1) { Y_A += caida1; if (Y_A >= 80) { Y_A = 80; C_A = 2; } }
		else if (C_A == 2) { Y_A -= subida; if (Y_A <= 50) { Y_A = 50; C_A = 3; } }
		else if (C_A == 3) { Y_A += caida2; if (Y_A >= 80) { Y_A = 80; C_A = 4; } }


		if (C_CERO == 1) { Y_CERO += caida1; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 2; } }
		else if (C_CERO == 2) { Y_CERO -= subida; if (Y_CERO <= 50) { Y_CERO = 50; C_CERO = 3; } }
		else if (C_CERO == 3) { Y_CERO += caida2; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 4; } }

		if (C_UNO == 1) { Y_UNO += caida1; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 2; } }
		else if (C_UNO == 2) { Y_UNO -= subida; if (Y_UNO <= 50) { Y_UNO = 50; C_UNO = 3; } }
		else if (C_UNO == 3) { Y_UNO += caida2; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 4; } }

		if (Y_P == 38)
			C_R = 1;
		if (Y_R == 38)
			C_E = 1;
		if (Y_E == 38)
			C_G = 1;
		if (Y_G == 38)
			C_U = 1;
		if (Y_U == 38)
			C_N = 1;
		if (Y_N == 38)
			C_T = 1;
		if (Y_T == 38)
			C_A = 1;
		if (Y_A == 38)
			C_CERO = 1;
		if (Y_CERO == 38)
			C_UNO = 1;


		if (C_UNO == 4) {

			buffer->Graphics->DrawImage(Pregunta1, X_P1, Y_P1, W_P1, H_P1);

			if (W_P1 < anchooobjetivo_pregunta1 && H_P1 < altoobjetivo_pregunta1) {

				X_P1 -= 8;
				Y_P1 -= 4.5;

				W_P1 += velocidad * 16;
				H_P1 += velocidad * 9;

			}
			cambio++;


		}

		if (cambio >= 100) {

			escapep1 = true;


		}

		buffer->Render(canvas);




	}


	private: System::Void InstruccionesUno_Tick(System::Object^ sender, System::EventArgs^ e) {

		buffer->Graphics->Clear(Color::Black);
		buffer->Graphics->DrawImage(fondopregunta1, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta1->Width, fondopregunta1->Height, GraphicsUnit::Pixel);

		buffer->Graphics->DrawImage(I1, 400 - ancho_instrucciones, Y_I1);
		buffer->Graphics->DrawImage(N1, 477 - ancho_instrucciones, Y_N1);
		buffer->Graphics->DrawImage(S1, 555 - ancho_instrucciones, Y_S1);
		buffer->Graphics->DrawImage(T1, 635 - ancho_instrucciones, Y_T1);
		buffer->Graphics->DrawImage(R1, 725 - ancho_instrucciones, Y_R1);
		buffer->Graphics->DrawImage(U1, 815 - ancho_instrucciones, Y_U1);
		buffer->Graphics->DrawImage(C1, 905 - ancho_instrucciones, Y_C1);
		buffer->Graphics->DrawImage(C2, 995 - ancho_instrucciones, Y_C2);
		buffer->Graphics->DrawImage(I2, 1080 - ancho_instrucciones, Y_I2);
		buffer->Graphics->DrawImage(O1, 1155 - ancho_instrucciones, Y_O1);
		buffer->Graphics->DrawImage(N2, 1235 - ancho_instrucciones, Y_N2);
		buffer->Graphics->DrawImage(E1, 1312 - ancho_instrucciones, Y_E1);
		buffer->Graphics->DrawImage(S2, 1405 - ancho_instrucciones, Y_S2);


		int caida1 = 4;
		int subida = 2;
		int caida2 = 1;


		if (C_I1 == 1)
		{
			Y_I1 += caida1;
			if (Y_I1 >= 80) { Y_I1 = 80; C_I1 = 2; }
		}
		if (C_I1 == 2)
		{
			Y_I1 -= subida;
			if (Y_I1 <= 50) { Y_I1 = 50; C_I1 = 3; }
		}
		if (C_I1 == 3)
		{
			Y_I1 += caida2;
			if (Y_I1 >= 80) { Y_I1 = 80; C_I1 = 4; }
		}




		if (C_N1 == 1) { Y_N1 += caida1; if (Y_N1 >= 80) { Y_N1 = 80; C_N1 = 2; } }
		if (C_N1 == 2) { Y_N1 -= subida; if (Y_N1 <= 50) { Y_N1 = 50; C_N1 = 3; } }
		if (C_N1 == 3) { Y_N1 += caida2; if (Y_N1 >= 80) { Y_N1 = 80; C_N1 = 4; } }


		if (C_S1 == 1) { Y_S1 += caida1; if (Y_S1 >= 80) { Y_S1 = 80; C_S1 = 2; } }
		else if (C_S1 == 2) { Y_S1 -= subida; if (Y_S1 <= 50) { Y_S1 = 50; C_S1 = 3; } }
		else if (C_S1 == 3) { Y_S1 += caida2; if (Y_S1 >= 80) { Y_S1 = 80; C_S1 = 4; } }


		if (C_T1 == 1) { Y_T1 += caida1; if (Y_T1 >= 80) { Y_T1 = 80; C_T1 = 2; } }
		else if (C_T1 == 2) { Y_T1 -= subida; if (Y_T1 <= 50) { Y_T1 = 50; C_T1 = 3; } }
		else if (C_T1 == 3) { Y_T1 += caida2; if (Y_T1 >= 80) { Y_T1 = 80; C_T1 = 4; } }

		if (C_R1 == 1) { Y_R1 += caida1; if (Y_R1 >= 80) { Y_R1 = 80; C_R1 = 2; } }
		else if (C_R1 == 2) { Y_R1 -= subida; if (Y_R1 <= 50) { Y_R1 = 50; C_R1 = 3; } }
		else if (C_R1 == 3) { Y_R1 += caida2; if (Y_R1 >= 80) { Y_R1 = 80; C_R1 = 4; } }


		if (C_U1 == 1) { Y_U1 += caida1; if (Y_U1 >= 80) { Y_U1 = 80; C_U1 = 2; } }
		else if (C_U1 == 2) { Y_U1 -= subida; if (Y_U1 <= 50) { Y_U1 = 50; C_U1 = 3; } }
		else if (C_U1 == 3) { Y_U1 += caida2; if (Y_U1 >= 80) { Y_U1 = 80; C_U1 = 4; } }


		if (C_C1 == 1) { Y_C1 += caida1; if (Y_C1 >= 80) { Y_C1 = 80; C_C1 = 2; } }
		else if (C_C1 == 2) { Y_C1 -= subida; if (Y_C1 <= 50) { Y_C1 = 50; C_C1 = 3; } }
		else if (C_C1 == 3) { Y_C1 += caida2; if (Y_C1 >= 80) { Y_C1 = 80; C_C1 = 4; } }


		if (C_C2 == 1) { Y_C2 += caida1; if (Y_C2 >= 80) { Y_C2 = 80; C_C2 = 2; } }
		else if (C_C2 == 2) { Y_C2 -= subida; if (Y_C2 <= 50) { Y_C2 = 50; C_C2 = 3; } }
		else if (C_C2 == 3) { Y_C2 += caida2; if (Y_C2 >= 80) { Y_C2 = 80; C_C2 = 4; } }


		if (C_I2 == 1) { Y_I2 += caida1; if (Y_I2 >= 80) { Y_I2 = 80; C_I2 = 2; } }
		else if (C_I2 == 2) { Y_I2 -= subida; if (Y_I2 <= 50) { Y_I2 = 50; C_I2 = 3; } }
		else if (C_I2 == 3) { Y_I2 += caida2; if (Y_I2 >= 80) { Y_I2 = 80; C_I2 = 4; } }


		if (C_O1 == 1) { Y_O1 += caida1; if (Y_O1 >= 80) { Y_O1 = 80; C_O1 = 2; } }
		else if (C_O1 == 2) { Y_O1 -= subida; if (Y_O1 <= 50) { Y_O1 = 50; C_O1 = 3; } }
		else if (C_O1 == 3) { Y_O1 += caida2; if (Y_O1 >= 80) { Y_O1 = 80; C_O1 = 4; } }

		if (C_N2 == 1) { Y_N2 += caida1; if (Y_N2 >= 80) { Y_N2 = 80; C_N2 = 2; } }
		else if (C_N2 == 2) { Y_N2 -= subida; if (Y_N2 <= 50) { Y_N2 = 50; C_N2 = 3; } }
		else if (C_N2 == 3) { Y_N2 += caida2; if (Y_N2 >= 80) { Y_N2 = 80; C_N2 = 4; } }

		if (C_E1 == 1) { Y_E1 += caida1; if (Y_E1 >= 80) { Y_E1 = 80; C_E1 = 2; } }
		else if (C_E1 == 2) { Y_E1 -= subida; if (Y_E1 <= 50) { Y_E1 = 50; C_E1 = 3; } }
		else if (C_E1 == 3) { Y_E1 += caida2; if (Y_E1 >= 80) { Y_E1 = 80; C_E1 = 4; } }

		if (C_S2 == 1) { Y_S2 += caida1; if (Y_S2 >= 80) { Y_S2 = 80; C_S2 = 2; } }
		else if (C_S2 == 2) { Y_S2 -= subida; if (Y_S2 <= 50) { Y_S2 = 50; C_S2 = 3; } }
		else if (C_S2 == 3) { Y_S2 += caida2; if (Y_S2 >= 80) { Y_S2 = 80; C_S2 = 4; } }



		if (Y_I1 == 38)
			C_N1 = 1;
		if (Y_N1 == 38)
			C_S1 = 1;
		if (Y_S1 == 38)
			C_T1 = 1;
		if (Y_T1 == 38)
			C_R1 = 1;
		if (Y_R1 == 38)
			C_U1 = 1;
		if (Y_U1 == 38)
			C_C1 = 1;
		if (Y_C1 == 38)
			C_C2 = 1;
		if (Y_C2 == 38)
			C_I2 = 1;
		if (Y_I2 == 38)
			C_O1 = 1;
		if (Y_O1 == 38)
			C_N2 = 1;
		if (Y_N2 == 38)
			C_E1 = 1;
		if (Y_E1 == 38)
			C_S2 = 1;



		if (C_S2 == 4) {

			InstruccionesUno->Interval = 1000;
			Teclas->mover_tecla(tecla);
			Teclas->mostrar_tecla(buffer->Graphics);
			AlienInstrucciones->mover_alieninstrucciones(tecla);
			AlienInstrucciones->mostrar_alieninstrucciones(buffer->Graphics);



			if (controltecla == 1)
				tecla = 1;

			if (controltecla == 1)
				tecla = 2;
			if (controltecla == 2)
				tecla = 3;
			if (controltecla == 3)
				tecla = 4;
			if (controltecla == 4)
				tecla = 5;
			if (controltecla == 5) {
				controltecla = 1;
				tecla = 1;
				cambioin++;

			}

			controltecla += 1;


			if (cambioin >= 2) {
				escapei1 = true;


			}


		}

		buffer->Render(canvas);
	}

	private: System::Void RespuestaUno_Tick(System::Object^ sender, System::EventArgs^ e) {


		buffer->Graphics->Clear(Color::Black);

		buffer->Graphics->DrawImage(fondopregunta1, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta1->Width, fondopregunta1->Height, GraphicsUnit::Pixel);
		buffer->Graphics->DrawImage(R, 300 - ancho_pregunta, Y_P - 8);
		buffer->Graphics->DrawImage(E, 390 - ancho_pregunta, Y_R - 8);
		buffer->Graphics->DrawImage(S1, 465 - ancho_pregunta, Y_E - 8);
		buffer->Graphics->DrawImage(P, 550 - ancho_pregunta, Y_G - 8);
		buffer->Graphics->DrawImage(Up, 630 - ancho_pregunta, Y_U - 8);
		buffer->Graphics->DrawImage(E, 720 - ancho_pregunta, Y_N - 8);
		buffer->Graphics->DrawImage(S1, 800 - ancho_pregunta, Y_T - 8);
		buffer->Graphics->DrawImage(T, 880 - ancho_pregunta, Y_A - 8);
		buffer->Graphics->DrawImage(Ap, 965 - ancho_pregunta, Y_CERO - 8);
		buffer->Graphics->DrawImage(CERO, 1100 - ancho_pregunta, Y_UNO - 8);
		buffer->Graphics->DrawImage(UNO, 1200 - ancho_pregunta, Y_DOS - 8);


		int caida1 = 4;
		int subida = 2;
		int caida2 = 1;


		if (C_P == 1)
		{
			Y_P += caida1;
			if (Y_P >= 80) { Y_P = 80; C_P = 2; }
		}
		if (C_P == 2)
		{
			Y_P -= subida;
			if (Y_P <= 50) { Y_P = 50; C_P = 3; }
		}
		if (C_P == 3)
		{
			Y_P += caida2;
			if (Y_P >= 80) { Y_P = 80; C_P = 4; }
		}




		if (C_R == 1) { Y_R += caida1; if (Y_R >= 80) { Y_R = 80; C_R = 2; } }
		if (C_R == 2) { Y_R -= subida; if (Y_R <= 50) { Y_R = 50; C_R = 3; } }
		if (C_R == 3) { Y_R += caida2; if (Y_R >= 80) { Y_R = 80; C_R = 4; } }


		if (C_E == 1) { Y_E += caida1; if (Y_E >= 80) { Y_E = 80; C_E = 2; } }
		else if (C_E == 2) { Y_E -= subida; if (Y_E <= 50) { Y_E = 50; C_E = 3; } }
		else if (C_E == 3) { Y_E += caida2; if (Y_E >= 80) { Y_E = 80; C_E = 4; } }


		if (C_G == 1) { Y_G += caida1; if (Y_G >= 80) { Y_G = 80; C_G = 2; } }
		else if (C_G == 2) { Y_G -= subida; if (Y_G <= 50) { Y_G = 50; C_G = 3; } }
		else if (C_G == 3) { Y_G += caida2; if (Y_G >= 80) { Y_G = 80; C_G = 4; } }

		if (C_U == 1) { Y_U += caida1; if (Y_U >= 80) { Y_U = 80; C_U = 2; } }
		else if (C_U == 2) { Y_U -= subida; if (Y_U <= 50) { Y_U = 50; C_U = 3; } }
		else if (C_U == 3) { Y_U += caida2; if (Y_U >= 80) { Y_U = 80; C_U = 4; } }


		if (C_N == 1) { Y_N += caida1; if (Y_N >= 80) { Y_N = 80; C_N = 2; } }
		else if (C_N == 2) { Y_N -= subida; if (Y_N <= 50) { Y_N = 50; C_N = 3; } }
		else if (C_N == 3) { Y_N += caida2; if (Y_N >= 80) { Y_N = 80; C_N = 4; } }


		if (C_T == 1) { Y_T += caida1; if (Y_T >= 80) { Y_T = 80; C_T = 2; } }
		else if (C_T == 2) { Y_T -= subida; if (Y_T <= 50) { Y_T = 50; C_T = 3; } }
		else if (C_T == 3) { Y_T += caida2; if (Y_T >= 80) { Y_T = 80; C_T = 4; } }


		if (C_A == 1) { Y_A += caida1; if (Y_A >= 80) { Y_A = 80; C_A = 2; } }
		else if (C_A == 2) { Y_A -= subida; if (Y_A <= 50) { Y_A = 50; C_A = 3; } }
		else if (C_A == 3) { Y_A += caida2; if (Y_A >= 80) { Y_A = 80; C_A = 4; } }


		if (C_CERO == 1) { Y_CERO += caida1; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 2; } }
		else if (C_CERO == 2) { Y_CERO -= subida; if (Y_CERO <= 50) { Y_CERO = 50; C_CERO = 3; } }
		else if (C_CERO == 3) { Y_CERO += caida2; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 4; } }

		if (C_UNO == 1) { Y_UNO += caida1; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 2; } }
		else if (C_UNO == 2) { Y_UNO -= subida; if (Y_UNO <= 50) { Y_UNO = 50; C_UNO = 3; } }
		else if (C_UNO == 3) { Y_UNO += caida2; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 4; } }

		if (C_DOS == 1) { Y_DOS += caida1; if (Y_DOS >= 80) { Y_DOS = 80; C_DOS = 2; } }
		else if (C_DOS == 2) { Y_DOS -= subida; if (Y_DOS <= 50) { Y_DOS = 50; C_DOS = 3; } }
		else if (C_DOS == 3) { Y_DOS += caida2; if (Y_DOS >= 80) { Y_DOS = 80; C_DOS = 4; } }


		if (Y_P == 38)
			C_R = 1;
		if (Y_R == 38)
			C_E = 1;
		if (Y_E == 38)
			C_G = 1;
		if (Y_G == 38)
			C_U = 1;
		if (Y_U == 38)
			C_N = 1;
		if (Y_N == 38)
			C_T = 1;
		if (Y_T == 38)
			C_A = 1;
		if (Y_A == 38)
			C_CERO = 1;
		if (Y_CERO == 38)
			C_UNO = 1;
		if (Y_UNO == 38)
			C_DOS = 1;



		if (C_DOS == 4) {

			buffer->Graphics->DrawImage(Respuesta1, X_P1 + 30, Y_P1, W_P1, H_P1);

			if (W_P1 < anchooobjetivor && H_P1 < altoobjetivor) {

				X_P1 -= 7.5;
				Y_P1 -= 2.5;

				W_P1 += velocidad * 15;
				H_P1 += velocidad * 5;

			}
			cambio++;


		}

		if (cambio >= 100) {

			escaper1 = true;
			Nave->setXt(800);
		}

		buffer->Render(canvas);





	} //CHECK 

	private: System::Void PreguntaDos_Tick(System::Object^ sender, System::EventArgs^ e) {


		buffer->Graphics->Clear(Color::Black);
		buffer->Graphics->DrawImage(fondopregunta2, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta2->Width, fondopregunta2->Height, GraphicsUnit::Pixel);
		buffer->Graphics->DrawImage(P, 400 - ancho_pregunta, Y_P);
		buffer->Graphics->DrawImage(R, 480 - ancho_pregunta, Y_R);
		buffer->Graphics->DrawImage(E, 565 - ancho_pregunta, Y_E);
		buffer->Graphics->DrawImage(G, 645 - ancho_pregunta, Y_G);
		buffer->Graphics->DrawImage(Up, 725 - ancho_pregunta, Y_U);
		buffer->Graphics->DrawImage(Np, 810 - ancho_pregunta, Y_N);
		buffer->Graphics->DrawImage(T, 890 - ancho_pregunta, Y_T);
		buffer->Graphics->DrawImage(Ap, 975 - ancho_pregunta, Y_A);
		buffer->Graphics->DrawImage(CERO, 1100 - ancho_pregunta, Y_CERO);
		buffer->Graphics->DrawImage(DOS, 1190 - ancho_pregunta, Y_UNO);

		int caida1 = 4;
		int subida = 2;
		int caida2 = 1;


		if (C_P == 1)
		{
			Y_P += caida1;
			if (Y_P >= 80) { Y_P = 80; C_P = 2; }
		}
		if (C_P == 2)
		{
			Y_P -= subida;
			if (Y_P <= 50) { Y_P = 50; C_P = 3; }
		}
		if (C_P == 3)
		{
			Y_P += caida2;
			if (Y_P >= 80) { Y_P = 80; C_P = 4; }
		}




		if (C_R == 1) { Y_R += caida1; if (Y_R >= 80) { Y_R = 80; C_R = 2; } }
		if (C_R == 2) { Y_R -= subida; if (Y_R <= 50) { Y_R = 50; C_R = 3; } }
		if (C_R == 3) { Y_R += caida2; if (Y_R >= 80) { Y_R = 80; C_R = 4; } }


		if (C_E == 1) { Y_E += caida1; if (Y_E >= 80) { Y_E = 80; C_E = 2; } }
		else if (C_E == 2) { Y_E -= subida; if (Y_E <= 50) { Y_E = 50; C_E = 3; } }
		else if (C_E == 3) { Y_E += caida2; if (Y_E >= 80) { Y_E = 80; C_E = 4; } }


		if (C_G == 1) { Y_G += caida1; if (Y_G >= 80) { Y_G = 80; C_G = 2; } }
		else if (C_G == 2) { Y_G -= subida; if (Y_G <= 50) { Y_G = 50; C_G = 3; } }
		else if (C_G == 3) { Y_G += caida2; if (Y_G >= 80) { Y_G = 80; C_G = 4; } }

		if (C_U == 1) { Y_U += caida1; if (Y_U >= 80) { Y_U = 80; C_U = 2; } }
		else if (C_U == 2) { Y_U -= subida; if (Y_U <= 50) { Y_U = 50; C_U = 3; } }
		else if (C_U == 3) { Y_U += caida2; if (Y_U >= 80) { Y_U = 80; C_U = 4; } }


		if (C_N == 1) { Y_N += caida1; if (Y_N >= 80) { Y_N = 80; C_N = 2; } }
		else if (C_N == 2) { Y_N -= subida; if (Y_N <= 50) { Y_N = 50; C_N = 3; } }
		else if (C_N == 3) { Y_N += caida2; if (Y_N >= 80) { Y_N = 80; C_N = 4; } }


		if (C_T == 1) { Y_T += caida1; if (Y_T >= 80) { Y_T = 80; C_T = 2; } }
		else if (C_T == 2) { Y_T -= subida; if (Y_T <= 50) { Y_T = 50; C_T = 3; } }
		else if (C_T == 3) { Y_T += caida2; if (Y_T >= 80) { Y_T = 80; C_T = 4; } }


		if (C_A == 1) { Y_A += caida1; if (Y_A >= 80) { Y_A = 80; C_A = 2; } }
		else if (C_A == 2) { Y_A -= subida; if (Y_A <= 50) { Y_A = 50; C_A = 3; } }
		else if (C_A == 3) { Y_A += caida2; if (Y_A >= 80) { Y_A = 80; C_A = 4; } }


		if (C_CERO == 1) { Y_CERO += caida1; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 2; } }
		else if (C_CERO == 2) { Y_CERO -= subida; if (Y_CERO <= 50) { Y_CERO = 50; C_CERO = 3; } }
		else if (C_CERO == 3) { Y_CERO += caida2; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 4; } }

		if (C_UNO == 1) { Y_UNO += caida1; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 2; } }
		else if (C_UNO == 2) { Y_UNO -= subida; if (Y_UNO <= 50) { Y_UNO = 50; C_UNO = 3; } }
		else if (C_UNO == 3) { Y_UNO += caida2; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 4; } }

		if (Y_P == 38)
			C_R = 1;
		if (Y_R == 38)
			C_E = 1;
		if (Y_E == 38)
			C_G = 1;
		if (Y_G == 38)
			C_U = 1;
		if (Y_U == 38)
			C_N = 1;
		if (Y_N == 38)
			C_T = 1;
		if (Y_T == 38)
			C_A = 1;
		if (Y_A == 38)
			C_CERO = 1;
		if (Y_CERO == 38)
			C_UNO = 1;


		if (C_UNO == 4) {

			buffer->Graphics->DrawImage(Pregunta2, X_P1, Y_P1 + 35, W_P1, H_P1);

			if (W_P1 < anchooobjetivo_pregunta2 && H_P1 < anchooobjetivo_pregunta2) {

				X_P1 -= 8;
				Y_P1 -= 4.5;

				W_P1 += velocidad * 16;
				H_P1 += velocidad * 9;

			}
			cambio++;


		}

		if (cambio == 100) {

			escapep2 = true;


		}

		buffer->Render(canvas);




	}

	private: System::Void RespuestaDos_Tick(System::Object^ sender, System::EventArgs^ e) {


		buffer->Graphics->Clear(Color::Black);

		buffer->Graphics->DrawImage(fondopregunta2, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta2->Width, fondopregunta2->Height, GraphicsUnit::Pixel);
		buffer->Graphics->DrawImage(R, 300 - ancho_pregunta, Y_P - 8);
		buffer->Graphics->DrawImage(E, 390 - ancho_pregunta, Y_R - 8);
		buffer->Graphics->DrawImage(S1, 465 - ancho_pregunta, Y_E - 8);
		buffer->Graphics->DrawImage(P, 550 - ancho_pregunta, Y_G - 8);
		buffer->Graphics->DrawImage(Up, 630 - ancho_pregunta, Y_U - 8);
		buffer->Graphics->DrawImage(E, 720 - ancho_pregunta, Y_N - 8);
		buffer->Graphics->DrawImage(S1, 800 - ancho_pregunta, Y_T - 8);
		buffer->Graphics->DrawImage(T, 880 - ancho_pregunta, Y_A - 8);
		buffer->Graphics->DrawImage(Ap, 965 - ancho_pregunta, Y_CERO - 8);
		buffer->Graphics->DrawImage(CERO, 1100 - ancho_pregunta, Y_UNO - 8);
		buffer->Graphics->DrawImage(DOS, 1185 - ancho_pregunta, Y_DOS - 8);

		int caida1 = 4;
		int subida = 2;
		int caida2 = 1;


		if (C_P == 1)
		{
			Y_P += caida1;
			if (Y_P >= 80) { Y_P = 80; C_P = 2; }
		}
		if (C_P == 2)
		{
			Y_P -= subida;
			if (Y_P <= 50) { Y_P = 50; C_P = 3; }
		}
		if (C_P == 3)
		{
			Y_P += caida2;
			if (Y_P >= 80) { Y_P = 80; C_P = 4; }
		}




		if (C_R == 1) { Y_R += caida1; if (Y_R >= 80) { Y_R = 80; C_R = 2; } }
		if (C_R == 2) { Y_R -= subida; if (Y_R <= 50) { Y_R = 50; C_R = 3; } }
		if (C_R == 3) { Y_R += caida2; if (Y_R >= 80) { Y_R = 80; C_R = 4; } }


		if (C_E == 1) { Y_E += caida1; if (Y_E >= 80) { Y_E = 80; C_E = 2; } }
		else if (C_E == 2) { Y_E -= subida; if (Y_E <= 50) { Y_E = 50; C_E = 3; } }
		else if (C_E == 3) { Y_E += caida2; if (Y_E >= 80) { Y_E = 80; C_E = 4; } }


		if (C_G == 1) { Y_G += caida1; if (Y_G >= 80) { Y_G = 80; C_G = 2; } }
		else if (C_G == 2) { Y_G -= subida; if (Y_G <= 50) { Y_G = 50; C_G = 3; } }
		else if (C_G == 3) { Y_G += caida2; if (Y_G >= 80) { Y_G = 80; C_G = 4; } }

		if (C_U == 1) { Y_U += caida1; if (Y_U >= 80) { Y_U = 80; C_U = 2; } }
		else if (C_U == 2) { Y_U -= subida; if (Y_U <= 50) { Y_U = 50; C_U = 3; } }
		else if (C_U == 3) { Y_U += caida2; if (Y_U >= 80) { Y_U = 80; C_U = 4; } }


		if (C_N == 1) { Y_N += caida1; if (Y_N >= 80) { Y_N = 80; C_N = 2; } }
		else if (C_N == 2) { Y_N -= subida; if (Y_N <= 50) { Y_N = 50; C_N = 3; } }
		else if (C_N == 3) { Y_N += caida2; if (Y_N >= 80) { Y_N = 80; C_N = 4; } }


		if (C_T == 1) { Y_T += caida1; if (Y_T >= 80) { Y_T = 80; C_T = 2; } }
		else if (C_T == 2) { Y_T -= subida; if (Y_T <= 50) { Y_T = 50; C_T = 3; } }
		else if (C_T == 3) { Y_T += caida2; if (Y_T >= 80) { Y_T = 80; C_T = 4; } }


		if (C_A == 1) { Y_A += caida1; if (Y_A >= 80) { Y_A = 80; C_A = 2; } }
		else if (C_A == 2) { Y_A -= subida; if (Y_A <= 50) { Y_A = 50; C_A = 3; } }
		else if (C_A == 3) { Y_A += caida2; if (Y_A >= 80) { Y_A = 80; C_A = 4; } }


		if (C_CERO == 1) { Y_CERO += caida1; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 2; } }
		else if (C_CERO == 2) { Y_CERO -= subida; if (Y_CERO <= 50) { Y_CERO = 50; C_CERO = 3; } }
		else if (C_CERO == 3) { Y_CERO += caida2; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 4; } }


		if (C_UNO == 1) { Y_UNO += caida1; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 2; } }
		else if (C_UNO == 2) { Y_UNO -= subida; if (Y_UNO <= 50) { Y_UNO = 50; C_UNO = 3; } }
		else if (C_UNO == 3) { Y_UNO += caida2; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 4; } }

		if (C_DOS == 1) { Y_DOS += caida1; if (Y_DOS >= 80) { Y_DOS = 80; C_DOS = 2; } }
		else if (C_DOS == 2) { Y_DOS -= subida; if (Y_DOS <= 50) { Y_DOS = 50; C_DOS = 3; } }
		else if (C_DOS == 3) { Y_DOS += caida2; if (Y_DOS >= 80) { Y_DOS = 80; C_DOS = 4; } }


		if (Y_P == 38)
			C_R = 1;
		if (Y_R == 38)
			C_E = 1;
		if (Y_E == 38)
			C_G = 1;
		if (Y_G == 38)
			C_U = 1;
		if (Y_U == 38)
			C_N = 1;
		if (Y_N == 38)
			C_T = 1;
		if (Y_T == 38)
			C_A = 1;
		if (Y_A == 38)
			C_CERO = 1;
		if (Y_CERO == 38)
			C_UNO = 1;
		if (Y_UNO == 38)
			C_DOS = 1;


		if (C_DOS == 4) {

			buffer->Graphics->DrawImage(Respuesta2, X_P1 + 20, Y_P1, W_P1, H_P1);

			if (W_P1 < anchooobjetivor && H_P1 < altoobjetivor) {

				X_P1 -= 7.5;
				Y_P1 -= 2.5;

				W_P1 += velocidad * 15;
				H_P1 += velocidad * 5;

			}
			cambio++;


		}

		if (cambio >= 100) {

			escaper2 = true;


		}

		buffer->Render(canvas);





	}
	private: System::Void PreguntaTres_Tick(System::Object^ sender, System::EventArgs^ e) {


		buffer->Graphics->Clear(Color::Black);
		buffer->Graphics->DrawImage(fondopregunta3, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta3->Width, fondopregunta3->Height, GraphicsUnit::Pixel);
		buffer->Graphics->DrawImage(P, 400 - ancho_pregunta, Y_P);
		buffer->Graphics->DrawImage(R, 480 - ancho_pregunta, Y_R);
		buffer->Graphics->DrawImage(E, 565 - ancho_pregunta, Y_E);
		buffer->Graphics->DrawImage(G, 645 - ancho_pregunta, Y_G);
		buffer->Graphics->DrawImage(Up, 725 - ancho_pregunta, Y_U);
		buffer->Graphics->DrawImage(Np, 810 - ancho_pregunta, Y_N);
		buffer->Graphics->DrawImage(T, 890 - ancho_pregunta, Y_T);
		buffer->Graphics->DrawImage(Ap, 975 - ancho_pregunta, Y_A);
		buffer->Graphics->DrawImage(CERO, 1100 - ancho_pregunta, Y_CERO);
		buffer->Graphics->DrawImage(TRES, 1190 - ancho_pregunta, Y_UNO);

		int caida1 = 4;
		int subida = 2;
		int caida2 = 1;


		if (C_P == 1)
		{
			Y_P += caida1;
			if (Y_P >= 80) { Y_P = 80; C_P = 2; }
		}
		if (C_P == 2)
		{
			Y_P -= subida;
			if (Y_P <= 50) { Y_P = 50; C_P = 3; }
		}
		if (C_P == 3)
		{
			Y_P += caida2;
			if (Y_P >= 80) { Y_P = 80; C_P = 4; }
		}




		if (C_R == 1) { Y_R += caida1; if (Y_R >= 80) { Y_R = 80; C_R = 2; } }
		if (C_R == 2) { Y_R -= subida; if (Y_R <= 50) { Y_R = 50; C_R = 3; } }
		if (C_R == 3) { Y_R += caida2; if (Y_R >= 80) { Y_R = 80; C_R = 4; } }


		if (C_E == 1) { Y_E += caida1; if (Y_E >= 80) { Y_E = 80; C_E = 2; } }
		else if (C_E == 2) { Y_E -= subida; if (Y_E <= 50) { Y_E = 50; C_E = 3; } }
		else if (C_E == 3) { Y_E += caida2; if (Y_E >= 80) { Y_E = 80; C_E = 4; } }


		if (C_G == 1) { Y_G += caida1; if (Y_G >= 80) { Y_G = 80; C_G = 2; } }
		else if (C_G == 2) { Y_G -= subida; if (Y_G <= 50) { Y_G = 50; C_G = 3; } }
		else if (C_G == 3) { Y_G += caida2; if (Y_G >= 80) { Y_G = 80; C_G = 4; } }

		if (C_U == 1) { Y_U += caida1; if (Y_U >= 80) { Y_U = 80; C_U = 2; } }
		else if (C_U == 2) { Y_U -= subida; if (Y_U <= 50) { Y_U = 50; C_U = 3; } }
		else if (C_U == 3) { Y_U += caida2; if (Y_U >= 80) { Y_U = 80; C_U = 4; } }


		if (C_N == 1) { Y_N += caida1; if (Y_N >= 80) { Y_N = 80; C_N = 2; } }
		else if (C_N == 2) { Y_N -= subida; if (Y_N <= 50) { Y_N = 50; C_N = 3; } }
		else if (C_N == 3) { Y_N += caida2; if (Y_N >= 80) { Y_N = 80; C_N = 4; } }


		if (C_T == 1) { Y_T += caida1; if (Y_T >= 80) { Y_T = 80; C_T = 2; } }
		else if (C_T == 2) { Y_T -= subida; if (Y_T <= 50) { Y_T = 50; C_T = 3; } }
		else if (C_T == 3) { Y_T += caida2; if (Y_T >= 80) { Y_T = 80; C_T = 4; } }


		if (C_A == 1) { Y_A += caida1; if (Y_A >= 80) { Y_A = 80; C_A = 2; } }
		else if (C_A == 2) { Y_A -= subida; if (Y_A <= 50) { Y_A = 50; C_A = 3; } }
		else if (C_A == 3) { Y_A += caida2; if (Y_A >= 80) { Y_A = 80; C_A = 4; } }


		if (C_CERO == 1) { Y_CERO += caida1; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 2; } }
		else if (C_CERO == 2) { Y_CERO -= subida; if (Y_CERO <= 50) { Y_CERO = 50; C_CERO = 3; } }
		else if (C_CERO == 3) { Y_CERO += caida2; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 4; } }

		if (C_UNO == 1) { Y_UNO += caida1; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 2; } }
		else if (C_UNO == 2) { Y_UNO -= subida; if (Y_UNO <= 50) { Y_UNO = 50; C_UNO = 3; } }
		else if (C_UNO == 3) { Y_UNO += caida2; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 4; } }

		if (Y_P == 38)
			C_R = 1;
		if (Y_R == 38)
			C_E = 1;
		if (Y_E == 38)
			C_G = 1;
		if (Y_G == 38)
			C_U = 1;
		if (Y_U == 38)
			C_N = 1;
		if (Y_N == 38)
			C_T = 1;
		if (Y_T == 38)
			C_A = 1;
		if (Y_A == 38)
			C_CERO = 1;
		if (Y_CERO == 38)
			C_UNO = 1;


		if (C_UNO == 4) {

			buffer->Graphics->DrawImage(Pregunta3, X_P1 + 10, Y_P1 + 35, W_P1, H_P1);

			if (W_P1 < anchooobjetivo_pregunta3 && H_P1 < altoobjetivo_pregunta3) {

				X_P1 -= 7.5;
				Y_P1 -= 2.5;

				W_P1 += velocidad * 15;
				H_P1 += velocidad * 5;

			}
			cambio++;


		}

		if (cambio >= 100) {

			escapep3 = true;


		}

		buffer->Render(canvas);







	}
	private: System::Void RespuestaTres_Tick(System::Object^ sender, System::EventArgs^ e) {


		buffer->Graphics->Clear(Color::Black);

		buffer->Graphics->DrawImage(fondopregunta3, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta3->Width, fondopregunta3->Height, GraphicsUnit::Pixel);
		buffer->Graphics->DrawImage(R, 300 - ancho_pregunta, Y_P - 8);
		buffer->Graphics->DrawImage(E, 390 - ancho_pregunta, Y_R - 8);
		buffer->Graphics->DrawImage(S1, 465 - ancho_pregunta, Y_E - 8);
		buffer->Graphics->DrawImage(P, 550 - ancho_pregunta, Y_G - 8);
		buffer->Graphics->DrawImage(Up, 630 - ancho_pregunta, Y_U - 8);
		buffer->Graphics->DrawImage(E, 720 - ancho_pregunta, Y_N - 8);
		buffer->Graphics->DrawImage(S1, 800 - ancho_pregunta, Y_T - 8);
		buffer->Graphics->DrawImage(T, 880 - ancho_pregunta, Y_A - 8);
		buffer->Graphics->DrawImage(Ap, 965 - ancho_pregunta, Y_CERO - 8);
		buffer->Graphics->DrawImage(CERO, 1100 - ancho_pregunta, Y_UNO - 8);
		buffer->Graphics->DrawImage(TRES, 1185 - ancho_pregunta, Y_DOS - 8);

		int caida1 = 4;
		int subida = 2;
		int caida2 = 1;


		if (C_P == 1)
		{
			Y_P += caida1;
			if (Y_P >= 80) { Y_P = 80; C_P = 2; }
		}
		if (C_P == 2)
		{
			Y_P -= subida;
			if (Y_P <= 50) { Y_P = 50; C_P = 3; }
		}
		if (C_P == 3)
		{
			Y_P += caida2;
			if (Y_P >= 80) { Y_P = 80; C_P = 4; }
		}




		if (C_R == 1) { Y_R += caida1; if (Y_R >= 80) { Y_R = 80; C_R = 2; } }
		if (C_R == 2) { Y_R -= subida; if (Y_R <= 50) { Y_R = 50; C_R = 3; } }
		if (C_R == 3) { Y_R += caida2; if (Y_R >= 80) { Y_R = 80; C_R = 4; } }


		if (C_E == 1) { Y_E += caida1; if (Y_E >= 80) { Y_E = 80; C_E = 2; } }
		else if (C_E == 2) { Y_E -= subida; if (Y_E <= 50) { Y_E = 50; C_E = 3; } }
		else if (C_E == 3) { Y_E += caida2; if (Y_E >= 80) { Y_E = 80; C_E = 4; } }


		if (C_G == 1) { Y_G += caida1; if (Y_G >= 80) { Y_G = 80; C_G = 2; } }
		else if (C_G == 2) { Y_G -= subida; if (Y_G <= 50) { Y_G = 50; C_G = 3; } }
		else if (C_G == 3) { Y_G += caida2; if (Y_G >= 80) { Y_G = 80; C_G = 4; } }

		if (C_U == 1) { Y_U += caida1; if (Y_U >= 80) { Y_U = 80; C_U = 2; } }
		else if (C_U == 2) { Y_U -= subida; if (Y_U <= 50) { Y_U = 50; C_U = 3; } }
		else if (C_U == 3) { Y_U += caida2; if (Y_U >= 80) { Y_U = 80; C_U = 4; } }


		if (C_N == 1) { Y_N += caida1; if (Y_N >= 80) { Y_N = 80; C_N = 2; } }
		else if (C_N == 2) { Y_N -= subida; if (Y_N <= 50) { Y_N = 50; C_N = 3; } }
		else if (C_N == 3) { Y_N += caida2; if (Y_N >= 80) { Y_N = 80; C_N = 4; } }


		if (C_T == 1) { Y_T += caida1; if (Y_T >= 80) { Y_T = 80; C_T = 2; } }
		else if (C_T == 2) { Y_T -= subida; if (Y_T <= 50) { Y_T = 50; C_T = 3; } }
		else if (C_T == 3) { Y_T += caida2; if (Y_T >= 80) { Y_T = 80; C_T = 4; } }


		if (C_A == 1) { Y_A += caida1; if (Y_A >= 80) { Y_A = 80; C_A = 2; } }
		else if (C_A == 2) { Y_A -= subida; if (Y_A <= 50) { Y_A = 50; C_A = 3; } }
		else if (C_A == 3) { Y_A += caida2; if (Y_A >= 80) { Y_A = 80; C_A = 4; } }


		if (C_CERO == 1) { Y_CERO += caida1; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 2; } }
		else if (C_CERO == 2) { Y_CERO -= subida; if (Y_CERO <= 50) { Y_CERO = 50; C_CERO = 3; } }
		else if (C_CERO == 3) { Y_CERO += caida2; if (Y_CERO >= 80) { Y_CERO = 80; C_CERO = 4; } }


		if (C_UNO == 1) { Y_UNO += caida1; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 2; } }
		else if (C_UNO == 2) { Y_UNO -= subida; if (Y_UNO <= 50) { Y_UNO = 50; C_UNO = 3; } }
		else if (C_UNO == 3) { Y_UNO += caida2; if (Y_UNO >= 80) { Y_UNO = 80; C_UNO = 4; } }

		if (C_DOS == 1) { Y_DOS += caida1; if (Y_DOS >= 80) { Y_DOS = 80; C_DOS = 2; } }
		else if (C_DOS == 2) { Y_DOS -= subida; if (Y_DOS <= 50) { Y_DOS = 50; C_DOS = 3; } }
		else if (C_DOS == 3) { Y_DOS += caida2; if (Y_DOS >= 80) { Y_DOS = 80; C_DOS = 4; } }


		if (Y_P == 38)
			C_R = 1;
		if (Y_R == 38)
			C_E = 1;
		if (Y_E == 38)
			C_G = 1;
		if (Y_G == 38)
			C_U = 1;
		if (Y_U == 38)
			C_N = 1;
		if (Y_N == 38)
			C_T = 1;
		if (Y_T == 38)
			C_A = 1;
		if (Y_A == 38)
			C_CERO = 1;
		if (Y_CERO == 38)
			C_UNO = 1;
		if (Y_UNO == 38)
			C_DOS = 1;


		if (C_DOS == 4) {

			buffer->Graphics->DrawImage(Respuesta3, X_P1 + 20, Y_P1, W_P1, H_P1);

			if (W_P1 < anchooobjetivorespuesta2 && H_P1 < altoobjetivorespuesta2) {

				X_P1 -= 7.5;
				Y_P1 -= 2.5;

				W_P1 += velocidad * 15;
				H_P1 += velocidad * 5;

			}
			cambio++;


		}

		if (cambio >= 100) {

			RespuestaTres->Enabled = false;


			C_P = 1;
			C_R = 0;
			C_E = 0;
			C_G = 0;
			C_U = 0;
			C_N = 0;
			C_T = 0;
			C_A = 0;
			C_CERO = 0;
			C_UNO = 0;
			C_DOS = 0;
			C_I1 = 0;
			C_N1 = 0;
			C_S1 = 0;
			C_T1 = 0;
			C_R1 = 0;
			C_U1 = 0;
			C_C1 = 0;
			C_C2 = 0;
			C_I2 = 0;
			C_O1 = 0;
			C_N2 = 0;
			C_E1 = 0;
			C_S2 = 0;
			Y_P = 10;
			Y_R = 10;
			Y_E = 10;
			Y_G = 10;
			Y_U = 10;
			Y_N = 10;
			Y_T = 10;
			Y_A = 10;
			Y_CERO = 10;
			Y_UNO = 10;
			Y_DOS = 10;
			cambio = 0;
			X_P1 = 700;
			Y_P1 = 450;
			W_P1 = 10;
			H_P1 = 10;
		}

		buffer->Render(g);



	}
	private: System::Void InstruccionesDos_Tick(System::Object^ sender, System::EventArgs^ e) {

		buffer->Graphics->Clear(Color::Black);
		buffer->Graphics->DrawImage(fondopregunta3, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta3->Width, fondopregunta3->Height, GraphicsUnit::Pixel);

		buffer->Graphics->DrawImage(I1, 400 - ancho_instrucciones, Y_I1);
		buffer->Graphics->DrawImage(N1, 477 - ancho_instrucciones, Y_N1);
		buffer->Graphics->DrawImage(S1, 555 - ancho_instrucciones, Y_S1);
		buffer->Graphics->DrawImage(T1, 635 - ancho_instrucciones, Y_T1);
		buffer->Graphics->DrawImage(R1, 725 - ancho_instrucciones, Y_R1);
		buffer->Graphics->DrawImage(U1, 815 - ancho_instrucciones, Y_U1);
		buffer->Graphics->DrawImage(C1, 905 - ancho_instrucciones, Y_C1);
		buffer->Graphics->DrawImage(C2, 995 - ancho_instrucciones, Y_C2);
		buffer->Graphics->DrawImage(I2, 1080 - ancho_instrucciones, Y_I2);
		buffer->Graphics->DrawImage(O1, 1155 - ancho_instrucciones, Y_O1);
		buffer->Graphics->DrawImage(N2, 1235 - ancho_instrucciones, Y_N2);
		buffer->Graphics->DrawImage(E1, 1312 - ancho_instrucciones, Y_E1);
		buffer->Graphics->DrawImage(S2, 1405 - ancho_instrucciones, Y_S2);


		int caida1 = 4;
		int subida = 2;
		int caida2 = 1;


		if (C_I1 == 1)
		{
			Y_I1 += caida1;
			if (Y_I1 >= 80) { Y_I1 = 80; C_I1 = 2; }
		}
		if (C_I1 == 2)
		{
			Y_I1 -= subida;
			if (Y_I1 <= 50) { Y_I1 = 50; C_I1 = 3; }
		}
		if (C_I1 == 3)
		{
			Y_I1 += caida2;
			if (Y_I1 >= 80) { Y_I1 = 80; C_I1 = 4; }
		}




		if (C_N1 == 1) { Y_N1 += caida1; if (Y_N1 >= 80) { Y_N1 = 80; C_N1 = 2; } }
		if (C_N1 == 2) { Y_N1 -= subida; if (Y_N1 <= 50) { Y_N1 = 50; C_N1 = 3; } }
		if (C_N1 == 3) { Y_N1 += caida2; if (Y_N1 >= 80) { Y_N1 = 80; C_N1 = 4; } }


		if (C_S1 == 1) { Y_S1 += caida1; if (Y_S1 >= 80) { Y_S1 = 80; C_S1 = 2; } }
		else if (C_S1 == 2) { Y_S1 -= subida; if (Y_S1 <= 50) { Y_S1 = 50; C_S1 = 3; } }
		else if (C_S1 == 3) { Y_S1 += caida2; if (Y_S1 >= 80) { Y_S1 = 80; C_S1 = 4; } }


		if (C_T1 == 1) { Y_T1 += caida1; if (Y_T1 >= 80) { Y_T1 = 80; C_T1 = 2; } }
		else if (C_T1 == 2) { Y_T1 -= subida; if (Y_T1 <= 50) { Y_T1 = 50; C_T1 = 3; } }
		else if (C_T1 == 3) { Y_T1 += caida2; if (Y_T1 >= 80) { Y_T1 = 80; C_T1 = 4; } }

		if (C_R1 == 1) { Y_R1 += caida1; if (Y_R1 >= 80) { Y_R1 = 80; C_R1 = 2; } }
		else if (C_R1 == 2) { Y_R1 -= subida; if (Y_R1 <= 50) { Y_R1 = 50; C_R1 = 3; } }
		else if (C_R1 == 3) { Y_R1 += caida2; if (Y_R1 >= 80) { Y_R1 = 80; C_R1 = 4; } }


		if (C_U1 == 1) { Y_U1 += caida1; if (Y_U1 >= 80) { Y_U1 = 80; C_U1 = 2; } }
		else if (C_U1 == 2) { Y_U1 -= subida; if (Y_U1 <= 50) { Y_U1 = 50; C_U1 = 3; } }
		else if (C_U1 == 3) { Y_U1 += caida2; if (Y_U1 >= 80) { Y_U1 = 80; C_U1 = 4; } }


		if (C_C1 == 1) { Y_C1 += caida1; if (Y_C1 >= 80) { Y_C1 = 80; C_C1 = 2; } }
		else if (C_C1 == 2) { Y_C1 -= subida; if (Y_C1 <= 50) { Y_C1 = 50; C_C1 = 3; } }
		else if (C_C1 == 3) { Y_C1 += caida2; if (Y_C1 >= 80) { Y_C1 = 80; C_C1 = 4; } }


		if (C_C2 == 1) { Y_C2 += caida1; if (Y_C2 >= 80) { Y_C2 = 80; C_C2 = 2; } }
		else if (C_C2 == 2) { Y_C2 -= subida; if (Y_C2 <= 50) { Y_C2 = 50; C_C2 = 3; } }
		else if (C_C2 == 3) { Y_C2 += caida2; if (Y_C2 >= 80) { Y_C2 = 80; C_C2 = 4; } }


		if (C_I2 == 1) { Y_I2 += caida1; if (Y_I2 >= 80) { Y_I2 = 80; C_I2 = 2; } }
		else if (C_I2 == 2) { Y_I2 -= subida; if (Y_I2 <= 50) { Y_I2 = 50; C_I2 = 3; } }
		else if (C_I2 == 3) { Y_I2 += caida2; if (Y_I2 >= 80) { Y_I2 = 80; C_I2 = 4; } }


		if (C_O1 == 1) { Y_O1 += caida1; if (Y_O1 >= 80) { Y_O1 = 80; C_O1 = 2; } }
		else if (C_O1 == 2) { Y_O1 -= subida; if (Y_O1 <= 50) { Y_O1 = 50; C_O1 = 3; } }
		else if (C_O1 == 3) { Y_O1 += caida2; if (Y_O1 >= 80) { Y_O1 = 80; C_O1 = 4; } }

		if (C_N2 == 1) { Y_N2 += caida1; if (Y_N2 >= 80) { Y_N2 = 80; C_N2 = 2; } }
		else if (C_N2 == 2) { Y_N2 -= subida; if (Y_N2 <= 50) { Y_N2 = 50; C_N2 = 3; } }
		else if (C_N2 == 3) { Y_N2 += caida2; if (Y_N2 >= 80) { Y_N2 = 80; C_N2 = 4; } }

		if (C_E1 == 1) { Y_E1 += caida1; if (Y_E1 >= 80) { Y_E1 = 80; C_E1 = 2; } }
		else if (C_E1 == 2) { Y_E1 -= subida; if (Y_E1 <= 50) { Y_E1 = 50; C_E1 = 3; } }
		else if (C_E1 == 3) { Y_E1 += caida2; if (Y_E1 >= 80) { Y_E1 = 80; C_E1 = 4; } }

		if (C_S2 == 1) { Y_S2 += caida1; if (Y_S2 >= 80) { Y_S2 = 80; C_S2 = 2; } }
		else if (C_S2 == 2) { Y_S2 -= subida; if (Y_S2 <= 50) { Y_S2 = 50; C_S2 = 3; } }
		else if (C_S2 == 3) { Y_S2 += caida2; if (Y_S2 >= 80) { Y_S2 = 80; C_S2 = 4; } }



		if (Y_I1 == 38)
			C_N1 = 1;
		if (Y_N1 == 38)
			C_S1 = 1;
		if (Y_S1 == 38)
			C_T1 = 1;
		if (Y_T1 == 38)
			C_R1 = 1;
		if (Y_R1 == 38)
			C_U1 = 1;
		if (Y_U1 == 38)
			C_C1 = 1;
		if (Y_C1 == 38)
			C_C2 = 1;
		if (Y_C2 == 38)
			C_I2 = 1;
		if (Y_I2 == 38)
			C_O1 = 1;
		if (Y_O1 == 38)
			C_N2 = 1;
		if (Y_N2 == 38)
			C_E1 = 1;
		if (Y_E1 == 38)
			C_S2 = 1;








		//---------------------------------------------------------

		if (C_S2 == 4) {

			if (!escapei2_1)
			{


				InstruccionesDos->Interval = 1000;
				Teclas->mover_tecla(tecla);
				Teclas->mostrar_tecla(buffer->Graphics);
				SteveInstrucciones->mover_alieninstrucciones(tecla);
				SteveInstrucciones->mostrar_alieninstrucciones(buffer->Graphics);



				if (controltecla == 1)
					tecla = 1;

				if (controltecla == 1)
					tecla = 2;
				if (controltecla == 2)
					tecla = 3;
				if (controltecla == 3)
					tecla = 4;
				if (controltecla == 4)
					tecla = 5;
				if (controltecla == 5) {
					controltecla = 1;
					tecla = 1;
					cambioin++;

				}

				controltecla += 1;



			}



			if (cambioin == 2)

				escapei2 = true;






			if (escapei2_1) {


				Teclas->mover_teclaD(tecla);
				Teclas->mostrar_tecla(buffer->Graphics);
				MiniPekkaInstrucciones->mover_alieninstrucciones(tecla);
				MiniPekkaInstrucciones->mostrar_alieninstrucciones(buffer->Graphics);



				if (controltecla == 1)
					tecla = 1;

				if (controltecla == 1)
					tecla = 2;
				if (controltecla == 2)
					tecla = 3;
				if (controltecla == 3)
					tecla = 4;
				if (controltecla == 4)
					tecla = 5;
				if (controltecla == 5) {
					controltecla = 0;
					tecla = 1;
					cambioin++;

				}

				controltecla += 1;


				if (cambioin >= 2)
					escapei2_2 = true;




			}

		}



		buffer->Render(canvas);




	}
	private: System::Void CargaDos_Tick(System::Object^ sender, System::EventArgs^ e) {


		buffer->Graphics->Clear(Color::Black);

		buffer->Graphics->DrawImage(Carga2, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, Carga2->Width, Carga2->Height, GraphicsUnit::Pixel);





		Cargas->mover_imagen(porcentajes);
		Cargas->mostrar_imagen(buffer->Graphics);


		Nave->mostrar_nave(buffer->Graphics);
		Nave->mover_nave(tecla);



		xcontrol += 50;
		navecontrol += 30;


		if (xcontrol == 150)
		{
			xcontrol = 0;

			porcentajes++;

		}

		if (navecontrol == 30) {

			tecla++;
			navecontrol = 0;
		}

		if (tecla == 11)
			tecla = 1;


		if (porcentajes == 10)
		{
			CargaDos->Enabled = false;
			PreguntaDos->Enabled = true;
			porcentajes = 1;
			tecla = 1;
			navecontrol = 0;
			xcontrol = 0;
		}


		buffer->Render(canvas);


	}
	private: System::Void CargaTres_Tick(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::Black);

		buffer->Graphics->DrawImage(Carga3, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, Carga3->Width, Carga3->Height, GraphicsUnit::Pixel);





		Cargas->mover_imagen(porcentajes);
		Cargas->mostrar_imagen(buffer->Graphics);


		Nave->mostrar_nave(buffer->Graphics);
		Nave->mover_nave(tecla);

		xcontrol += 50;
		navecontrol += 30;


		if (xcontrol == 150)
		{
			xcontrol = 0;

			porcentajes++;

		}

		if (navecontrol == 30) {

			tecla++;
			navecontrol = 0;
		}

		if (tecla == 11)
			tecla = 1;


		if (porcentajes == 10)
		{
			CargaTres->Enabled = false;
			PreguntaTres->Enabled = true;
			porcentajes = 1;
			tecla = 1;
			navecontrol = 0;
			xcontrol = 0;
		}




		buffer->Render(canvas);




	}


		   private: System::Void GameOver_Tick(System::Object^ sender, System::EventArgs^ e) {


			   canvas = this->CreateGraphics();
			   BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			   BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);

			   contadorFondo++;
			   if (contadorFondo % 2 == 0) {
				   usarFondo1 = !usarFondo1;
			   }

			   if (usarFondo1)
			   {
				   buffer->Graphics->DrawImage(fondoGO, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height));
			   }
			   else
				   buffer->Graphics->DrawImage(fondoGO1, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height));




			   contadorTipeo++;
			   if (contadorTipeo == 5) { l1 = true; System::Console::Beep(900, 20); }
			   if (contadorTipeo == 10) { l2 = true; System::Console::Beep(900, 20); }
			   if (contadorTipeo == 15) { l3 = true; System::Console::Beep(900, 20); }
			   if (contadorTipeo == 20) { l4 = true; System::Console::Beep(900, 20); }
			   if (contadorTipeo == 25) { l5 = true; System::Console::Beep(900, 20); }
			   if (contadorTipeo == 30) { l6 = true; System::Console::Beep(900, 20); }
			   if (contadorTipeo == 35) { l7 = true; System::Console::Beep(900, 20); }
			   if (contadorTipeo == 40) { l8 = true; System::Console::Beep(900, 20); }
			   if (contadorTipeo == 40) { l8 = true; System::Console::Beep(900, 20); }
			   if (contadorTipeo == 45) { b9 = true; System::Console::Beep(900, 20); }






			   if (contadorFondo < 12) {

				   buffer->Graphics->DrawImage(go, 650, 420);

			   }
			   else { buffer->Graphics->DrawImage(P_go, 650, 420); }



			   if (l1) buffer->Graphics->DrawImage(_G, 450, 100);
			   if (l2) buffer->Graphics->DrawImage(_A, 520, 102);
			   if (l3) buffer->Graphics->DrawImage(_M, 590, 103);
			   if (l4) buffer->Graphics->DrawImage(_E_, 660, 106);

			   if (l5) buffer->Graphics->DrawImage(_O, 790, 100);
			   if (l6) buffer->Graphics->DrawImage(_V, 860, 100);
			   if (l7) buffer->Graphics->DrawImage(_E1_, 930, 100 + 1);
			   if (l8) {
				   buffer->Graphics->DrawImage(_R, 1000, 100 + 2);



			   }
			   if (b9) {
				   buffer->Graphics->DrawImage(continua, 560, 240);
				   this->BtnSi->Visible = true;
				   this->BtnNo->Visible = true;

			   }
			   buffer->Render(canvas);
			   delete buffer;
			   delete espacio_para_buffer;
			   delete canvas;





		   }
	private: System::Void BtnSi_Click(System::Object^ sender, System::EventArgs^ e) {

		GameOver->Enabled = false;
		BtnSi->Visible = false;
		BtnNo->Visible = false;


		contadorFondo = 0;
		contadorTipeo = 0;

		l1 = l2 = l3 = l4 = false;
		l5 = l6 = l7 = l8 = false;
		b9 = false;

		usarFondo1 = true;

		Alien->setVidas(3);
		Alien->setX(50);
		Alien->setY(300);

		pelotas->Clear();
		contador_pelotas = 0;

		if (nivel_actual == 1) {
			Mundo1->Enabled = true;
		}
		else if (nivel_actual == 2) {
			Mundo2->Enabled = true;
		}
	}

private: System::Void BtnNo_Click(System::Object^ sender, System::EventArgs^ e) {


	Application::Exit();


}
	};
}