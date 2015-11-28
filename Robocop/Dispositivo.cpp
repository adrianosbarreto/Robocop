#include "Dispositivo.h"

Dispositivo::Dispositivo( const string &numeroSerie, bool estadoConectado )
{
	setNumeroSerie( numeroSerie );
	setEstadoConectado(estadoConectado);
}
Dispositivo::Dispositivo( const Dispositivo &origem )
{
	this->numeroSerie = origem.numeroSerie;
	this->estadoConectado = origem.estadoConectado;
}
/*
Dispositivo::Dispositivo(){
	setNumeroSerie( "11223344" );
	setEstadoConectado( false );
}
*/
void Dispositivo::setEstadoConectado( bool estadoConectado )
{
		this->estadoConectado = estadoConectado;
}

void Dispositivo::setNumeroSerie ( const string &numeroSerie )
{
	if ( numeroSerie.size() < 20 )
	{
		this->numeroSerie = numeroSerie;
	}
	else
	{
		this->numeroSerie = "44332211";
	}
}
bool Dispositivo::getEstadoConectado() const
{
	return this->estadoConectado;
}
string Dispositivo::getNumeroSerie() const{
	return this->numeroSerie;
}

void Dispositivo::conectarDispositivo()
{
	this->estadoConectado = true;
}

ostream &operator<< ( ostream &output, const Dispositivo &dispositivo )
{
	output << "\nNUMERO DE SERIE:\t" << dispositivo.numeroSerie
				<< "\nESTADO DE CONECTADO:\t" << (dispositivo.estadoConectado?"Verdadeiro": "Falso");
	return output;
}

void Dispositivo::operator =( const Dispositivo &original )
{
	this->estadoConectado = original.estadoConectado;
	this->numeroSerie = original.numeroSerie;
}

Dispositivo::~Dispositivo()
{
	
}




