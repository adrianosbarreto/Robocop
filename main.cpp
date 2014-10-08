#include <iostream>
#include <stdio.h>
#include "Robocop.h"

using namespace std;

int main(int argc, char **argv)
{
	Robocop robo(80,22, 16, "Zim", 5);
	Robocop *ciborgue;
	Robocop *ciborgue1;
	bool resp;
	
	do
	{
			cout <<"Deseja Criar Ciborgue (sim=1, nao=0)";
			cin >> resp;
			if (resp==1){
				switch (robo.menu())
				{
					case 1:
					{
						ciborgue = new Robocop(60,12, 5, "Zam", 8);
						ciborgue->criado();
						ciborgue->mostrarAtributos();
						break;
					}
					case 2:
						ciborgue1 = new Robocop(robo);
						ciborgue1->criado();
						ciborgue1->mostrarAtributos();
						break;
					case 0:
						break;
				}
			
			}
	}while(resp == 1);
	
	return 0;
}

