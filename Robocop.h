#ifndef ROBOCOP_H
#define ROBOCOP_H

#include "Robo.h"

#include "Arma.h"	
#include "Armadura.h"

#include <iostream>
using std::ostream;

#include <string>
using std::string;

#include <vector>
using std::vector;

class Robocop : public Robo
{
friend ostream &operator<< (ostream &output, const Robocop &robocop);

private:
	
	string id; 						//Id da pessoa que se tornou Ciborgue.
	
	Arma armaRobo;
	
	Armadura armadura;
	
public:

	Robocop(const string &id);
	Robocop(const Robocop &robo); //Construtor de copia.
	Robocop();
	~Robocop();

	void setId(const string &id);
	void mostrarAtributos() const;
	
	bool operator== ( const Robocop &novo ) const;
	void operator= ( const Robocop &novo );
	
	string getId() const;
	Robocop* criarRobocop(Robocop *a, const Robocop &rob);
};

#endif // ROBOCOP_H
