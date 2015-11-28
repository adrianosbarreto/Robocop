#include "Robocop.h"

#include "stdlib.h"

#include <iostream>
using std::cout;
using std::cin;


int main(int argc, char **argv)
{	
	Robocop::adicionarRobocop( Robocop( "ZIM", 10.0, 10.0, Data(04,12,1995) ) );
	Robocop::adicionarRobocop( Robocop( "ZAM", 10.0, 10.0, Data(04,12,2000) ) );
	
	int resp;
	do
	{
			switch ( Robocop::getRobocop(0).menuPrincipal() )
			{
				case 1:
					//criar
					Robocop::adicionarRobocop( Robocop( "TIM", 10.0, 10., Data( 04,12,1995 ) ) );
					do
					{
						switch ( Robocop::getRobocop(0).menuSecundario() )
						{
							case 1:
							{
								//Adicionar Pessoa Presa
								string nome;
								cout << "Nome da Pessoa Presa: ";
								cin >> nome;
								Robocop::adicionarPreso( nome );
								break;	
							}
							case 2:
							{
								//Aumentar Velocidade
								int i;
								cout << "Numero do Robocop para modificar Velocidade: ";
								cin >> i;
								Robocop::getRobocop(i);
								break;
							}
							case 3:
								//ver diretivas
								Robocop::mostrarDiretiva();
								break;
										
						}
						cout << "Deseja continuar Menu Secundario: (1 = Sim, 2 = Nao )";
						cin >> resp;
					}while( resp == 1 );
					break;
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
	return 0;
}

