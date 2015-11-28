#include <iostream>
#include "Robocop.h"

using namespace std;

const float Robocop::VELOCIDADE_MAX = 80.0;
const string Robocop::DIRETIVAS[] = {"Nao Matar", "Nao Desobecer", "Nao Descuprir as outras 2 Diretivas"};
vector<string> Robocop::PRESOS;
vector<Robocop> Robocop::ROBOCOPS;
int Robocop::NUM_ROBOCOP = 0;

Robocop::Robocop(  const string &id )
:dataCriacao( 1, 1, 2015 )
{
	setId( id );
	this->velocidade = 0.0;
	this->tempoCarga = 0.0;
	Robocop::NUM_ROBOCOP++;
}

Robocop::Robocop( const string &id, float velocidade, float tempoCarga, const Data &dataCricao )
:dataCriacao( dataCricao )
{
	setId( id );
	setVelocidade( velocidade );
	setTempoCarga( tempoCarga );
	Robocop::NUM_ROBOCOP++;
}

Robocop::Robocop( const Robocop &origem )
:dataCriacao( origem.dataCriacao )
{
	this->id = new string( *origem.id );
	this->velocidade = origem.velocidade;
	this->tempoCarga = origem.tempoCarga;
	Robocop::NUM_ROBOCOP++;
}

Robocop::~Robocop()
{
	delete id;
	Robocop::NUM_ROBOCOP--;
}

void Robocop::operator= ( const Robocop &origem )
{
	this->dataCriacao = origem.dataCriacao;
	this->id =new string( *origem.id ) ;
	this->velocidade = origem.velocidade;
	this->tempoCarga = origem.tempoCarga;
	Robocop::NUM_ROBOCOP++;
}

ostream &operator<< ( ostream &output, const Robocop &robocop ){
	output	<< "-----------------------------ROBOCOP-------------------------------" << "\n"
			<< "-NOME: \t\t\t" << *robocop.id << "\n"
			<< "-DATA CRIACAO: \t\t" << robocop.dataCriacao << "\n"
			<< "-CARGA DA BATERIA: \t" << robocop.tempoCarga << "h" << "\n"
			<< "-VELOCIDADE : \t\t" << robocop.velocidade << "km/h" << "\n"
			<< "-------------------------------------------------------------------\n";
	return output;
}

void Robocop::setId(const string &id)
{
	int cont = 0, i, tam = id.size();
	string aux = *id;
	if( tam <= 45 ){
		for ( i = 0 ; i < tam; i++ ) //Verifica se nao existe Numeros ou caracteres especiais no Nome
		{
			if( isalpha( id[i] ) )
			{
				cont++;
			}
		}
		if( cont == tam )
		{
				this->id = aux;
		}
		else
		{
				this->id = new string("DESCONHECIDO");
				cout << "Erro. Nome invalido nao pode conter numeros!!";
		}
	}
	else
	{
		cout << "Erro. Nome muito grande.";
		this->id = ew string(aux.substr( 1, 45 ));		
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

void Robocop::setVelocidade(float velocidade)
{
	if(velocidade <= VELOCIDADE_MAX && velocidade >= 0)
		{
			this->velocidade = velocidade;
		}
		else
		{
			do
			{
				cout << "Digite Velocidade Valida (entre 0 e "<< VELOCIDADE_MAX <<"): ";
				cin >> velocidade;
				this->velocidade = velocidade;
			}while((this->velocidade < 0)||(this->velocidade > VELOCIDADE_MAX));
		}

}

float Robocop::getVelocidade() const
{
	return this->velocidade;
}

void Robocop::recarregar()
{
	setTempoCarga(20.0);
	
}

void Robocop::clonar( int posicao )
{
	ROBOCOPS.push_back( ROBOCOPS[posicao] );
}

void Robocop::mostrarDiretiva() 
{
	int i;
	for( i = 0; i < Robocop::NUM_DIRETIVAS ; i++)
	{
		cout << DIRETIVAS[i] << "\n" << endl;
	}
}


void Robocop::adicionarRobocop(const Robocop &novo)
{
	Robocop::ROBOCOPS.push_back(novo);
}

void Robocop::imprimirRobocop()
{
	int i;
	for( i = 0; i < NUM_ROBOCOP; i++ )
	{
		cout << ROBOCOPS[i];
	}
}

int Robocop::menuPrincipal() const
{
	int resp;
	cout << "1 - Criar\n" << endl;
	cout << "2 - Clonar\n" << endl;
	cin >> resp;
	return resp;
}
int Robocop::menuSecundario() const
{
	int resp;
	cout << "1 - Adicionar Pessoa Presa\n" << endl;
	cout << "2 - Modificar Velocidade\n";
	cout << "3 - Ver Diretivas\n";
	cin >> resp;
	return resp;
}

int Robocop::getNumMax(){
	return NUM_ROBOCOP;
}

Robocop Robocop::getRobocop( int posicao )
{
	return ROBOCOPS[posicao];
}





