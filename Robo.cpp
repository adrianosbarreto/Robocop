#include <iostream>
#include "Robo.h"


using namespace std;

const int Robo::CIB_MAX = 4;
int Robo::cibAtual = 0;
const string Robo::diretivas[3] = {"Nao matar Inocentes",
			"Nao desobedecer as Ordens do Comando",
			"Nao ferir a seguda lei desde que nao seja ferida a primeira"};

Robo::Robo(float velocidadeMax,float tempoMaxCarga, float carga, float velocidadeAtual)
:VELOCIDADE_MAX(velocidadeMax), TEMPO_MAX_CARGA(tempoMaxCarga), dataCriacao(8,10,2014)
{
	setTempoCarga(carga);
	setCibAtual();
	setVelocidadeAtual(velocidadeAtual);
}

Robo::Robo(const Robo &robo)
:VELOCIDADE_MAX(robo.VELOCIDADE_MAX),
		TEMPO_MAX_CARGA(robo.TEMPO_MAX_CARGA), dataCriacao(robo.dataCriacao)
{
	setCibAtual();
	this->tempoCarga = robo.tempoCarga;
	this->velocidadeAtual = robo.velocidadeAtual;
		
}
Robo::Robo()
:VELOCIDADE_MAX(50.0), TEMPO_MAX_CARGA(15), dataCriacao(8,10,2014)
{
	setCibAtual();
	this->tempoCarga = 1.0;
	this->velocidadeAtual = 5.0;
	
}
void Robo::setTempoCarga(float carga)
{
	if(carga <= 20 && carga >= 0)
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
float Robo::getTempoCarga() const
{
		return this->tempoCarga;
}
void Robo::setVelocidadeAtual(float velocidade)
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
float Robo::getVelocidadeAtual() const
{
	return this->velocidadeAtual;
}
void Robo::setCibAtual()
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
int Robo::getCibAtual() const
{
		return cibAtual;
}
int Robo::recarrega()
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
void Robo::mostrarAtributos() const
{
	int i;
	cout << endl << "Data Criacao: " << dataCriacao.getDia()
							<< "/ " << dataCriacao.getMes()<< " /"<< dataCriacao.getAno() << endl;
	cout << "Carga da Bateria: " << getTempoCarga() << "h" << endl;
	cout << "VelocidadeAtual: " << getVelocidadeAtual() << "Km/h" << endl;
	cout << "Diretivas: " << endl;
	for(i=0; i<3;i++){
		cout << "\t" <<diretivas[i]<< endl;
	}
	
}
void Robo::criado()
{
	cout << "Ciborgue Criado com Sucesso!";
}
float Robo::getVelocidadeMax() const
{
	return this->VELOCIDADE_MAX;
}
int Robo::getCibMax()
{
	return CIB_MAX;
}

int Robo::menu() const
{
	int resp;
	cout << "1 - Criar" << endl;
	cout << "2 - Clonar" << endl;
	cin >> resp;
	return resp;
}
Robo::~Robo()
{
	
}