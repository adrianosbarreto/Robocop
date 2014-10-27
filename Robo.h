#ifndef ROBO_H
#define ROBO_H

#include "Data.h"
#include "Diretivas.h"

#include <string>
using std::string;

#include <vector>
using std::vector;

class Robo
{
protected:
	const float VELOCIDADE_MAX; 	//Velocidade maxima de um ciborgue, em Km/h, Constante.
	
	const float TEMPO_MAX_CARGA; 	//Tempo Maximo que a bateria suporta sem precisar recarregar, Constante.
	
	const static int CIB_MAX; 		//Atributo da Classe. Guarda a quantidade maxima de ciborgues que pode ser criada.
	
	const static string diretivas[3]; 
	
	const Data dataCriacao; 		//Data Criacao, Classe Data.
	
	static int cibAtual; 			//Atributo da Classe. Guarda a quantidade atual de Ciborgues.
	
	float velocidadeAtual; 			//Velocidade que o Ciborge esta no momento.
	
	float tempoCarga; 				//Valor referente a carga da bateria, em Horas.
	
	inline float incrementaValor(float &numero, float valor){ numero += valor; return numero;}
	
public:

	Robo(float velocidadeMax,float tempoMaxCarga, float carga, float velocidadeAtual);
	Robo(const Robo &robo); //Construtor de copia.
	Robo();
	virtual ~Robo();

	void setTempoCarga(float carga);
	void setVelocidadeAtual(float velocidade);
	void setCibAtual();
	//void setDiretivas(const string &diretiva);
	

	float getTempoCarga() const;
	float getVelocidadeAtual()const;
	int getCibAtual()const;
	static int getCibMax();
	float getVelocidadeMax() const;
	
	int recarrega();
	void mostrarAtributos() const;
	void criado();
	int menu() const;
	
	
	//void criarDiretiva(const string &a); // nao feito ainda.

};

#endif // ROBO_H
