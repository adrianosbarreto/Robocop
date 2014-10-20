#include "Diretivas.h"
#include <iostream>

using namespace std;

int Diretivas::numAtualDiretivas = 0;

Diretivas::Diretivas(const string &texto)
{
	setTextoDiretiva(texto);
	this->numAtualDiretivas++;
}

Diretivas::Diretivas()
{
	this->textoDiretiva = "Sem texto";
	this->numAtualDiretivas++;
}
	
void Diretivas::setTextoDiretiva(const string &texto)
{
	if (texto.size() <= 20)
	{
		this->textoDiretiva = texto;
	}
	else
	{
		cout << "Diretiva Invalida.";
		this->textoDiretiva = "Nova Diretiva";
	}
}
string Diretivas::getTextoDiretiva() const
{
	return this->textoDiretiva;
}
int Diretivas::getNumAtualDiretivas() const
{
	return this->numAtualDiretivas;
}

Diretivas::~Diretivas()
{
}