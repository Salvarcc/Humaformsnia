#pragma once

class NPC : public Entidad
{
public:
	NPC();
	~NPC();
	void moverse(Direccion num);
	void moversprite(Direccion num);

	int getVidas();

	void setVidas(int vidas);

private:

	int vidas;

};

// el que lee es perra