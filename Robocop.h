#ifndef ROBOCOP_H
#define ROBOCOP_H

#include "Data.h"

#include <string>
using std::string;

#include <vector>
using std::vector;

class Robocop
{
private:
	const float VELOCIDADE_MAX; //Velocidade maxima de um ciborgue, em Km/h.
	
	const float TEMPO_MAX_CARGA;
	
	const static int CIB_MAX; //Guarda a quantidade maxima de ciborgues que pode ser criada.
	
	static int cibAtual; // Guarda a quantidade atual de Ciborgues.
	
	float velocidadeAtual;
	
	float tempoCarga; //Valor referente a carga da bateria, em Horas.
	
	string id; //Id da pessoa que se tornou Ciborgue.
	
	const Data dataCriacao;
	
public:
	Robocop(float velocidade,float tempoMaxCarga, float carga, const string &id, float velocidadeAtual);
	Robocop(const Robocop &robo);
	Robocop();
	void setId(const string &id);
	string getId() const;
	void setTempoCarga(float carga);
	float getTempoCarga() const;
	inline float incrementaValor(float &numero, float valor){ numero += valor; return numero;}
	void setVelocidadeAtual(float velocidade);
	float getVelocidadeAtual()const;
	void setCibAtual();
	float getVelocidadeMax() const;
	int getCibAtual()const;
	int recarrega();
	void mostrarAtributos() const;
	static void criado();
	int getCibMax() const;
	int menu() const;
};

#endif // ROBOCOP_H
