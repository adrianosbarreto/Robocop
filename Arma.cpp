#include <iostream>
#include "Arma.h"

using namespace std;

const int Arma::NUM_MAX_BALAS = 12;

Arma::Arma()
{
	this->tipo = "Desconhecido";
	this->numAtualBalas = 0;
}

Arma::Arma(const string &tipo, int balas)
:numAtualBalas(0)
{
	setTipo(tipo);
	setNumeroBalas(balas);
}
Arma::~Arma()
{
}

void Arma::setNumeroBalas(int balas)
{
	adicionarBalas(balas);
}
int Arma::getNumeroBalas() const
{
	return this->numAtualBalas;
}
void Arma::setTipo(const string &tipo)
{
	if(tipo.size() <= 15){
		this->tipo = tipo;
	}
}
string Arma::getTipo() const
{
		return this->tipo;
}
bool Arma::atirar()
{
	if(this->numAtualBalas > 0)
	{
		this->numAtualBalas--;
		return true;
	}
	else
	{
		cout << "Arma Sem Balas";
		return false;
	}
}
void Arma::adicionarBalas(int balas){
	
		if (balas + this->numAtualBalas <= this->NUM_MAX_BALAS){
				this->numAtualBalas += balas;
			//return this->numAtualBalas;
		}
		else{
			cout << "Numero de balas excede a Quantidade maxima de balas" << endl;
		}
}
void Arma::atributosArma() const
{
	cout << endl << "Tipo da Arma: " << getTipo() << endl;
	cout << "Quantidade de Balas: " << this->getNumeroBalas() << endl;
	
}