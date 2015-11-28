#ifndef ROBOCOP_H
#define ROBOCOP_H

#include "Data.h"
#include "Arma.h"
#include "Diretivas.h"
#include "Armadura.h"
#include "Robo.h"


#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::ostream;

class Robocop : public Robo
{
	
friend ostream &operator<< ( ostream &output, const Robocop &robocop );
	
private:
	static int NUM_ROBOCOP;

	const static int NUM_DIRETIVAS = 3;
	
	const static float VELOCIDADE_MAX = 80.0; //Const static
	
	//const static string DIRETIVAS[NUM_DIRETIVAS]; //Array
	const static Diretivas diretivas[NUM_DIRETIVAS];
	
	vector<Arma> armas;
	
	vector<Armadura> armaduras;
	
	//static vector<string> PRESOS; //vector push_back
	
	static vector<Robocop> ROBOCOPS;
	
	Data dataCriacao; //Composição Classe Data
	
	float velocidade;
	
	float tempoCarga;
	
	string *id; //String

public:
	void operator =( const Robocop &origem );

	Robocop( const string& );
	Robocop( const Robocop &); //Construtor de Copia
	Robocop( const string& = "", const string& = "desconhecido", float = 0.0, float = 0.0,
							const Data&= Data(),const Arma & = Arma(), const Armadura & = Armadura());
	~Robocop();
	
	void setId( const string &id );
	const string getId() const;
	
	void setTempoCarga( float carga );
	float getTempoCarga() const;
	
	void setVelocidade( float velocidade );
	float getVelocidade() const;
	
	inline void adicionarArma( const Arma &arma ){ armas.push_back( arma ); };
	inline void adicionarArmadura( const Armadura &armadura ){ armaduras.push_back( armadura ); };
	void recarregar();
	int menuPrincipal() const; 
	int menuSecundario() const;
	static void mostrarDiretiva();
	void mostrarArmas() const;
	void mostrarArmaduras() const;
	void imprimirAtributos() const;
	static void adicionarRobocop( const Robocop & );
	static void imprimirRobocop();
	static void clonar( int );
	static int getNumMax();
	static Robocop getRobocop( int );
};

#endif // ROBOCOP_H
