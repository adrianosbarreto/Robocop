#include "Diretivas.h"
#include <iostream>

using namespace std;

int Diretivas::numAtualDiretivas = 0;
const int Diretivas::NUM_MAX_DIRETIVAS = 10;

Diretivas::Diretivas(const string &texto)
{
	setTextoDiretiva(texto);
	this->numAtualDiretivas++;
}

Diretivas::Diretivas(const Diretivas &origem)
{
	this->textoDiretiva = new string( *origem.textoDiretiva );
	this->numAtualDiretivas++;
}

Diretivas::Diretivas()
{
	this->textoDiretiva = new string("Sem texto");
	this->numAtualDiretivas++;
}
	
void Diretivas::setTextoDiretiva(const string &texto)
{
	if (texto.size() <= 20)
	{
		this->textoDiretiva = new string( texto );
	}
	else
	{
		cout << "Diretiva Invalida.";
		this->textoDiretiva = new string( "Nova Diretiva" );
	}
}
string Diretivas::getTextoDiretiva() const
{
	return *this->textoDiretiva;
}
int Diretivas::getNumAtualDiretivas() const
{
	return this->numAtualDiretivas;
}

Diretivas::~Diretivas()
{
	delete textoDiretiva;
}

ostream &operator<< ( ostream &output, const Diretivas &diretiva )
{
	output 	<< "\nTEXTO DIRETIVA: " << *diretiva.textoDiretiva;
	return output;
}
void Diretivas::operator= ( const Diretivas &origem )
{
	this->textoDiretiva = new string( *origem.textoDiretiva );
}

