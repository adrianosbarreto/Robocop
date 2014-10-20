#include <iostream>
#include "Robocop.h"


using namespace std;

const int Robocop::CIB_MAX = 4;
int Robocop::cibAtual = 0;

Robocop::Robocop(float velocidade,float tempoMaxCarga, float carga, const string &id, float velocidadeAtual)
:VELOCIDADE_MAX(velocidade), TEMPO_MAX_CARGA(tempoMaxCarga),
				dataCriacao(8,10,2014), armaRobo("Colt", 12), armadura("Aco", 4)
{
	setId(id);
	setTempoCarga(carga);
	setCibAtual();
	setVelocidadeAtual(velocidadeAtual);

}

Robocop::Robocop(const Robocop &robo)
:VELOCIDADE_MAX(robo.VELOCIDADE_MAX), TEMPO_MAX_CARGA(robo.TEMPO_MAX_CARGA),
				dataCriacao(robo.dataCriacao), armaRobo(robo.armaRobo), armadura(robo.armadura)
{
	setCibAtual();
	this->id = robo.id;
	this->tempoCarga = robo.tempoCarga;
	this->velocidadeAtual = robo.velocidadeAtual;
		
}
Robocop::Robocop()
:VELOCIDADE_MAX(50.0), TEMPO_MAX_CARGA(15), dataCriacao(8,10,2014), armaRobo("Colt", 12), armadura("Aco", 4)
{
	setCibAtual();
	this->id = "Name";
	this->tempoCarga = 1.0;
	this->velocidadeAtual = 5.0;
	
	
}
void Robocop::setId(const string &id)
{
	int cont = 0, i, tam = id.size();
		
		for (i = 0 ; i < tam; i++)
		{
			if(isalpha(id[i]))
			{
				cont++;
			}
		}
		if(cont == tam)
		{
			this->id = id;
		}
		else
		{
			cout << "Nome Invalido!!";
		}
}

string Robocop::getId() const
{
		return this->id;
}
void Robocop::setTempoCarga(float carga)
{
	if(carga<=20 && carga>=0)
		{
			this->tempoCarga = carga;
		}
		else
		{
			do
			{
				cout << "Digite Quantidade Valida de Carga(entre 0 e 20): ";
				cin >> carga;
				this->tempoCarga = carga;
			}while((this->tempoCarga<0)||(this->tempoCarga>20));
		}

}
float Robocop::getTempoCarga() const
{
		return this->tempoCarga;
}
void Robocop::setVelocidadeAtual(float velocidade)
{
	if(velocidade <= VELOCIDADE_MAX && velocidade >= 0)
		{
			this->velocidadeAtual = velocidade;
		}
		else
		{
			do
			{
				cout << "Digite Velocidade Valida (entre 0 e "<< VELOCIDADE_MAX <<"): ";
				cin >> velocidade;
				this->velocidadeAtual = velocidade;
			}while((this->velocidadeAtual < 0)||(this->velocidadeAtual > VELOCIDADE_MAX));
		}

}
float Robocop::getVelocidadeAtual() const
{
	return this->velocidadeAtual;
}
void Robocop::setCibAtual()
{
	if(cibAtual < CIB_MAX)
		{
			cibAtual++;
		}
		else
		{
			cout << "Nao pode Criar mais Ciborgues ";
		}
}
int Robocop::getCibAtual() const
{
		return cibAtual;
}
int Robocop::recarrega()
{
	int resp;
	float i = 0.0;
		cout << "Deseja Recarregar";
		cin >> resp;
		if(resp == 1)
		{
				incrementaValor(i, TEMPO_MAX_CARGA);
				this->tempoCarga = incrementaValor(i, TEMPO_MAX_CARGA); 
				
		}
		else if (resp == 0)
		{
				return 0;
		}
		else
		{
			cout << "Resposta Invalida";
		}
	return 1;
		
}
void Robocop::mostrarAtributos() const
{
	cout << endl << "Data Criacao: " << dataCriacao.getDia()
							<< "/ " << dataCriacao.getMes()<< " /"<< dataCriacao.getAno() << endl;
	cout << "Id: " << getId() << endl;
	cout << "Carga da Bateria: " << getTempoCarga() << "h" << endl;
	cout << "VelocidadeAtual: " << getVelocidadeAtual() << "Km/h" << endl;
	cout << "Arma: " << armaRobo.getTipo() << endl;
	cout << "Armadura: " << armadura.getMaterial() << endl;
}
void Robocop::criado()
{
	cout << "Ciborgue Criado com Sucesso!";
}
float Robocop::getVelocidadeMax() const
{
	return this->VELOCIDADE_MAX;
}
int Robocop::getCibMax() const
{
	return this->CIB_MAX;
}
//Robocop *Robocop::criarNovoCiborgue()
//{	
//	cout << "";
//}

int Robocop::menu() const
{
	int resp;
	cout << "1 - Criar" << endl;
	cout << "2 - Clonar" << endl;
	cin >> resp;
	return resp;
}

Diretivas * Robocop::AdicionarDiretiva(string texto)
{
	Diretivas *novo = new Diretivas(texto);
	
	return novo;
}
 
 
Robocop::~Robocop()
{	
}
void Robocop::imprimirDiretivas(const Robocop& a) const
{
	cout << a.diretivas->getTextoDiretiva()<< endl;
}

