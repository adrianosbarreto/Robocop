#include <stdio.h>

#include <vector>
#include <iostream>
using namespace std;

#include "Robocop.h"
#include "Diretivas.h"
#include "Data.h"

int main(int argc, char **argv)
{
	Robocop *c = new Robocop[3];
	Robocop b("K");
	//Robocop a("Numero");
	
	c[0] = b;
	cout << c[0] << endl;
	
	cout << "Numero maximo de Robos: "<< Robocop::getCibMax();
	
	
	//c = criarRobocop(c,b);
	//a.Robo::mostrarAtributos();
	

	return 0;
}
