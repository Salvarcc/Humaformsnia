#include "MyForm.h"
#include "Entidad.h"

enum class EfectoAliado {
    Ninguno,
    RalentizarRobots,
    DetenerPelotas
};


ref class Aliado : public Entidad

{

public:
    Aliado();
    ~Aliado();

    EfectoAliado getEfecto();


protected:

    EfectoAliado efecto;

};
Aliado::Aliado() : Entidad(0, 0, 0, 0)
{
    this->efecto = EfectoAliado::Ninguno;
}
Aliado::~Aliado()

{

}
EfectoAliado Aliado::getEfecto()

{

    return this->efecto;

}

