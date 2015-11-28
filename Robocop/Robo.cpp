#include "Robo.h"

Robo::Robo(const string &versaoSoftware,  const string &numeroSerie, bool estadoConectado )
: Dispositivo(numeroSerie, estadoConectado)
{
	setVersaoSoftware(versaoSoftware);
}
Robo::Robo(const Robo &origem)
:Dispositivo( origem )
{
	this->versaoSoftware = origem.versaoSoftware;
}
Robo::~Robo()
{
	
}

string Robo::getVersaoSoftware() const
{
	return this->versaoSoftware;
}

void Robo::setVersaoSoftware( const string &versaoSoftware ){
	if ( versaoSoftware.size() < 20 )
	{
		this->versaoSoftware = versaoSoftware;
	}
	else
	{
		this->versaoSoftware = "Nome 1.0";
	}
}
	
void Robo::atualizarVersaoSoftware( const string &novaVersao)
{
	//string nova = this->versaoSoftware+novaVersao;
	setVersaoSoftware( novaVersao );
}

ostream &operator<< ( ostream &output, const Robo &robo )
{
	output << (static_cast<const Dispositivo&>(robo)) << "\n"
				<< "VERSAO SOFTWARE: \t" << robo.versaoSoftware ;
	return output;
}

void Robo::operator= (const Robo &original){
	Dispositivo::operator =( original );
	numeroSerie = original.numeroSerie;
}


