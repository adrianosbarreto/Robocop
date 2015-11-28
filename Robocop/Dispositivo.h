#ifndef DISPOSITIVO_H
#define DISPOSITIVO_H

#include <string>
using std::string;

#include <iostream>
using std::ostream;

class Dispositivo
{
	friend ostream &operator<< (ostream &output, const Dispositivo &dispositivo);
	
protected:
	string numeroSerie;
	bool estadoConectado;
public:
	virtual void operator= (const Dispositivo &);
	
	Dispositivo( const string &numeroSerie = "12345", bool estadoConectado = false);
	Dispositivo( const Dispositivo & );
	virtual ~Dispositivo();
	
	void setNumeroSerie( const string &original );
	void setEstadoConectado( bool );
	string getNumeroSerie() const;
	bool getEstadoConectado() const;
	
	void conectarDispositivo();
	
	virtual bool realizarFuncao() = 0;

};

#endif // DISPOSITIVO_H
