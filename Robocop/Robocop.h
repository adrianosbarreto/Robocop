#ifndef ROBOCOP_H
#define ROBOCOP_H

#include "Data.h"

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::ostream;

class Robocop
{
	
friend ostream &operator<< ( ostream &output, const Robocop &robocop );
	
private:
	static int NUM_ROBOCOP;
	const static int NUM_DIRETIVAS = 3;
	const static float VELOCIDADE_MAX; //Const static
	const static string DIRETIVAS[NUM_DIRETIVAS]; //Array 
	static vector<string> PRESOS; //vector push_back
	static vector<Robocop> ROBOCOPS;
	Data dataCriacao; //Composição Classe Data
	float velocidade;
	float tempoCarga;
	string *id; //String

public:
	void operator =( const Robocop &origem );

	Robocop( const string &id );
	Robocop( const Robocop &); //Construtor de Copia
	Robocop( const string &id = "Desconhecido", float velocidade = 0.0, float tempoCarga = 0.0, const Data &dataCricao = Data() );
	
	~Robocop();
	
	void setId( const string &id );
	string getId() const;
	
	void setTempoCarga( float carga );
	float getTempoCarga() const;
	
	void setVelocidade( float velocidade );
	float getVelocidade() const;
	
	inline static void adicionarPreso( const string &preso ){ Robocop::PRESOS.push_back( preso ); }; //função static, passagem de parametro usando ponteiro.
	void recarregar();
	int menuPrincipal() const; 
	int menuSecundario() const;
	static void mostrarDiretiva();
	static void adicionarRobocop( const Robocop & );
	static void imprimirRobocop();
	static void clonar( int );
	static int getNumMax();
	static Robocop getRobocop( int );
};

#endif // ROBOCOP_H
