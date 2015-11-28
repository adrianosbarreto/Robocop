#include "Robocop.h"
#include "Arma.h"

#include "stdlib.h"

#include <iostream>
using std::cout;
using std::cin;


int main(int argc, char **argv)
{	
	
	Robocop::adicionarRobocop( Robocop( "ZIM", 10.0, 10.0, Data(04,12,1995), Arma("Colt", 5), Armadura("Aco", 40) ) );
	Robocop::adicionarRobocop( Robocop( "ZAM", 10.0, 10.0, Data(04,12,2000), Arma("Colt", 5), Armadura("Aco", 40) ) );
	
	int resp;
	do
	{
				switch ( Robocop::getRobocop(0).menuPrincipal() )
				{
					case 1:
					{
						//criar
						Robocop robocop1( "TIM", 10.0, 10.0, Data( 04,12,1995 ), Arma("Colt", 5), Armadura("Aco", 40) );
						Robocop::adicionarRobocop( robocop1 );
						do
						{
							switch ( Robocop::getRobocop(0).menuSecundario() )
							{
								
								case 1:
								{
									//Aumentar Velocidade
									int i;
									cout << "Numero do Robocop para modificar Velocidade: ";
									cin >> i;
									Robocop::getRobocop(i);
									break;
								}
								case 2:
									//ver diretivas
									Robocop::mostrarDiretiva();
									break;
								case 3:
									//adicionar Arma
									robocop1.mostrarArmas();
									break;
								case 4:
									//adicionar Armadura
									robocop1.mostrarArmaduras();
									break;
								case 5:
									//adicionar Armadura
									robocop1.imprimirAtributos();
									break;
											
							}
							cout << "Deseja continuar Menu Secundario: (1 = Sim, 2 = Nao )";
							cin >> resp;
						}while( resp == 1 );
						break;
					}
					case 2:
						//clonar
						int clone;
						cout << "Numero do Robocop a ser Clonado";
						cin >> clone;
						Robocop::clonar(clone);
						break;	
				}
	
	cout << "Deseja continuar Menu Principal: (1 = Sim, 2 = Nao )";
	cin >> resp;
	}while( resp == 1 );

	system("pause");
	 return 0;
	 
}

