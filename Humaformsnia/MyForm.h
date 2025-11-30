#pragma once
#include "Humania.h"
#include "Archivo.h"
#include "Scores.h"


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
			void GuardarTodo();
			void BorrarArchivos();

			Juego = new Humania();

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

			// LOGROS
			Pausas = gcnew Bitmap(gcnew String("Images//Pausa.png"));
			pantalogros = gcnew Bitmap(gcnew String("Images//LogrosMenu.png"));
			lograso1 = gcnew Bitmap(gcnew String("Images//Logro1Grande.png"));
			lograso2 = gcnew Bitmap(gcnew String("Images//Logro2Grande.png"));
			lograso3 = gcnew Bitmap(gcnew String("Images//Logro3Grande.png"));
			lograso4 = gcnew Bitmap(gcnew String("Images//Logro4Grande.png"));
			lograso5 = gcnew Bitmap(gcnew String("Images//Logro5Grande.png"));
			lograso6 = gcnew Bitmap(gcnew String("Images//Logro6Grande.png"));
			lograso7 = gcnew Bitmap(gcnew String("Images//Logro7Grande.png"));
			lograso8 = gcnew Bitmap(gcnew String("Images//Logro8Grande.png"));
			lograso9 = gcnew Bitmap(gcnew String("Images//Logro9Grande.png"));
			lograso10 = gcnew Bitmap(gcnew String("Images//Logro10Grande.png"));
			oculto = gcnew Bitmap(gcnew String("Images//LogroOculto.png"));

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
			Escape = gcnew Bitmap(gcnew String("Images//ESCAPE.png"));
			Escapec = gcnew Bitmap(gcnew String("Images//ESCAPEC.png"));


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

			MUNDO01 = gcnew Bitmap(gcnew String("Images//MUNDO01.png"));
			MUNDO02 = gcnew Bitmap(gcnew String("Images//MUNDO02.png"));
			MUNDO03 = gcnew Bitmap(gcnew String("Images//MUNDO03.png"));

			fondopregunta1 = gcnew Bitmap(gcnew String("Images//Fondo1.png"));
			fondopregunta2 = gcnew Bitmap(gcnew String("Images//Fondo2.png"));
			fondopregunta3 = gcnew Bitmap(gcnew String("Images//Fondo3.png"));

			espacio_para_buffer = BufferedGraphicsManager::Current;
			buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);

			control = 1;
			control1 = 1;
			control2 = 1; 
			control3 = 1;
			opacidad = 0.0;
			opacidad1 = 1;

			sombra = 0.05;
			sombra1 = 0.02;

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

			// CREDITOS______________

			c_c = gcnew Bitmap(gcnew String("Images//InstruccionesC.png"));
			c_r = gcnew Bitmap(gcnew String("Images//InstruccionesR.png"));
			c_e = gcnew Bitmap(gcnew String("Images//InstruccionesE.png"));
			c_d = gcnew Bitmap(gcnew String("Images//d__6.png"));
			c_i = gcnew Bitmap(gcnew String("Images//InstruccionesI.png"));
			c_t = gcnew Bitmap(gcnew String("Images//InstruccionesT.png"));
			c_o = gcnew Bitmap(gcnew String("Images//InstruccionesO.png"));
			c_s = gcnew Bitmap(gcnew String("Images//InstruccionesS.png"));
			autores = gcnew Bitmap(gcnew String("Images//autores_1_.png"));
			fondo_credito = gcnew Bitmap(gcnew String("Images//fondo_credito.png"));

			Creditos->Interval = 30;
			//____________________________
			
			ingrese = gcnew Bitmap(gcnew String("Images//ingresos_12.png"));
			su = gcnew Bitmap(gcnew String("Images//sus1.png"));
			nombre = gcnew Bitmap(gcnew String("Images//nombre4.png"));


			Logos->Enabled = false;
			CargaUno->Enabled = false;
			CargaDos->Enabled = false;
			CargaTres->Enabled = false;

			InstruccionesUno->Enabled = false;
			InstruccionesDos->Enabled = false;
			Mundo1->Enabled = false;
			Mundo2->Enabled = false;
			Mundo3->Enabled = true;

			PreguntaUno->Enabled = false;
			RespuestaUno->Enabled = false;
			PreguntaDos->Enabled = false;
			RespuestaDos->Enabled = false;
			PreguntaTres->Enabled = false;
			RespuestaTres->Enabled = false;
			Menu->Enabled = false;
			BtnJugar->Visible = false;
			BtnCreditos->Visible = false;
			BtnSalir->Visible = false;

			Creditos->Enabled = false;
			GUARDAR->Enabled = false;
			


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
		
		Humania* Juego;

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
		Bitmap^ Escape;
		Bitmap^ Escapec;

		Bitmap^ pantalogros;
		Bitmap^ oculto;
		Bitmap^ lograso1;
		Bitmap^ lograso2;
		Bitmap^ lograso3;
		Bitmap^ lograso4;
		Bitmap^ lograso5;
		Bitmap^ lograso6;
		Bitmap^ lograso7;
		Bitmap^ lograso8;
		Bitmap^ lograso9;
		Bitmap^ lograso10;
		Bitmap^ Pausas;
		bool pausita = false;
		bool logro1 = false, logro2 = false, logro3 = false, logro4 = false, logro5 = false, logro6 = false, logro7 = false, logro8 = false, logro9 = false, logro10 = false;
		int hablados = 0, aliadados = 0, equisito = 0, yesito = 0, afk = 0, contadorsito = 0, konami = 0;
		bool lograsos = false; int eleccion = 0;

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

		int Mundo = 0;
		int archivo = 1;
		Bitmap^ H;
		Bitmap^ U;
		Bitmap^ M;
		Bitmap^ A;
		Bitmap^ N;
		Bitmap^ Raya;
		Bitmap^ I;

		
		bool malder1 = false, malaba1 = false, malarr1 = false, malizq1 = false, malder2 = false, malaba2 = false, malarr2 = false, malizq2 = false;
		bool final = false;
		// SAMUEL

		int control ;
		int control1;
		int control2;
		int control3;

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


		int X_P2 = 50;
		int Y_P2 = 500;
		int W_P2 = 700;
		int H_P2 = 150;
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

		int anchooobjetivo_pregunta3 = 1050;
		int altoobjetivo_pregunta3 = 350;

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
		int puntaje = 1000;

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

		Bitmap^ MUNDO01;
		Bitmap^ MUNDO02;
		Bitmap^ MUNDO03;


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

		float opacidad1;
		float sombra1;
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
		//ELEMNTOS DE CREDITO 


		int contador_tipeo;
		Bitmap^ fondo_credito;
		Bitmap^ c_c;
		Bitmap^ c_r;
		Bitmap^ c_e;
		Bitmap^ c_d;
		Bitmap^ c_i;
		Bitmap^ c_t;
		Bitmap^ c_o;
		Bitmap^ c_s;
		Bitmap^ autores;

		bool escape_c = false;

		// guardar 
		Bitmap^ nombre;
		Bitmap^ su;
		Bitmap^ ingrese;
		int contador_tipeo2 = 0;
		bool g1 = false, g2 = false, g3 = false;



	private: System::Windows::Forms::Timer^ Menu;
	private: System::Windows::Forms::Timer^ Mundo1;
	private: System::Windows::Forms::Timer^ Mundo2;
	private: System::Windows::Forms::Timer^ Mundo3;
	private: System::Windows::Forms::Timer^ NPChabla;
	private: System::Windows::Forms::Timer^ Pausa;
	private: System::Windows::Forms::Timer^ Logros;
	private: System::Windows::Forms::Button^ BtnJugar;
	private: System::Windows::Forms::Timer^ PressBtn;
	private: System::Windows::Forms::Button^ BtnCreditos;
	private: System::Windows::Forms::Button^ BtnSalir;
	private: System::Windows::Forms::Button^ BtnContinuar;
	private: System::Windows::Forms::Button^ BtnRegresar;
	private: System::Windows::Forms::Button^ BtnLogros;
	private: System::Windows::Forms::Button^ Logrito1;
	private: System::Windows::Forms::Button^ Logrito2;
	private: System::Windows::Forms::Button^ Logrito3;
	private: System::Windows::Forms::Button^ Logrito4;
	private: System::Windows::Forms::Button^ Logrito5;
	private: System::Windows::Forms::Button^ Logrito6;
	private: System::Windows::Forms::Button^ Logrito7;
	private: System::Windows::Forms::Button^ Logrito8;
	private: System::Windows::Forms::Button^ Logrito9;
	private: System::Windows::Forms::Button^ Logrito10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
		   System::Windows::Forms::Timer^ Logos;
		   System::Windows::Forms::Timer^ CargaUno;
		   System::Windows::Forms::Timer^ PreguntaUno;
		   System::Windows::Forms::Timer^ InstruccionesUno;
		   System::Windows::Forms::Button^ BtnNo;
		   System::Windows::Forms::Button^ btnGuardarScore;
		   System::Windows::Forms::TextBox^ txtNombreScore;

		   System::Windows::Forms::Timer^ RespuestaUno;
		   System::Windows::Forms::Timer^ PreguntaDos;
		   System::Windows::Forms::Timer^ RespuestaDos;
		   System::Windows::Forms::Timer^ PreguntaTres;
		   System::Windows::Forms::Timer^ RespuestaTres;
		   System::Windows::Forms::Timer^ InstruccionesDos;
		   System::Windows::Forms::Timer^ CargaDos;
		   System::Windows::Forms::Timer^ CargaTres;
		   System::Windows::Forms::Timer^ Creditos;

	private: System::Windows::Forms::Timer^ GameOver;
