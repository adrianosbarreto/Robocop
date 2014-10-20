#ifndef ARMA_H
#define ARMA_H

#include <string>
using std::string;

#include <vector>
using std::vector;

class Arma
{
private:
	const static int NUM_MAX_BALAS; 	//Quantidade suportada de balas.
	int numAtualBalas; 					//Quantidade atual de balas.
	string tipo; 						//Tipo de Arma, ex: Winchester.
	
public:
	Arma();
	Arma(const string &tipo, int balas);
	~Arma();
	
	void setNumeroBalas(int);
	void setTipo(const string &);
	
	int getNumeroBalas() const;
	string getTipo() const;
	
	bool atirar();					//se houver balas a arma atira e retorna true, caso contrario false.
	void atributosArma() const; 	//imprime os Atributos da Arma, ex: Tipo da Arma.
	void adicionarBalas(int balas); //adiciona balas se o numero a ser adicionado nao ultrapassar a qnt maxima.
};

#endif // ARMA_H
