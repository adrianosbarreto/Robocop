#include "Exterminador.h"


Exterminador::Exterminador( const string &versaoSoftware,  const string &numeroSerie, bool estadoConectado)
: Robo( versaoSoftware, numeroSerie, estadoConectado), arma( Arma("Colt", 12) )
{
	
}

Arma Exterminador::getArma() const{
	return this->arma;
}

Exterminador::~Exterminador()
{
	
}

bool Exterminador::realizarFuncao(){
	int aux = rand() % 2;
	if( aux == 1 ){
		cout << "Exterminador Eliminou Alvo com Sucesso!";
		return true;
	}
	else if( aux == 0 ){
		cout << "Exterminador Falhou ao Eliminar Alvo!";
		return false;
	}
}

ostream &operator<< ( ostream &output, const Exterminador &exterminador ){
	output		<< static_cast<const Robo &>(exterminador)
					<< exterminador.arma;
	return output;
}

void Exterminador::operator =( const Exterminador &origem ){
	Robo::operator =( origem );
}
