#include <vector>
#include <time.h>
#include <string>
#include <typeinfo>
#include <iostream>
#include "Exterminador.h"
#include "Dispositivo.h"
#include "Robocop.h"
#include "Ultron.h"
#include "stdlib.h"
#include "Robo.h"

using std::cout;
using std::cin;

void mostrarFuncao( Dispositivo * dispositivo);

int main(int argc, char **argv)
{
	
	srand( (unsigned) time( 0 ) );
	unsigned int i;
	Robocop *a = new  Robocop("Beta 1.1",  "183472913", true, "Robocop", 50.0, 8, Data(14, 3, 2009),
					Arma("Colt", 10), Armadura("Aco", 8) );
	Ultron *b = new  Ultron( "Astron 3.2",   "1734346193", false);
	Exterminador *c = new  Exterminador("Fanar 8.2",  "989571932791", true);
	std::vector<Dispositivo *> d = std::vector<Dispositivo *>();
	
	d.push_back( a );
	d.push_back( b );
	d.push_back( c );
	
	for( i = 0; i < d.size(); i++ ){
		mostrarFuncao( d[i] );
		cout << "\n";
	}
	
	system("pause");
	 return 0; 
}

void mostrarFuncao( Dispositivo * dispositivo){
	
	if( typeid(*dispositivo).name() == typeid(Robocop).name() ){
		Robocop *novo = dynamic_cast<Robocop *>(dispositivo);
		cout << *novo;
		novo->mostrarDiretiva();
		novo->mostrarArmaduras();
		novo->mostrarArmas();
	}
	else if( typeid(*dispositivo).name() == typeid(Ultron).name() ){
		Ultron *novo = dynamic_cast<Ultron *>(dispositivo);
		cout << *novo;
		cout << novo->getArmadura();
	}
	else if( typeid(*dispositivo).name() == typeid(Exterminador).name() ){
		Exterminador *novo = dynamic_cast<Exterminador *>(dispositivo);
		cout << *novo;
		cout << novo->getArma();
	}
	cout <<"\n";
	dispositivo->realizarFuncao();
}

