#include <iostream>
#include "Robocop.h"


using namespace std;

ostream &operator<< (ostream &output, const Robocop &robocop){
	output	<< "-----------------------------ROBOCOP-------------------------------" << endl 
			<< "-NOME: \t\t\t" << robocop.id << endl
			<< "-DATA CRIACAO: \t\t" << robocop.dataCriacao << endl
			<< "-CARGA DA BATERIA: \t" << robocop.tempoCarga << "h" << endl
			<< "-VELOCIDADE ATUAL: \t" << robocop.velocidadeAtual << "km/h" << endl
			
			<< "-DIRETIVAS: " 	<< endl
								<< "\t" << robocop.diretivas[0] << endl
								<< "\t" << robocop.diretivas[1] << endl
								<< "\t" << robocop.diretivas[2] << endl
			<< "-------------------------------------------------------------------";
	return output;
}

bool Robocop::operator== (const Robocop &robo) const
{
	int i;
	if (this->id == robo.id)
	{
		if(this->dataCriacao == robo.dataCriacao)
		{
			for( i = 0; i < 3; i++ )
			{
				if(this->diretivas[i] != robo.diretivas[i])
				{
						return false;
				}
			}
			return true;
		}
	}
	else
	{
		return false;
	}
	
}

void Robocop::operator= ( const Robocop &novo )
{
	this->id = novo.id;
	
}

 

Robocop::Robocop(const string &id)
:Robo(70.0, 15.0, 8.0, 30.0), armaRobo("Colt", 12), armadura("Aco", 4)
{
	setId(id);
}

Robocop::Robocop(const Robocop &robo)
:Robo(70.0, 15.0, 8.0, 30.0), armaRobo(robo.armaRobo), armadura(robo.armadura)
{
	this->id = robo.id;		
}
Robocop::Robocop()
:Robo(0, 0, 0, 0),armaRobo("SEMNOME", 0), armadura("SEMNOME", 0)
{
	this->id = "Nome";
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
void Robocop::mostrarAtributos() const
{
	cout << "Id: " << getId() << endl;
}

Robocop::~Robocop()
{
	
}

/*
Robocop* Robocop::criarRobocop(Robocop *a, const Robocop &rob)
{		
		int i, tam = ++cibAtual;
		Robocop *aux = new Robocop[tam];
		
		if(tam > 1)
		{
			for(i = 0; i < tam; i++)
			{
				aux[i] = a[i];
			}
			delete a;
			a = new Robocop[tam+1];
			for(i = 0; i < tam; i++)
			{
				a[i] = aux[i];
			}
			a[tam] = rob;
			
			
		}
		else if (tam == 1)
		{
			a = new Robocop[1];
			a[0] = rob;
		}	
		delete aux;
		return a;
}
 */
