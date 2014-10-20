#ifndef DIRETIVAS_H
#define DIRETIVAS_H

#include <string>
using std::string;

class Diretivas
{
private:
	string textoDiretiva; 			//O que diz a diretiva.
	static int numAtualDiretivas;
	
public:
	Diretivas(const string &texto);
	Diretivas();
	~Diretivas();
	
	void setTextoDiretiva(const string &texto);
	
	string getTextoDiretiva() const;
	int getNumAtualDiretivas() const;

	//void imprimirDiretiva();

};

#endif // DIRETIVAS_H
