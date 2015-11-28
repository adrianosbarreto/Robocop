#include "Armadura.h"

using namespace std;

Armadura::Armadura(const string &material, int resistencia)
{
	this->material = material;
	this->resistencia = new int( resistencia );
}

Armadura::Armadura()
{
	this->material = "desconhecido";
	this->resistencia = new int( 0 );
}

Armadura::Armadura( const Armadura &origem )
{
	this->material = origem.material;
	this->resistencia = new int( *origem.resistencia );
}

Armadura::~Armadura()
{
	delete this->resistencia;
}

void Armadura::setMaterial( const string &material )
{
	if ( material.size() < 15 )
	{
		this->material = material;
	}
}
void Armadura::setResistencia( int resistencia )
{
	if( resistencia >= 10 )
	{
		this->resistencia = new int( resistencia );
	}
	else{
		this->resistencia = new int( 0 );
	}
}

string Armadura::getMaterial() const
{
	return this->material;
}
int Armadura::getResistencia()const
{
	return *this->resistencia;
}

ostream &operator<< ( ostream &output, const Armadura &armadura )
{
	output 	<< "\nMATERIAL ARMADURA:\t" << armadura.material 
			<< "\nRESISTENCIA ARMADURA:\t" << *armadura.resistencia;
	return output;
}
void Armadura::operator= ( const Armadura &origem )
{
	this->material = origem.material;
	this->resistencia = new int( *origem.resistencia );
}

