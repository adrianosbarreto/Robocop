#include "Ultron.h"

Ultron::Ultron( const string &versaoSoftware,  const string &numeroSerie, bool estadoConectado )
: Robo(versaoSoftware, numeroSerie, estadoConectado), armadura( Armadura("Adamantium", 10) )
{
}

Ultron::Ultron( const Ultron& original )
:Robo( original ), armadura( original.armadura )
{
}

Ultron::~Ultron()
{
}

Armadura Ultron::getArmadura() const{
	return this->armadura;
}

bool Ultron::realizarFuncao()
{
	int aux = rand() % 2;
	if( aux == 1 ){
		cout << "Ultron Destruiu a Humanidade!";
		return true;
	}
	else if( aux == 0 ){
		cout << "Ultron Falhou ao Destruir Humanidade!";
		return false;
	}
}

ostream &operator<< ( ostream &output, const Ultron &ultron ){
	output	<< static_cast<const Robo &>(ultron)
					<< ultron.armadura;
	return output;
}

void Ultron::operator =( const Ultron &origem ){
	Robo::operator =( origem );
}