private: System::Windows::Forms::Timer^ GUARDAR;
private: System::Windows::Forms::Timer^ MUNDOCEROUNO;
private: System::Windows::Forms::Timer^ STOP;
private: System::Windows::Forms::Timer^ MUNDOCERODOS;
private: System::Windows::Forms::Timer^ STOPDOS;
private: System::Windows::Forms::Timer^ MUNDOCEROTRES;
private: System::Windows::Forms::Timer^ STOPTRES;

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
			   this->Pausa = (gcnew System::Windows::Forms::Timer(this->components));
			   this->Logros = (gcnew System::Windows::Forms::Timer(this->components));
			   this->Creditos = (gcnew System::Windows::Forms::Timer(this->components));
			   this->BtnJugar = (gcnew System::Windows::Forms::Button());
			   this->PressBtn = (gcnew System::Windows::Forms::Timer(this->components));
			   this->NPChabla = (gcnew System::Windows::Forms::Timer(this->components));
			   this->BtnCreditos = (gcnew System::Windows::Forms::Button());
			   this->BtnSalir = (gcnew System::Windows::Forms::Button());
			   this->BtnContinuar = (gcnew System::Windows::Forms::Button());
			   this->BtnRegresar = (gcnew System::Windows::Forms::Button());
			   this->BtnLogros = (gcnew System::Windows::Forms::Button());
			   this->Logrito1 = (gcnew System::Windows::Forms::Button());
			   this->Logrito2 = (gcnew System::Windows::Forms::Button());
			   this->Logrito3 = (gcnew System::Windows::Forms::Button());
			   this->Logrito4 = (gcnew System::Windows::Forms::Button());
			   this->Logrito5 = (gcnew System::Windows::Forms::Button());
			   this->Logrito6 = (gcnew System::Windows::Forms::Button());
			   this->Logrito7 = (gcnew System::Windows::Forms::Button());
			   this->Logrito8 = (gcnew System::Windows::Forms::Button());
			   this->Logrito9 = (gcnew System::Windows::Forms::Button());
			   this->Logrito10 = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
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
			   this->txtNombreScore = (gcnew System::Windows::Forms::TextBox());
			   this->btnGuardarScore = (gcnew System::Windows::Forms::Button());
			   this->GUARDAR = (gcnew System::Windows::Forms::Timer(this->components));
			   this->MUNDOCEROUNO = (gcnew System::Windows::Forms::Timer(this->components));
			   this->STOP = (gcnew System::Windows::Forms::Timer(this->components));
			   this->MUNDOCERODOS = (gcnew System::Windows::Forms::Timer(this->components));
			   this->STOPDOS = (gcnew System::Windows::Forms::Timer(this->components));
			   this->MUNDOCEROTRES = (gcnew System::Windows::Forms::Timer(this->components));
			   this->STOPTRES = (gcnew System::Windows::Forms::Timer(this->components));
			   // 
			   // Menu
			   // 
			   this->Menu->Tick += gcnew System::EventHandler(this, &MyForm::Menu_Tick);
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
			   // Pausa
			   // 
			   this->Pausa->Tick += gcnew System::EventHandler(this, &MyForm::Pausa_Tick);
			   // 
			   // Logros
			   // 
			   this->Logros->Enabled = true;
			   this->Logros->Tick += gcnew System::EventHandler(this, &MyForm::Logros_Tick);
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
			   // NPChabla
			   // 
			   this->NPChabla->Tick += gcnew System::EventHandler(this, &MyForm::NPChabla_Tick);
			   // 
			   // BtnCreditos
			   // 
			   this->BtnCreditos->AutoSize = true;
			   this->BtnCreditos->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->BtnCreditos->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->BtnCreditos->Location = System::Drawing::Point(597, 400);
			   this->BtnCreditos->Name = L"BtnCreditos";

			   this->BtnCreditos->Image = gcnew Bitmap(gcnew String("images//Creditos.jpg"));

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
			   this->BtnSalir->TabIndex = 2;
			   this->BtnSalir->UseVisualStyleBackColor = false;
			   this->BtnSalir->Image = gcnew Bitmap(gcnew String("images//Salir.jpg"));


			   this->BtnSalir->Click += gcnew System::EventHandler(this, &MyForm::BtnSalir_Click);
			   this->BtnSalir->MouseEnter += gcnew System::EventHandler(this, &MyForm::BtnSalir_MouseEnter);
			   this->BtnSalir->MouseLeave += gcnew System::EventHandler(this, &MyForm::BtnSalir_MouseLeave);
			   // 
			   // BtnContinuar
			   // 
			   this->BtnContinuar->AutoSize = true;
			   this->BtnContinuar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->BtnContinuar->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->BtnContinuar->Location = System::Drawing::Point(597, 250);
			   this->BtnContinuar->Name = L"BtnContinuar";
			   this->BtnContinuar->Image = gcnew Bitmap(gcnew String("images//Continuar.png"));

			   this->BtnContinuar->TabIndex = 5;
			   this->BtnContinuar->UseVisualStyleBackColor = false;


			   this->BtnContinuar->Visible = false;
			   this->BtnContinuar->Click += gcnew System::EventHandler(this, &MyForm::BtnContinuar_Click);
			   this->BtnContinuar->MouseEnter += gcnew System::EventHandler(this, &MyForm::BtnContinuar_MouseEnter);
			   this->BtnContinuar->MouseLeave += gcnew System::EventHandler(this, &MyForm::BtnContinuar_MouseLeave);
			   // 
			   // BtnRegresar
			   // 
			   this->BtnRegresar->AutoSize = true;
			   this->BtnRegresar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->BtnRegresar->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->BtnRegresar->Location = System::Drawing::Point(597, 450);
			   this->BtnRegresar->Name = L"BtnRegresar";
			   this->BtnRegresar->Image = gcnew Bitmap(gcnew String("images//Regresar.png"));
			   this->BtnRegresar->TabIndex = 6;
			   this->BtnRegresar->UseVisualStyleBackColor = false;
			   this->BtnRegresar->Visible = false;
			   this->BtnRegresar->Click += gcnew System::EventHandler(this, &MyForm::BtnRegresar_Click);
			   this->BtnRegresar->MouseEnter += gcnew System::EventHandler(this, &MyForm::BtnRegresar_MouseEnter);
			   this->BtnRegresar->MouseLeave += gcnew System::EventHandler(this, &MyForm::BtnRegresar_MouseLeave);
			   // 
			   // BtnLogros
			   // 
			   this->BtnLogros->AutoSize = true;
			   this->BtnLogros->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->BtnLogros->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->BtnLogros->Location = System::Drawing::Point(597, 350);
			   this->BtnLogros->Name = L"BtnLogros";
			   this->BtnLogros->Image = gcnew Bitmap(gcnew String("images//Logros.png"));
			   this->BtnLogros->TabIndex = 7;
			   this->BtnLogros->UseVisualStyleBackColor = false;
			   this->BtnLogros->Visible = false;
			   this->BtnLogros->Click += gcnew System::EventHandler(this, &MyForm::BtnLogros_Click);
			   this->BtnLogros->MouseEnter += gcnew System::EventHandler(this, &MyForm::BtnLogros_MouseEnter);
			   this->BtnLogros->MouseLeave += gcnew System::EventHandler(this, &MyForm::BtnLogros_MouseLeave);
			   // 
			   this->Logrito1 = (gcnew System::Windows::Forms::Button());
			   this->Logrito1->Visible = false;
			   this->Logrito1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Logrito1->FlatAppearance->BorderSize = 0;
			   this->Logrito1->BackColor = System::Drawing::Color::Transparent;
			   this->Logrito1->BackgroundImage = gcnew System::Drawing::Bitmap(
				   gcnew System::String("images//Logro1.png")
			   );
			   this->Logrito1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Logrito1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Logrito1->Location = System::Drawing::Point(152, 200);
			   this->Logrito1->Name = L"Logrito1";
			   this->Logrito1->Size = System::Drawing::Size(140, 140);
			   this->Logrito1->TabIndex = 8;
			   this->Logrito1->UseVisualStyleBackColor = false;
			   this->Logrito1->Click += gcnew System::EventHandler(this, &MyForm::BtnL1_Click);

			   // 
			   // Logrito2
			   // 
			   this->Logrito2 = (gcnew System::Windows::Forms::Button());
			   this->Logrito2->Visible = false;
			   this->Logrito2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Logrito2->FlatAppearance->BorderSize = 0;
			   this->Logrito2->BackColor = System::Drawing::Color::Transparent;
			   this->Logrito2->BackgroundImage = gcnew System::Drawing::Bitmap(
				   gcnew System::String("images//Logro2.png")
			   );
			   this->Logrito2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Logrito2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Logrito2->Location = System::Drawing::Point(368, 200);
			   this->Logrito2->Name = L"Logrito2";
			   this->Logrito2->Size = System::Drawing::Size(140, 140);
			   this->Logrito2->TabIndex = 9;
			   this->Logrito2->UseVisualStyleBackColor = false;
			   this->Logrito2->Click += gcnew System::EventHandler(this, &MyForm::BtnL2_Click);

			   // 
			   // Logrito3
			   // 
			   this->Logrito3 = (gcnew System::Windows::Forms::Button());
			   this->Logrito3->Visible = false;
			   this->Logrito3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Logrito3->FlatAppearance->BorderSize = 0;
			   this->Logrito3->BackColor = System::Drawing::Color::Transparent;
			   this->Logrito3->BackgroundImage = gcnew System::Drawing::Bitmap(
				   gcnew System::String("images//Logro3.png")
			   );
			   this->Logrito3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Logrito3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Logrito3->Location = System::Drawing::Point(584, 200);
			   this->Logrito3->Name = L"Logrito3";
			   this->Logrito3->Size = System::Drawing::Size(140, 140);
			   this->Logrito3->TabIndex = 10;
			   this->Logrito3->UseVisualStyleBackColor = false;
			   this->Logrito3->Click += gcnew System::EventHandler(this, &MyForm::BtnL3_Click);

			   // 
			   // Logrito4
			   // 
			   this->Logrito4 = (gcnew System::Windows::Forms::Button());
			   this->Logrito4->Visible = false;
			   this->Logrito4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Logrito4->FlatAppearance->BorderSize = 0;
			   this->Logrito4->BackColor = System::Drawing::Color::Transparent;
			   this->Logrito4->BackgroundImage = gcnew System::Drawing::Bitmap(
				   gcnew System::String("images//Logro4.png")
			   );
			   this->Logrito4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Logrito4->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Logrito4->Location = System::Drawing::Point(800, 200);
			   this->Logrito4->Name = L"Logrito4";
			   this->Logrito4->Size = System::Drawing::Size(140, 140);
			   this->Logrito4->TabIndex = 11;
			   this->Logrito4->UseVisualStyleBackColor = false;
			   this->Logrito4->Click += gcnew System::EventHandler(this, &MyForm::BtnL4_Click);

			   // 
			   // Logrito5
			   // 
			   this->Logrito5 = (gcnew System::Windows::Forms::Button());
			   this->Logrito5->Visible = false;
			   this->Logrito5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Logrito5->FlatAppearance->BorderSize = 0;
			   this->Logrito5->BackColor = System::Drawing::Color::Transparent;
			   this->Logrito5->BackgroundImage = gcnew System::Drawing::Bitmap(
				   gcnew System::String("images//Logro5.png")
			   );
			   this->Logrito5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Logrito5->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Logrito5->Location = System::Drawing::Point(1016, 200);
			   this->Logrito5->Name = L"Logrito5";
			   this->Logrito5->Size = System::Drawing::Size(140, 140);
			   this->Logrito5->TabIndex = 12;
			   this->Logrito5->UseVisualStyleBackColor = false;
			   this->Logrito5->Click += gcnew System::EventHandler(this, &MyForm::BtnL5_Click);

			   // 
			   // Logrito6
			   // 
			   this->Logrito6 = (gcnew System::Windows::Forms::Button());
			   this->Logrito6->Visible = false;
			   this->Logrito6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Logrito6->FlatAppearance->BorderSize = 0;
			   this->Logrito6->BackColor = System::Drawing::Color::Transparent;
			   this->Logrito6->BackgroundImage = gcnew System::Drawing::Bitmap(
				   gcnew System::String("images//Logro6.png")
			   );
			   this->Logrito6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Logrito6->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Logrito6->Location = System::Drawing::Point(152, 400);
			   this->Logrito6->Name = L"Logrito6";
			   this->Logrito6->Size = System::Drawing::Size(140, 140);
			   this->Logrito6->TabIndex = 13;
			   this->Logrito6->UseVisualStyleBackColor = false;
			   this->Logrito6->Click += gcnew System::EventHandler(this, &MyForm::BtnL6_Click);

			   // 
			   // Logrito7
			   // 
			   this->Logrito7 = (gcnew System::Windows::Forms::Button());
			   this->Logrito7->Visible = false;
			   this->Logrito7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Logrito7->FlatAppearance->BorderSize = 0;
			   this->Logrito7->BackColor = System::Drawing::Color::Transparent;
			   this->Logrito7->BackgroundImage = gcnew System::Drawing::Bitmap(
				   gcnew System::String("images//Logro7.png")
			   );
			   this->Logrito7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Logrito7->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Logrito7->Location = System::Drawing::Point(368, 400);
			   this->Logrito7->Name = L"Logrito7";
			   this->Logrito7->Size = System::Drawing::Size(140, 140);
			   this->Logrito7->TabIndex = 14;
			   this->Logrito7->UseVisualStyleBackColor = false;
			   this->Logrito7->Click += gcnew System::EventHandler(this, &MyForm::BtnL7_Click);

			   // 
			   // Logrito8
			   // 
			   this->Logrito8 = (gcnew System::Windows::Forms::Button());
			   this->Logrito8->Visible = false;
			   this->Logrito8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Logrito8->FlatAppearance->BorderSize = 0;
			   this->Logrito8->BackColor = System::Drawing::Color::Transparent;
			   this->Logrito8->BackgroundImage = gcnew System::Drawing::Bitmap(
				   gcnew System::String("images//Logro8.png")
			   );
			   this->Logrito8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Logrito8->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Logrito8->Location = System::Drawing::Point(584, 400);
			   this->Logrito8->Name = L"Logrito8";
			   this->Logrito8->Size = System::Drawing::Size(140, 140);
			   this->Logrito8->TabIndex = 15;
			   this->Logrito8->UseVisualStyleBackColor = false;
			   this->Logrito8->Click += gcnew System::EventHandler(this, &MyForm::BtnL8_Click);

			   // 
			   // Logrito9
			   // 
			   this->Logrito9 = (gcnew System::Windows::Forms::Button());
			   this->Logrito9->Visible = false;
			   this->Logrito9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Logrito9->FlatAppearance->BorderSize = 0;
			   this->Logrito9->BackColor = System::Drawing::Color::Transparent;
			   this->Logrito9->BackgroundImage = gcnew System::Drawing::Bitmap(
				   gcnew System::String("images//Logro9.png")
			   );
			   this->Logrito9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Logrito9->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Logrito9->Location = System::Drawing::Point(800, 400);
			   this->Logrito9->Name = L"Logrito9";
			   this->Logrito9->Size = System::Drawing::Size(140, 140);
			   this->Logrito9->TabIndex = 16;
			   this->Logrito9->UseVisualStyleBackColor = false;
			   this->Logrito9->Click += gcnew System::EventHandler(this, &MyForm::BtnL9_Click);

			   // 
			   // Logrito10
			   // 
			   this->Logrito10 = (gcnew System::Windows::Forms::Button());
			   this->Logrito10->Visible = false;
			   this->Logrito10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Logrito10->FlatAppearance->BorderSize = 0;
			   this->Logrito10->BackColor = System::Drawing::Color::Transparent;
			   this->Logrito10->BackgroundImage = gcnew System::Drawing::Bitmap(
				   gcnew System::String("images//Logro10.png")
			   );
			   this->Logrito10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->Logrito10->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Logrito10->Location = System::Drawing::Point(1016, 400);
			   this->Logrito10->Name = L"Logrito10";
			   this->Logrito10->Size = System::Drawing::Size(140, 140);
			   this->Logrito10->TabIndex = 17;
			   this->Logrito10->UseVisualStyleBackColor = false;
			   this->Logrito10->Click += gcnew System::EventHandler(this, &MyForm::BtnL10_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(100, 150);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(0, 60);
			   this->label1->TabIndex = 0;
			   this->label1->Visible = false;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(100, 150);
			   this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(0, 48);
			   this->label2->TabIndex = 1;
			   this->label2->Visible = false;
			   // 
			   // Logos
			   // 
			   this->Logos->Tick += gcnew System::EventHandler(this, &MyForm::Logos_Tick);
			   // 
			   // CargaUno
			   // 
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
			   this->InstruccionesUno->Tick += gcnew System::EventHandler(this, &MyForm::InstruccionesUno_Tick);
			   // 
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
			   // 
			   // GameOver
			   // 
			   this->GameOver->Tick += gcnew System::EventHandler(this, &MyForm::GameOver_Tick);
			   // 
			  // BtnSi
			   // 
			   this->BtnSi->Location = System::Drawing::Point(540, 345);
			   this->BtnSi->Name = L"BtnSi";
			   this->BtnSi->Size = System::Drawing::Size(127, 49);
			   this->BtnSi->Image = gcnew Bitmap(gcnew String("images//si.jpg"));

			   this->BtnSi->TabIndex = 3;
			   this->BtnSi->UseVisualStyleBackColor = true;
			   this->BtnSi->Visible = false;
			   this->BtnSi->Click += gcnew System::EventHandler(this, &MyForm::BtnSi_Click);
			   // 
			   // BtnNo
			   // 
			   this->BtnNo->Location = System::Drawing::Point(737, 345);
			   this->BtnNo->Name = L"BtnNo";
			   this->BtnNo->Size = System::Drawing::Size(127, 49);
			   this->BtnNo->TabIndex = 4;
			   this->BtnNo->Image = gcnew Bitmap(gcnew String("images//no.jpg"));

			   this->BtnNo->UseVisualStyleBackColor = true;
			   this->BtnNo->Visible = false;
			   this->BtnNo->Click += gcnew System::EventHandler(this, &MyForm::BtnNo_Click);
			   // 
			   // txtNombreScore
			   // 
			   this->txtNombreScore->Enabled = false;
			   this->txtNombreScore->Location = System::Drawing::Point(550, 300);
			   this->txtNombreScore->Name = L"txtNombreScore";
			   this->txtNombreScore->Size = System::Drawing::Size(200, 20);
			   this->txtNombreScore->TabIndex = 100;
			   this->txtNombreScore->Visible = false;
			   // 
			   // btnGuardarScore
			   // 
			   this->btnGuardarScore->Enabled = false;
			   this->btnGuardarScore->Location = System::Drawing::Point(760, 298);
			   this->btnGuardarScore->Name = L"btnGuardarScore";
			   this->btnGuardarScore->Size = System::Drawing::Size(100, 26);
			   this->btnGuardarScore->TabIndex = 101;
			   this->btnGuardarScore->Text = L"Guardar";
			   this->btnGuardarScore->UseVisualStyleBackColor = true;
			   this->btnGuardarScore->Visible = false;
			   this->btnGuardarScore->Click += gcnew System::EventHandler(this, &MyForm::btnGuardarScore_Click);
			   // 
			   // GUARDAR
			   // 
			   this->GUARDAR->Enabled = true;
			   this->GUARDAR->Tick += gcnew System::EventHandler(this, &MyForm::GUARDAR_Tick);
			   // 
			   // MUNDOCEROUNO
			   // 
			   this->MUNDOCEROUNO->Tick += gcnew System::EventHandler(this, &MyForm::MUNDOCEROUNO_Tick);
			   // 
			   // STOP
			   // 
			   this->STOP->Interval = 1500;
			   this->STOP->Tick += gcnew System::EventHandler(this, &MyForm::STOP_Tick);
			   // 
			   // MUNDOCERODOS
			   // 
			   this->MUNDOCERODOS->Tick += gcnew System::EventHandler(this, &MyForm::MUNDOCERODOS_Tick);
			   // 
			   // STOPDOS
			   // 
			   this->STOPDOS->Interval = 1500;
			   this->STOPDOS->Tick += gcnew System::EventHandler(this, &MyForm::STOPDOS_Tick);
			   // 
			   // MUNDOCEROTRES
			   // 
			   this->MUNDOCEROTRES->Tick += gcnew System::EventHandler(this, &MyForm::MUNDOCEROTRES_Tick);
			   // 
			   // STOPTRES
			   // 
			   this->STOPTRES->Interval = 1500;
			   this->STOPTRES->Tick += gcnew System::EventHandler(this, &MyForm::STOPTRES_Tick);
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
			   this->Controls->Add(this->BtnContinuar);
			   this->Controls->Add(this->BtnRegresar);
			   this->Controls->Add(this->BtnLogros);
			   this->Controls->Add(this->Logrito1);
			   this->Controls->Add(this->Logrito2);
			   this->Controls->Add(this->Logrito3);
			   this->Controls->Add(this->Logrito4);
			   this->Controls->Add(this->Logrito5);
			   this->Controls->Add(this->Logrito6);
			   this->Controls->Add(this->Logrito7);
			   this->Controls->Add(this->Logrito8);
			   this->Controls->Add(this->Logrito9);
			   this->Controls->Add(this->Logrito10);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->txtNombreScore);
			   this->Controls->Add(this->btnGuardarScore);
			   this->KeyPreview = true;
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			   this->ResumeLayout(false);
			   this->PerformLayout();

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
			if (e->KeyCode == Keys::Q) entered = true;
			if (e->KeyCode == Keys::Escape)if (Mundo > 0 || Mundo < 4) pausita = true;
		}

		
			if (e->KeyCode == Keys::C) {
				lograsos = false;
				eleccion = 0;
				this->Pausa->Enabled = true;
				if (e->KeyCode == Keys::Enter) entered = true;
			}
		

		if (e->KeyCode == Keys::Up && konami == 0)konami++;
		else konami == 0;
		if (e->KeyCode == Keys::Up && konami == 1)konami++;
		else konami == 0;
		if (e->KeyCode == Keys::Down && konami == 2)konami++;
		else konami == 0;
		if (e->KeyCode == Keys::Down && konami == 3)konami++;
		else konami == 0;
		if (e->KeyCode == Keys::Left && konami == 4)konami++;
		else konami == 0;
		if (e->KeyCode == Keys::Right && konami == 5)konami++;
		else konami == 0;
		if (e->KeyCode == Keys::Left && konami == 6)konami++;
		else konami == 0;
		if (e->KeyCode == Keys::Right && konami == 7)konami++;
		else konami == 0;
		if (e->KeyCode == Keys::B && konami == 8)konami++;
		else konami == 0;
		if (e->KeyCode == Keys::A && konami == 9)logro9 = true;
		else konami == 0;

		if (escapep1) {
			if (e->KeyCode == Keys::Q) {

				logro3 = true;
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
			if (e->KeyCode == Keys::Q) {


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
			if (e->KeyCode == Keys::Q) {


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
				C_DOS = 0;

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
			if (e->KeyCode == Keys::Q) {


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
				C_DOS = 0;

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
			if (e->KeyCode == Keys::Q) {


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

				porcentajes = 1;
				tecla = 1;
				navecontrol = 0;
				xcontrol = 0;
				Nave->setXt(800);
			}
		}
		if (escapep3) {
			if (e->KeyCode == Keys::Q) {


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
			if (e->KeyCode == Keys::Q) {

				escapei2 = false;
				escapei2_1 = true;

				tecla = 1;
				controltecla = 1;
				cambioin = 0;

			}
		}

		if (escapei2_2) {

			if (e->KeyCode == Keys::Q) {

				escapei2_2 = false;

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
			if (e->KeyCode == Keys::Q) {

				txtNombreScore->Text = "";
				txtNombreScore->Visible = true;
				btnGuardarScore->Visible = true;

				txtNombreScore->Enabled = true;
				btnGuardarScore->Enabled = true;

				txtNombreScore->Focus();

				GUARDAR->Enabled = true;
				RespuestaTres->Enabled = false;

			}
		}
		if (escape_c) {

			if (e->KeyCode == Keys::Escape) {

				escape_c = false;
				Creditos->Enabled = false;
				Menu->Enabled = true;
				this->BtnJugar->Enabled = true;
				this->BtnSalir->Enabled = true;
				this->BtnCreditos->Enabled = true;

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

	}
	private: System::Void Menu_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->Logros->Enabled = true;
		BtnJugar->Visible = true;
		BtnCreditos->Visible = true;
		BtnSalir->Visible = true;
		hablados = 0;
		aliadados = 0;
		canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
		buffer->Graphics->DrawImage(fondomenu, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);
		Juego->Menu(buffer, espacio_para_buffer, canvas, H, U, M, A, N, Raya, I);
		buffer->Render(canvas);






	}
		   void GuardarTodo()
		   {
			   Jugador^ alienActual = nullptr;
			   Jugador^ steveActual = nullptr;
			   Jugador^ minipekkaActual = nullptr;
			   AlienAliado^ aliadoActual = nullptr;
			   NPC^ npcActual = nullptr;
			   Arbitro^ arbitroActual = nullptr;
			   List<Robot^>^ robotsAGuardar = nullptr;
			   List<Pelota^>^ pelotasAGuardar = nullptr;


			   if (nivel_actual == 1) {
				   alienActual = Alien;
				   aliadoActual = aliado;
				   npcActual = Marciano1;
				   robotsAGuardar = robots;
				   pelotasAGuardar = nullptr;
			   }


			   else if (nivel_actual == 2) {
				   alienActual = Alien;
				   aliadoActual = nullptr;
				   npcActual = Marciano2;
				   arbitroActual = arbitro;
				   robotsAGuardar = nullptr;
				   pelotasAGuardar = pelotas;
			   }


			   else if (nivel_actual == 3) {
				   steveActual = Steve;
				   minipekkaActual = Minipekka;
				   aliadoActual = nullptr;
				   npcActual = nullptr;
				   arbitroActual = nullptr;
				   robotsAGuardar = nullptr;
				   pelotasAGuardar = nullptr;
			   }

			   GestorArchivos::GuardarParametros(
				   "PARAMETROS.txt",
				   nivel_actual,
				   alienActual,
				   steveActual,
				   minipekkaActual,
				   aliadoActual,
				   npcActual,
				   arbitroActual,
				   robotsAGuardar,
				   pelotasAGuardar
			   );
		   }
		   void BorrarArchivos()
		   {
			   GestorArchivos::BorrarArchivo(
				"PARAMETROS.txt"
				
			   );
		   }
	private: System::Void Mundo1_Tick(System::Object^ sender, System::EventArgs^ e) {
		bool normal = true, portalaso1 = false, npchabla = false, muerto = false;

		canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
		buffer->Graphics->DrawImage(fondomundo1, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);

		Juego->Mundo1(buffer, espacio_para_buffer, canvas, portalaso1, npchabla, muerto, Alien, Verde, Amarillo, Rojo, Portal1, Marciano1, aliado, teclapulsada, Mundo, nivel_actual, porcentajes, xcontrol, navecontrol, tecla, NPCH);

		if (pausita) {
			this->Pausa->Enabled = true;
		}
		pausita = false;
		if (portalaso1) {
			GuardarTodo();
			RespuestaUno->Enabled = true;
			Mundo1->Enabled = false;
		}

		for (int i = 0; i < robots->Count; i++) {

			robots[i]->mover(buffer->Graphics);

			if (normal)robots[i]->mostrar(buffer->Graphics);

			else {
				if (contador % 2 == 0)robots[i]->mostrar(buffer->Graphics);
			}

			if (Colision(
				Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30, robots[i]->getX() - 50, robots[i]->getY() - 50, robots[i]->getAncho() - 70, robots[i]->getAlto() - 50))
			{

				Alien->setX(30);
				Alien->setY(250);
				Alien->setVidas(Alien->getVidas() - 1);
			}

			if (Colision(Alien->getX() - 50, Alien->getY() - 50, Alien->getAncho() - 80, Alien->getAlto() - 30,
				aliado->getX() - 50, aliado->getY() - 50, aliado->getAncho() - 70, aliado->getAlto() - 50)) {

				aliado->Activo();
				robots[i]->setDy(3);
				aliadados++;

			}
		}
		if (npchabla) {
			this->NPChabla->Enabled = true;
		}

		if (muerto) {
			GameOver->Enabled = true;
			Mundo1->Enabled = false;
		}

		teclapulsada = Direccion::Ninguno;

		buffer->Render(canvas);

	}
	private: System::Void Mundo2_Tick(System::Object^ sender, System::EventArgs^ e) {
		bool portalaso2 = false, npchabla = false, muerto = false;

		canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
		buffer->Graphics->DrawImage(fondo_mundo_2, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);
		
		Juego->Mundo2(buffer, espacio_para_buffer, canvas, portalaso2, npchabla, muerto, Alien, Verde, Amarillo, Rojo, Portal2, Portal3, Marciano2, arbitro, teclapulsada, Mundo, nivel_actual, NPCH, messi, logro7, pelotas_detenidas);

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

		if (pausita) {
			this->Pausa->Enabled = true;
		}
		pausita = false;

		if (npchabla) {
			this->NPChabla->Enabled = true;
		}

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
		if (portalaso2) {
			RespuestaDos->Enabled = true;
			GuardarTodo();
			Mundo2->Enabled = false;
		}

		teclapulsada = Direccion::Ninguno;

		if (muerto) {
			GameOver->Enabled = true;
			Mundo2->Enabled = false;
		}

		buffer->Render(canvas);
	}
	private: System::Void Mundo3_Tick(System::Object^ sender, System::EventArgs^ e) {
		bool portalaso3 = false;

		canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
		buffer->Graphics->DrawImage(fondomundo3, 0, 0, Rectangle(0, 0, fondomundo3->Width, fondomundo3->Height), GraphicsUnit::Pixel);

		Juego->Mundo3(buffer, espacio_para_buffer, canvas, Brillo, final, Steve, Minipekka, teclapulsada, Mundo, nivel_actual, logro1, portalaso3,malder1, malaba1, malarr1, malizq1, malder2, malaba2, malarr2,malizq2);

		if (pausita) {
			this->Pausa->Enabled = true;
		}
		pausita = false;


		if (final) {
			GuardarTodo();
			this->Mundo3->Enabled = false;
			this->RespuestaTres->Enabled = true;
		}

		if (!final)teclapulsada = Direccion::Ninguno;

		buffer->Render(canvas);
	}
	private: System::Void NPChabla_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->Mundo1->Enabled = false;
		this->Mundo2->Enabled = false;
		this->label1->Location = System::Drawing::Point(100, 150);

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
			if (hablados == 0)hablados++;
			textillo = this->label1->Text;
			subida++;
			M1hablando->mostrarimagen(buffer->Graphics);
			buffer->Graphics->DrawImage(Escape, X_P2 + 45, Y_P2 - 450, W_P2 - 300, H_P2 - 75);

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
			if (hablados == 1)hablados++;
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
			buffer->Graphics->DrawImage(Escape, X_P2 + 45, Y_P2 - 450, W_P2 - 300, H_P2 - 75);

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
	private: System::Void Pausa_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->Mundo1->Enabled = false;
		this->Mundo2->Enabled = false;
		this->Mundo3->Enabled = false;
		this->BtnContinuar->Visible = true;
		this->BtnLogros->Visible = true;
		this->BtnRegresar->Visible = true;
		this->BtnContinuar->Enabled = true;
		this->BtnLogros->Enabled = true;
		this->BtnRegresar->Enabled = true;
		this->label1->Visible = false;
		this->label2->Visible = false;
		canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
		if (Mundo == 1)buffer->Graphics->DrawImage(fondomundo1, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);
		if (Mundo == 2)buffer->Graphics->DrawImage(fondo_mundo_2, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);
		if (Mundo == 3)buffer->Graphics->DrawImage(fondomundo3, 0, 0, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), GraphicsUnit::Pixel);

		buffer->Graphics->DrawImage(Pausas, 450, 100);


		buffer->Render(canvas);
		delete buffer;
		delete espacio_para_buffer;
		delete canvas;

	}
	private: System::Void Logros_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (hablados == 2)logro2 = true;
		if (Alien->getVidas() == 0)logro4 = true;
		if (Botonazo == 2)logro5 = true;
		if (Mundo == 3 && aliadados == 0)logro6 == true;
		if (equisito == Alien->getX() && Alien->getY() == yesito && (Mundo == 1 || Mundo == 2) && !lograsos) {
			if (contadorsito % 10 == 0)afk++;
			if (afk == 15)logro8 = true;
		}
		else afk = 0;
		equisito = Alien->getX(); yesito = Alien->getY();
		contadorsito++;
		if (logro1 && logro2 && logro3 && logro4 && logro5 && logro6 && logro7 && logro8 && logro9)logro10 = true;

		if (lograsos && eleccion == 0) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			//buffer->Graphics->DrawImage(lograso1, 100, 200);
			buffer->Graphics->DrawImage(oculto, 152, 200);
			buffer->Graphics->DrawImage(oculto, 368, 200);
			buffer->Graphics->DrawImage(oculto, 584, 200);
			buffer->Graphics->DrawImage(oculto, 800, 200);
			buffer->Graphics->DrawImage(oculto, 1016, 200);
			buffer->Graphics->DrawImage(oculto, 152, 400);
			buffer->Graphics->DrawImage(oculto, 368, 400);
			buffer->Graphics->DrawImage(oculto, 584, 400);
			buffer->Graphics->DrawImage(oculto, 800, 400);
			buffer->Graphics->DrawImage(oculto, 1016, 400);
			buffer->Graphics->DrawImage(Escapec, X_P2+20, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			if (logro1) { this->Logrito1->Visible = true; this->Logrito1->Enabled = true; }
			if (logro2) { this->Logrito2->Visible = true; this->Logrito2->Enabled = true; }
			if (logro3) { this->Logrito3->Visible = true; this->Logrito3->Enabled = true; }
			if (logro4) { this->Logrito4->Visible = true; this->Logrito4->Enabled = true; }
			if (logro5) { this->Logrito5->Visible = true; this->Logrito5->Enabled = true; }
			if (logro6) { this->Logrito6->Visible = true; this->Logrito6->Enabled = true; }
			if (logro7) { this->Logrito7->Visible = true; this->Logrito7->Enabled = true; }
			if (logro8) { this->Logrito8->Visible = true; this->Logrito8->Enabled = true; }
			if (logro9) { this->Logrito9->Visible = true; this->Logrito9->Enabled = true; }
			if (logro10) { this->Logrito10->Visible = true; this->Logrito10->Enabled = true; }
			buffer->Render(canvas);

			
		}
		else {
			this->Logrito1->Visible = false; this->Logrito1->Enabled = false;
			this->Logrito2->Visible = false; this->Logrito2->Enabled = false;
			this->Logrito3->Visible = false; this->Logrito3->Enabled = false;
			this->Logrito4->Visible = false; this->Logrito4->Enabled = false;
			this->Logrito5->Visible = false; this->Logrito5->Enabled = false;
			this->Logrito6->Visible = false; this->Logrito6->Enabled = false;
			this->Logrito7->Visible = false; this->Logrito7->Enabled = false;
			this->Logrito8->Visible = false; this->Logrito8->Enabled = false;
			this->Logrito9->Visible = false; this->Logrito9->Enabled = false;
			this->Logrito10->Visible = false; this->Logrito10->Enabled = false;
		}
		if (lograsos && eleccion == 1) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			buffer->Graphics->DrawImage(lograso1, 100, 200);
			buffer->Graphics->DrawImage(Escapec, X_P2 + 800, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			this->label1->Visible = true;
			this->label1->Location = System::Drawing::Point(700, 250);
			this->label1->Text = L"" + "Todos para uno y uno para todos";
			this->label2->Visible = true;
			this->label2->Location = System::Drawing::Point(650, 350);
			this->label2->Text = L"" + "Has completado el juego por primera vez";
			buffer->Render(canvas);

			
		}
		if (lograsos && eleccion == 2) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			buffer->Graphics->DrawImage(lograso2, 100, 200);
			buffer->Graphics->DrawImage(Escapec, X_P2 + 870, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			this->label1->Visible = true;
			this->label1->Location = System::Drawing::Point(800, 250);
			this->label1->Text = L"" + "Hablador";
			this->label2->Visible = true;
			this->label2->Location = System::Drawing::Point(700, 350);
			this->label2->Text = L"" + "Has hablado con Sami y Michell";
			buffer->Render(canvas);

			
		}
		if (lograsos && eleccion == 3) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			buffer->Graphics->DrawImage(lograso3, 100, 200);
			buffer->Graphics->DrawImage(Escapec, X_P2 + 870, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			this->label1->Visible = true;
			this->label1->Location = System::Drawing::Point(800, 250);
			this->label1->Text = L"" + "Apurado";
			this->label2->Visible = true;
			this->label2->Location = System::Drawing::Point(600, 350);
			this->label2->Text = L"" + "Has saltado todas las pantallas";
			buffer->Render(canvas);

			
		}
		if (lograsos && eleccion == 4) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			buffer->Graphics->DrawImage(lograso4, 100, 200);
			buffer->Graphics->DrawImage(Escapec, X_P2 + 870, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			this->label1->Visible = true;
			this->label1->Location = System::Drawing::Point(800, 250);
			this->label1->Text = L"" + "Disociado";
			this->label2->Visible = true;
			this->label2->Location = System::Drawing::Point(600, 350);
			this->label2->Text = L"" + "Has perdido todas las vidas por lo menos una vez";
			buffer->Render(canvas);

			
		}
		if (lograsos && eleccion == 5) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			buffer->Graphics->DrawImage(lograso5, 100, 200);
			buffer->Graphics->DrawImage(Escapec, X_P2 + 870, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			this->label1->Visible = true;
			this->label1->Location = System::Drawing::Point(800, 250);
			this->label1->Text = L"" + "Observador";
			this->label2->Visible = true;
			this->label2->Location = System::Drawing::Point(700, 350);
			this->label2->Text = L"" + "Has entrado al apartado de creditos";
			buffer->Render(canvas);

			
		}
		if (lograsos && eleccion == 6) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			buffer->Graphics->DrawImage(lograso6, 100, 200);
			buffer->Graphics->DrawImage(Escapec, X_P2 + 870, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			this->label1->Visible = true;
			this->label1->Location = System::Drawing::Point(800, 250);
			this->label1->Text = L"" + "Lobo solitario";
			this->label2->Visible = true;
			this->label2->Location = System::Drawing::Point(600, 350);
			this->label2->Text = L"" + "Has llegado al nivel 3 sin la ayuda de los aliados";
			buffer->Render(canvas);

			
		}
		if (lograsos && eleccion == 7) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			buffer->Graphics->DrawImage(lograso7, 100, 200);
			buffer->Graphics->DrawImage(Escapec, X_P2 + 870, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			this->label1->Visible = true;
			this->label1->Location = System::Drawing::Point(800, 250);
			this->label1->Text = L"" + "Fan #1 de Messi ";
			this->label2->Visible = true;
			this->label2->Location = System::Drawing::Point(650, 350);
			this->label2->Text = L"" + "Has chocado con Messi por alguna razon";
			buffer->Render(canvas);

			
		}
		if (lograsos && eleccion == 8) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			buffer->Graphics->DrawImage(lograso8, 100, 200);
			buffer->Graphics->DrawImage(Escapec, X_P2 + 870, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			this->label1->Visible = true;
			this->label1->Location = System::Drawing::Point(800, 250);
			this->label1->Text = L"" + "Sobrado de tiempo";
			this->label2->Visible = true;
			this->label2->Location = System::Drawing::Point(600, 350);
			this->label2->Text = L"" + "Te has mantenido quieto en un minimo de 15 segundos";
			buffer->Render(canvas);

			
		}
		if (lograsos && eleccion == 9) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			buffer->Graphics->DrawImage(lograso9, 100, 200);
			buffer->Graphics->DrawImage(Escapec, X_P2 + 870, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			this->label1->Visible = true;
			this->label1->Location = System::Drawing::Point(800, 250);
			this->label1->Text = L"" + "Konami";
			this->label2->Visible = true;
			this->label2->Location = System::Drawing::Point(600, 350);
			this->label2->Text = L"" + "Has hecho el famosisimo codigo konami";
			buffer->Render(canvas);

		
		}
		if (lograsos && eleccion == 10) {
			canvas = this->CreateGraphics();
			BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);
			buffer->Graphics->DrawImage(pantalogros, 50, 100);
			buffer->Graphics->DrawImage(lograso10, 100, 200);
			buffer->Graphics->DrawImage(Escapec, X_P2 + 870, Y_P2 + 65, W_P2 - 300, H_P2 - 75);

			this->label1->Visible = true;
			this->label1->Location = System::Drawing::Point(800, 250);
			this->label1->Text = L"" + "100%";
			this->label2->Visible = true;
			this->label2->Location = System::Drawing::Point(600, 350);
			this->label2->Text = L"" + "Has conseguido todos los logros, Felicidades!!";
			buffer->Render(canvas);

			
		}
	}
	private: System::Void BtnJugar_Click(System::Object^ sender, System::EventArgs^ e) {}
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
	private: System::Void BtnContinuar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PressBtn->Enabled = true;
		Botonazo = 4;
		grr = 0;
	}
	private: System::Void BtnRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PressBtn->Enabled = true;
		Botonazo = 6;
		grr = 0;
	}
	private: System::Void BtnLogros_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PressBtn->Enabled = true;
		Botonazo = 5;
		grr = 0;
	}
	private: System::Void BtnL1_Click(System::Object^ sender, System::EventArgs^ e) {
		eleccion = 1;
	}
	private: System::Void BtnL2_Click(System::Object^ sender, System::EventArgs^ e) {
		eleccion = 2;
	}
	private: System::Void BtnL3_Click(System::Object^ sender, System::EventArgs^ e) {
		eleccion = 3;
	}
	private: System::Void BtnL4_Click(System::Object^ sender, System::EventArgs^ e) {
		eleccion = 4;
	}
	private: System::Void BtnL5_Click(System::Object^ sender, System::EventArgs^ e) {
		eleccion = 5;
	}
	private: System::Void BtnL6_Click(System::Object^ sender, System::EventArgs^ e) {
		eleccion = 6;
	}
	private: System::Void BtnL7_Click(System::Object^ sender, System::EventArgs^ e) {
		eleccion = 7;
	}
	private: System::Void BtnL8_Click(System::Object^ sender, System::EventArgs^ e) {
		eleccion = 8;
	}
	private: System::Void BtnL9_Click(System::Object^ sender, System::EventArgs^ e) {
		eleccion = 9;
	}
	private: System::Void BtnL10_Click(System::Object^ sender, System::EventArgs^ e) {
		eleccion = 10;
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

				BorrarArchivos();

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
			if (grr == 6) {
				this->PressBtn->Enabled = false;
				this->PressBtn->Enabled = false;
				this->Menu->Enabled = false;
				this->CargaUno->Enabled = false;
				this->BtnJugar->Visible = false;
				this->BtnCreditos->Visible = false;
				this->Creditos->Enabled = true;
				this->BtnSalir->Visible = false;
			}
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
		if (Botonazo == 4) {
			this->BtnRegresar->Enabled = false;
			this->BtnLogros->Enabled = false;

			if (Mundo == 1)this->Mundo1->Enabled = true;
			if (Mundo == 2)this->Mundo2->Enabled = true;
			if (Mundo == 3)this->Mundo3->Enabled = true;

			this->Pausa->Enabled = false;

			this->BtnContinuar->Visible = false;
			this->BtnRegresar->Visible = false;
			this->BtnLogros->Visible = false;
			this->PressBtn->Enabled = false;
		}
		if (Botonazo == 5) {
			this->Logros->Enabled = true;
			this->BtnRegresar->Enabled = false;
			this->BtnLogros->Enabled = false;
			lograsos = true;
			this->Mundo1->Enabled = false;
			this->Mundo2->Enabled = false;
			this->Mundo3->Enabled = false;

			this->Pausa->Enabled = false;

			this->BtnContinuar->Visible = false;
			this->BtnRegresar->Visible = false;
			this->BtnLogros->Visible = false;
			this->PressBtn->Enabled = false;
		}
		if (Botonazo == 6) {

			this->BtnContinuar->Enabled = false;
			this->BtnLogros->Enabled = false;
			this->BtnJugar->Enabled = true;
			this->BtnSalir->Enabled = true;
			this->BtnCreditos->Enabled = true;
			Alien->setX(50);
			Alien->setY(250);
			Alien->setVidas(3);
			Minipekka->setX(1300);
			Minipekka->setY(0);
			Steve->setX(0);
			Steve->setY(600);

			this->Mundo1->Enabled = false;
			this->Mundo2->Enabled = false;
			this->Mundo3->Enabled = false;
			this->Menu->Enabled = true;
			this->Pausa->Enabled = false;

			this->BtnContinuar->Visible = false;
			this->BtnRegresar->Visible = false;
			this->BtnLogros->Visible = false;
			this->PressBtn->Enabled = false;
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
	private: System::Void BtnContinuar_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->BtnContinuar->Image = gcnew Bitmap(gcnew String("images//ContinuarAmarillo.png"));
	}
	private: System::Void BtnContinuar_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->BtnContinuar->Image = gcnew Bitmap(gcnew String("images//Continuar.png"));
	}
	private: System::Void BtnRegresar_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->BtnRegresar->Image = gcnew Bitmap(gcnew String("images//RegresarAmarillo.png"));
	}
	private: System::Void BtnRegresar_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->BtnRegresar->Image = gcnew Bitmap(gcnew String("images//Regresar.png"));
	}
	private: System::Void BtnLogros_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->BtnLogros->Image = gcnew Bitmap(gcnew String("images//LogrosAmarillo.png"));
	}
	private: System::Void BtnLogros_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->BtnLogros->Image = gcnew Bitmap(gcnew String("images//Logros.png"));
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


		if (porcentajes == 11)
		{
			CargaUno->Enabled = false;
			STOP->Enabled = true;
			tecla = 1;
			controltecla = 1;


		}




		buffer->Render(canvas);
	}
	private: System::Void Pregunta1_Tick(System::Object^ sender, System::EventArgs^ e) {
		ImageAttributes^ atributo2 = gcnew ImageAttributes();
		ColorMatrix^ filtro2 = gcnew ColorMatrix();
		filtro2->Matrix33 = opacidad1;

		atributo2->SetColorMatrix(filtro2, ColorMatrixFlag::Default, ColorAdjustType::Bitmap);

		buffer->Graphics->Clear(Color::Black);
		buffer->Graphics->DrawImage(fondopregunta1, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta1->Width, fondopregunta1->Height, GraphicsUnit::Pixel,atributo2);
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
		


		if (control1 == 6) {
			opacidad1 += sombra1;
			if (opacidad1 >= 1.0) {
				opacidad1 = 1.0;
			}
		}

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
			buffer->Graphics->DrawImage(Escape, X_P2, Y_P2 + 100, W_P2 - 300, H_P2 - 75);


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

				buffer->Graphics->DrawImage(Escape, X_P2, Y_P2 + 100, W_P2 - 300, H_P2 - 75);

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

			buffer->Graphics->DrawImage(Respuesta1, X_P1 + 30, Y_P1-25, W_P1, H_P1);

			if (W_P1 < 1050 && H_P1 < 350) {

				X_P1 -= 7.5;
				Y_P1 -= 2.5;

				W_P1 += velocidad * 15;
				H_P1 += velocidad * 5;

			}
			cambio++;


		}

		if (cambio >= 100) {

			buffer->Graphics->DrawImage(Escape, X_P2-10, Y_P2 + 100, W_P2 - 300, H_P2 - 75);

			escaper1 = true;
			Nave->setXt(800);
		}

		buffer->Render(canvas);





	} //CHECK 

	private: System::Void PreguntaDos_Tick(System::Object^ sender, System::EventArgs^ e) {

		ImageAttributes^ atributo3 = gcnew ImageAttributes();
		ColorMatrix^ filtro3 = gcnew ColorMatrix();
		filtro3->Matrix33 = opacidad1;

		atributo3->SetColorMatrix(filtro3, ColorMatrixFlag::Default, ColorAdjustType::Bitmap);

		buffer->Graphics->Clear(Color::Black);
		buffer->Graphics->DrawImage(fondopregunta2, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta2->Width, fondopregunta2->Height, GraphicsUnit::Pixel,atributo3);
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


		if (control2 == 6) {
			opacidad1 += sombra1;
			if (opacidad1 >= 1.0) {
				opacidad1 = 1.0;
			}
		}

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

			buffer->Graphics->DrawImage(Pregunta2, X_P1, Y_P1 -50, W_P1, H_P1);

			if (W_P1 < anchooobjetivo_pregunta2 && H_P1 < anchooobjetivo_pregunta2) {

				X_P1 -= 8;
				Y_P1 -= 4.5;

				W_P1 += velocidad * 16;
				H_P1 += velocidad * 9;

			}
			cambio++;


		}

		if (cambio >= 100) {

			escapep2 = true;
			buffer->Graphics->DrawImage(Escape, X_P2, Y_P2 + 100, W_P2 - 300, H_P2 - 75);


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

			buffer->Graphics->DrawImage(Respuesta2, X_P1 + 20, Y_P1-30, W_P1, H_P1);

			if (W_P1 < 1050 && H_P1 < 350) {

				X_P1 -= 7.5;
				Y_P1 -= 2.5;

				W_P1 += velocidad * 15;
				H_P1 += velocidad * 5;

			}
			cambio++;


		}

		if (cambio >= 100) {

			escaper2 = true;
			buffer->Graphics->DrawImage(Escape, X_P2, Y_P2 + 100, W_P2 - 300, H_P2 - 75);


		}

		buffer->Render(canvas);




	}
	private: System::Void PreguntaTres_Tick(System::Object^ sender, System::EventArgs^ e) {

		ImageAttributes^ atributo6 = gcnew ImageAttributes();
		ColorMatrix^ filtro6 = gcnew ColorMatrix();
		filtro6->Matrix33 = opacidad1;

		atributo6->SetColorMatrix(filtro6, ColorMatrixFlag::Default, ColorAdjustType::Bitmap);
		buffer->Graphics->Clear(Color::Black);
		buffer->Graphics->DrawImage(fondopregunta3, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, fondopregunta3->Width, fondopregunta3->Height, GraphicsUnit::Pixel,atributo6);
		buffer->Graphics->DrawImage(P, 380 - ancho_pregunta -10, Y_P);
		buffer->Graphics->DrawImage(R, 460 - ancho_pregunta - 10, Y_R);
		buffer->Graphics->DrawImage(E, 545 - ancho_pregunta - 10, Y_E);
		buffer->Graphics->DrawImage(G, 625 - ancho_pregunta - 10, Y_G);
		buffer->Graphics->DrawImage(Up, 705 - ancho_pregunta - 10, Y_U);
		buffer->Graphics->DrawImage(Np, 790 - ancho_pregunta - 10, Y_N);
		buffer->Graphics->DrawImage(T, 870 - ancho_pregunta - 10, Y_T);
		buffer->Graphics->DrawImage(Ap, 955 - ancho_pregunta - 10, Y_A);
		buffer->Graphics->DrawImage(CERO, 1080 - ancho_pregunta - 10, Y_CERO);
		buffer->Graphics->DrawImage(TRES, 1170 - ancho_pregunta - 10, Y_UNO);

		int caida1 = 4;
		int subida = 2;
		int caida2 = 1;


		if (control3 == 6) {
			opacidad1 += sombra1;
			if (opacidad1 >= 1.0) {
				opacidad1 = 1.0;
			}
		}

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

			buffer->Graphics->DrawImage(Pregunta3, X_P1 + 10, Y_P1-30 , W_P1, H_P1);

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

			buffer->Graphics->DrawImage(Escape, X_P2, Y_P2 + 105, W_P2 - 300, H_P2 - 75);

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
		buffer->Graphics->DrawImage(TRES, 1190 - ancho_pregunta, Y_DOS - 8);


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

			buffer->Graphics->DrawImage(Respuesta3, X_P1 + 30, Y_P1-30, W_P1, H_P1);

			if (W_P1 < 1050 && H_P1 < 350) {

				X_P1 -= 7.5;
				Y_P1 -= 2.5;

				W_P1 += velocidad * 15;
				H_P1 += velocidad * 5;

			}
			cambio++;


		}

		if (cambio >= 100)
		{
			escaper3 = true;
			buffer->Graphics->DrawImage(Escape, X_P2, Y_P2 + 105, W_P2 - 300, H_P2 - 75);

		}

		buffer->Render(canvas);







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

			{
				escapei2 = true;
				buffer->Graphics->DrawImage(Escape, X_P2, Y_P2 + 100, W_P2 - 300, H_P2 - 75);
			}






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
				{
					escapei2_2 = true;
					buffer->Graphics->DrawImage(Escape, X_P2, Y_P2 + 100, W_P2 - 300, H_P2 - 75);
				}




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


		if (porcentajes == 11)
		{
			CargaDos->Enabled = false;
			STOPDOS->Enabled = true;
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


		if (porcentajes == 11)
		{
			CargaTres->Enabled = false;
			STOPTRES->Enabled = true;
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
			pelotas->Clear();
			contador_pelotas = 0;
			indice_pelota = 0;
			pelotas_detenidas = false;

			contador = 0;



			arbitro->reiniciar();


			Mundo2->Enabled = true;
		}
	}

	private: System::Void BtnNo_Click(System::Object^ sender, System::EventArgs^ e) {


		Application::Exit();


	}
    private: System::Void btnGuardarScore_Click(System::Object^ sender, System::EventArgs^ e) {

			   String^ nombre = txtNombreScore->Text->Trim();

			   if (String::IsNullOrEmpty(nombre)) {
				   MessageBox::Show("Por favor ingresa un nombre.", "Aviso",
					   MessageBoxButtons::OK, MessageBoxIcon::Information);
				   return;
			   }

			   GestorScores::GuardarScore(puntaje, nombre);

			   MessageBox::Show("Score guardado correctamente.", "Score",
				  MessageBoxButtons::OK, MessageBoxIcon::Information);

			   txtNombreScore->Enabled = false;
			   btnGuardarScore->Enabled = false;
		   }

	private: System::Void Creditos_Tick(System::Object^ sender, System::EventArgs^ e) {


		canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio_para_buffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio_para_buffer->Allocate(canvas, this->ClientRectangle);


		buffer->Graphics->DrawImage(fondo_credito, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height));

		contador_tipeo++;
		if (contador_tipeo == 5) { l1 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo == 10) { l2 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo == 15) { l3 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo == 20) { l4 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo == 25) { l5 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo == 30) { l6 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo == 35) { l7 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo == 40) { l8 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo == 40) { l8 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo == 45) { b9 = true; System::Console::Beep(900, 20); }







		if (l1) buffer->Graphics->DrawImage(c_c, 450, 100);
		if (l2) buffer->Graphics->DrawImage(c_r, 525, 102);
		if (l3) buffer->Graphics->DrawImage(c_e, 600, 103);
		if (l4) buffer->Graphics->DrawImage(c_d, 675, 106);

		if (l5) buffer->Graphics->DrawImage(c_i, 795, 100);
		if (l6) buffer->Graphics->DrawImage(c_t, 865, 100);
	if (l7) buffer->Graphics->DrawImage(c_o, 935, 100 + 1);
		if (l8) {
			buffer->Graphics->DrawImage(c_s, 1000, 100 + 2);



		}


		buffer->Graphics->DrawImage(c_c, 370 - ancho_pregunta, Y_P);
		buffer->Graphics->DrawImage(c_r, 450 - ancho_pregunta, Y_R);
		buffer->Graphics->DrawImage(c_e, 535 - ancho_pregunta, Y_E);
		buffer->Graphics->DrawImage(c_d, 615 - ancho_pregunta, Y_G);
		buffer->Graphics->DrawImage(c_i, 695 - ancho_pregunta, Y_U);
		buffer->Graphics->DrawImage(c_t, 780 - ancho_pregunta, Y_N);
		buffer->Graphics->DrawImage(c_o, 860 - ancho_pregunta, Y_T);
		buffer->Graphics->DrawImage(c_s, 945 - ancho_pregunta, Y_A);



		int caida1 = 4;
		int subida = 2;
		int caida2 = 1;


		if (C_P == 1) { Y_P += caida1; if (Y_P >= 80) { Y_P = 80; C_P = 2; } }
		else if (C_P == 2) { Y_P -= subida; if (Y_P <= 50) { Y_P = 50; C_P = 3; } }
		else if (C_P == 3) { Y_P += caida2; if (Y_P >= 80) { Y_P = 80; C_P = 4; } }


		if (C_R == 1) { Y_R += caida1; if (Y_R >= 80) { Y_R = 80; C_R = 2; } }
		else if (C_R == 2) { Y_R -= subida; if (Y_R <= 50) { Y_R = 50; C_R = 3; } }
		else if (C_R == 3) { Y_R += caida2; if (Y_R >= 80) { Y_R = 80; C_R = 4; } }

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




		if (Y_P == 38) C_R = 1;
		if (Y_R == 38) C_E = 1;
		if (Y_E == 38) C_G = 1;
		if (Y_G == 38) C_U = 1;
		if (Y_U == 38) C_N = 1;
		if (Y_N == 38) C_T = 1;
		if (Y_T == 38) C_A = 1;




		if (C_A == 4) {

			buffer->Graphics->DrawImage(autores, X_P1 + 20, Y_P1, W_P1, H_P1);

			if (W_P1 < anchooobjetivorespuesta2 && H_P1 < altoobjetivorespuesta2) {

				X_P1 -= 7.5;
				Y_P1 -= 2.5;

				W_P1 += velocidad * 15;
				H_P1 += velocidad * 5;
				cambio++;


			}


		}


		if (cambio >= 50) {
			escape_c = true;
		}


		buffer->Render(canvas);
		





	}
	private: System::Void GUARDAR_Tick(System::Object^ sender, System::EventArgs^ e) {

		Graphics ^ canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espacio = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio->Allocate(canvas, this->ClientRectangle);


		buffer->Graphics->DrawImage(Carga2, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height));


		contador_tipeo2++;

		if (contador_tipeo2 == 5) { g1 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo2 == 10) { g2 = true; System::Console::Beep(900, 20); }
		if (contador_tipeo2 == 15) { g3 = true; System::Console::Beep(900, 20); }


		if (g1) buffer->Graphics->DrawImage(ingrese, 350 - ancho_pregunta, Y_P - 20 - 8);
		if (g2) buffer->Graphics->DrawImage(su, 350 - ancho_pregunta + 400, Y_R - 28);
		if (g3) { buffer->Graphics->DrawImage(nombre, 350 - ancho_pregunta + 540, Y_R - 28); }


		buffer->Render(canvas);


		delete buffer;;
		
	}
