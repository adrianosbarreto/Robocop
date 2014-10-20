#ifndef ROBOCOP_H
#define ROBOCOP_H

#include "Data.h" 
#include "Arma.h"	
#include "Armadura.h"
#include "Diretivas.h"

#include <string>
using std::string;

#include <vector>
using std::vector;

class Robocop
{
private:
	const float VELOCIDADE_MAX; 	//Velocidade maxima de um ciborgue, em Km/h, Constante.
	
	const float TEMPO_MAX_CARGA; 	//Tempo Maximo que a bateria suporta sem precisar recarregar, Constante.
	
	const static int CIB_MAX; 		//Atributo da Classe. Guarda a quantidade maxima de ciborgues que pode ser criada.
	
	static int cibAtual; 			//Atributo da Classe. Guarda a quantidade atual de Ciborgues.
	
	float velocidadeAtual; 			//Velocidade que o Ciborge esta no momento.
	
	float tempoCarga; 				//Valor referente a carga da bateria, em Horas.
	
	string id; 						//Id da pessoa que se tornou Ciborgue.
	
	const Data dataCriacao; 		//Data Criação, Class Data.
	
	Arma armaRobo;
	
	Armadura armadura;
	
	Diretivas *diretivas;
	
	inline float incrementaValor(float &numero, float valor){ numero += valor; return numero;}
	
public:

	Robocop(float velocidade,float tempoMaxCarga,
					float carga, const string &id, float velocidadeAtual);
	Robocop(const Robocop &robo); //Construtor de copia.
	Robocop();
	~Robocop();

	void setId(const string &id);
	void setTempoCarga(float carga);
	void setVelocidadeAtual(float velocidade);
	void setCibAtual();
	void setDiretivas(const string &diretiva);
	
	string getId() const;
	float getTempoCarga() const;
	float getVelocidadeAtual()const;
	int getCibAtual()const;
	int getCibMax() const;
	float getVelocidadeMax() const;
	
	int recarrega();
	void mostrarAtributos() const;
	static void criado();
	static Diretivas *AdicionarDiretiva(string texto);
	void imprimirDiretivas(const Robocop& a) const;
	int menu() const;
	

};

#endif // ROBOCOP_H
