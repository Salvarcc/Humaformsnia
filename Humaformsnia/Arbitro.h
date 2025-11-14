#include "MyForm.h"
#include "Entidad.h"


ref class Arbitro : public Entidad
{

private:
	bool movimineto;



public:


	Arbitro(int x, int y );
	~Arbitro();


};

Arbitro::Arbitro (int x, int y ): Entidad (x,y,ancho,alto)
{



}

Arbitro::~Arbitro()
{
}