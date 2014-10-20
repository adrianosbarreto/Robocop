#include <iostream>
#include <stdio.h>
#include "Robocop.h"
#include "Arma.h"

using namespace std;

int main(int argc, char **argv){
	
	Robocop a(60.0, 10.0, 9.0, "Simbs", 5.0);
	a.mostrarAtributos();
	
	a.AdicionarDiretiva("Nao matar inocentes");
	a.imprimirDiretivas(a);
	
	//Arma a("Winchester", 11);
	
	//a.adicionarBalas(1);
	
	//a.atributosArma();
	//while(a.getNumeroBalas() > 0)
	//{
	//	a.atirar();
	//}
	//a.atributosArma();
	
	
	return 0;
}






/*
{
	Robocop robo(80,22, 16, "Zim", 5);
	Robocop *ciborgue;
	Robocop *ciborgue1;
	int resp;
	
	do
	{
			cout << "Deseja Criar Ciborgue (sim=1, nao = 0): ";
			cin >> resp;
			if (resp == 1){
				switch (robo.menu())
				{
					case 1:
					{
						if(){
						ciborgue = new Robocop(60,12, 5, "Zam", 8);
						ciborgue->criado();
						ciborgue->mostrarAtributos();
						break;
						}
					}
					case 2:
						ciborgue1 = new Robocop(robo);
						ciborgue1->criado();
						ciborgue1->mostrarAtributos();
						break;
					default:
						break;
				}
			
			}
			else if (resp == 0){
				printf("Saindo...");
				break;
			}
			if ((resp < 0) || (resp > 1)){
				cout << "Opção invalida!";
				cout << "Deseja Continuar (sim=1, nao = 0): ";
				cin >> resp;
			}
	}while (resp == 1);

*/
