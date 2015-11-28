#ifndef EXTERMINADOR_H
#define EXTERMINADOR_H

#include "Robo.h"
#include "Arma.h"
#include <iostream>

#include <stdlib.h>
using std::ostream;
using std::cout;

#include <string>
using std::string;

class Exterminador : public Robo
{
	friend ostream &operator<< ( ostream &output, const Exterminador &exterminador );
private:
	const Arma arma;
public:
	void operator =( const Exterminador &origem );

	Exterminador(const string &versaoSoftware = "Software 1.1",  const string &numeroSerie = "11223344", bool estadoConectado = false );
	Exterminador( const Exterminador & );
	~Exterminador();
	Arma getArma() const;
	bool realizarFuncao();
	
};

#endif // EXTERMINADOR_H