private: System::Void MUNDOCEROUNO_Tick(System::Object^ sender, System::EventArgs^ e) {


	buffer->Graphics->Clear(Color::Black);


	ImageAttributes^ atributo1 = gcnew ImageAttributes();
	ColorMatrix^ filtro1 = gcnew ColorMatrix();


	if (control1 == 1) {
		opacidad1 -= sombra;
		if (opacidad1 <= 0.0) {
			opacidad1 = 0.0;
			control1++;
		}
	}
	if (control1 == 2) {
		opacidad1 += sombra;
		if (opacidad1 >= 1.0) {
			opacidad1 = 1.0;
			control1++;
		}
	}
	if (control1 == 3) {
		STOP->Enabled = true;
		MUNDOCEROUNO->Enabled = false;
		control1++;
	}
	if (control1 == 4) {
		opacidad1 -= sombra;
		if (opacidad1 <= 0.0) {
			opacidad1 = 0.0;
			control1++;
		}
	}
	if (control1 == 5) {
		
		MUNDOCEROUNO->Enabled = false;
		PreguntaUno->Enabled = true;
		control1++;
	}
	


	filtro1->Matrix33 = opacidad1;

	atributo1->SetColorMatrix(filtro1, ColorMatrixFlag::Default, ColorAdjustType::Bitmap);


	if (control1 == 1)
	{
		buffer->Graphics->DrawImage(Carga1, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, Carga1->Width, Carga1->Height, GraphicsUnit::Pixel, atributo1);

	}
	if (control1 == 2 || control1 == 3|| control1==4)
	{
		buffer->Graphics->DrawImage(MUNDO01, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, MUNDO01->Width, MUNDO01->Height, GraphicsUnit::Pixel, atributo1);

	}

	buffer->Render(canvas);




}
private: System::Void STOP_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	STOP->Enabled = false;
	MUNDOCEROUNO->Enabled = true;

	
}
private: System::Void MUNDOCERODOS_Tick(System::Object^ sender, System::EventArgs^ e) {

	buffer->Graphics->Clear(Color::Black);


	ImageAttributes^ atributo4 = gcnew ImageAttributes();
	ColorMatrix^ filtro4 = gcnew ColorMatrix();


	if (control2 == 1) {
		opacidad1 -= sombra;
		if (opacidad1 <= 0.0) {
			opacidad1 = 0.0;
			control2++;
		}
	}
	if (control2 == 2) {
		opacidad1 += sombra;
		if (opacidad1 >= 1.0) {
			opacidad1 = 1.0;
			control2++;
		}
	}
	if (control2 == 3) {
		STOPDOS->Enabled = true;
		MUNDOCERODOS->Enabled = false;
		control2++;
	}
	if (control2 == 4) {
		opacidad1 -= sombra;
		if (opacidad1 <= 0.0) {
			opacidad1 = 0.0;
			control2++;
		}
	}
	if (control2 == 5) {

		MUNDOCERODOS->Enabled = false;
		PreguntaDos->Enabled = true;
		control2++;
	}



	filtro4->Matrix33 = opacidad1;

	atributo4->SetColorMatrix(filtro4, ColorMatrixFlag::Default, ColorAdjustType::Bitmap);


	if (control2 == 1)
	{
		buffer->Graphics->DrawImage(Carga2, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, Carga2->Width, Carga2->Height, GraphicsUnit::Pixel, atributo4);

	}
	if (control2 == 2 || control2 == 3 || control2 == 4)
	{
		buffer->Graphics->DrawImage(MUNDO02, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, MUNDO02->Width, MUNDO02->Height, GraphicsUnit::Pixel, atributo4);

	}

	buffer->Render(canvas);
}
private: System::Void STOPDOS_Tick(System::Object^ sender, System::EventArgs^ e) {
	STOPDOS->Enabled = false;
	MUNDOCERODOS->Enabled = true;
}
private: System::Void MUNDOCEROTRES_Tick(System::Object^ sender, System::EventArgs^ e) {

	buffer->Graphics->Clear(Color::Black);


	ImageAttributes^ atributo5 = gcnew ImageAttributes();
	ColorMatrix^ filtro5 = gcnew ColorMatrix();


	if (control3 == 1) {
		opacidad1 -= sombra;
		if (opacidad1 <= 0.0) {
			opacidad1 = 0.0;
			control3++;
		}
	}
	if (control3 == 2) {
		opacidad1 += sombra;
		if (opacidad1 >= 1.0) {
			opacidad1 = 1.0;
			control3++;
		}
	}
	if (control3 == 3) {
		STOPTRES->Enabled = true;
		MUNDOCEROTRES->Enabled = false;
		control3++;
	}
	if (control3 == 4) {
		opacidad1 -= sombra;
		if (opacidad1 <= 0.0) {
			opacidad1 = 0.0;
			control3++;
		}
	}
	if (control3 == 5) {

		MUNDOCEROTRES->Enabled = false;
		PreguntaTres->Enabled = true;
		control3++;
	}



	filtro5->Matrix33 = opacidad1;

	atributo5->SetColorMatrix(filtro5, ColorMatrixFlag::Default, ColorAdjustType::Bitmap);


	if (control3 == 1)
	{
		buffer->Graphics->DrawImage(Carga3, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, Carga3->Width, Carga3->Height, GraphicsUnit::Pixel, atributo5);

	}
	if (control3 == 2 || control3 == 3 || control3 == 4)
	{
		buffer->Graphics->DrawImage(MUNDO03, Rectangle(0, 0, this->ClientSize.Width, this->ClientSize.Height), 0, 0, MUNDO03->Width, MUNDO03->Height, GraphicsUnit::Pixel, atributo5);

	}

	buffer->Render(canvas);

}
private: System::Void STOPTRES_Tick(System::Object^ sender, System::EventArgs^ e) {


	STOPTRES->Enabled = false;
	MUNDOCEROTRES->Enabled = true;

}
};
}