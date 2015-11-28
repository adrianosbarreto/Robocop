#ifndef ROBO_H
#define ROBO_H

#include <iostream>
using std::ostream;
using std::cout;

#include <string>
using std::string;

#include "Dispositivo.h"

class Robo : public Dispositivo
{
friend ostream &operator<< ( ostream &output, const Robo &robo );
	
protected:
	string versaoSoftware;
public:
	virtual void operator= (const Robo &);
	
	Robo( const string &versaoSoftware = "Software 1.1",  const string &numeroSerie = "11223344", bool estadoConectado = false );
	Robo( const Robo & );
	virtual ~Robo();
	void setVersaoSoftware( const string & );
	string getVersaoSoftware() const;
	void atualizarVersaoSoftware( const string &novaVersao );
	virtual bool realizarFuncao() = 0;
};
#endif // ROBO_H
