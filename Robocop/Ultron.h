#ifndef ULTRON_H
#define ULTRON_H

#include "Robo.h"
#include "Armadura.h"
#include <iostream>
#include <stdlib.h>
using std::ostream;
using std::cout;

#include <string>
using std::string;

class Ultron : public Robo
{
	friend ostream &operator<< ( ostream &output, const Ultron &ultron );
private:
	const Armadura armadura;//adamantium
public:
	void operator =( const Ultron &origem );
	
	Ultron( const string &versaoSoftware = "Software 1.1",  const string &numeroSerie = "11223344", bool estadoConectado = false );
	Ultron( const Ultron& );
	~Ultron();
	Armadura getArmadura() const;
	bool realizarFuncao();
	
};

#endif // ULTRON_H
