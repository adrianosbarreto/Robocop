#include "Armadura.h"

using namespace std;

Armadura::Armadura(const string &material, int resistencia)
{
	this->material = material;
	this->resistencia = resistencia;
}

Armadura::Armadura()
{
	this->material = "Ferro";
	this->resistencia = 2;
}

Armadura::~Armadura()
{
}

void Armadura::setMaterial(const string &material)
{
	if (material.size() < 15)
	{
		this->material = material;
	}
}
void Armadura::setResistencia(int resistencia)
{
	if(resistencia >= 10)
	{
		this->resistencia = resistencia;
	}
}

string Armadura::getMaterial() const
{
	return this->material;
}
int Armadura::getResistencia()const
{
	return this->resistencia;
}


