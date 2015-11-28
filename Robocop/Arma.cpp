#include <iostream>
#include "Arma.h"

using namespace std;

const int Arma::NUM_MAX_BALAS = 12;

Arma::Arma()
{
	this->tipo = "Desconhecido";
	this->numAtualBalas = new int(0);
}

Arma::Arma(const string &tipo, int balas)
:numAtualBalas(0)
{
	setTipo(tipo);
	setNumeroBalas(balas);
}
Arma::Arma(const Arma &origem)
{
	this->tipo = origem.tipo;
	this->numAtualBalas = new int(*origem.numAtualBalas);
}

Arma::~Arma()
{
	delete numAtualBalas;
}

void Arma::setNumeroBalas(int balas)
{
	this->numAtualBalas = new int(balas);
}
int Arma::getNumeroBalas() const
{
	return *this->numAtualBalas;
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
	
		if (balas + *this->numAtualBalas <= this->NUM_MAX_BALAS){
				this->numAtualBalas += balas;
			//return this->numAtualBalas;
		}
		else{
			//this.numAtual
			cout << "Numero de balas excede a Quantidade maxima de balas" << endl;
		}
}
void Arma::atributosArma() const
{
	cout << endl << "Tipo da Arma: " << getTipo() << endl;
	cout << "Quantidade de Balas: " << this->getNumeroBalas() << endl;
	
}
ostream &operator<< ( ostream &output, const Arma &arma )
{
	output 	<< "\nTIPO DE ARMA:\t\t" << arma.tipo
					<< "\nQUANTIDADE BALAS:\t" << *arma.numAtualBalas;
	return output;
}
void Arma::operator= ( const Arma &origem)
{
	this->tipo = origem.tipo;
	this->numAtualBalas = new int(*origem.numAtualBalas);
}

