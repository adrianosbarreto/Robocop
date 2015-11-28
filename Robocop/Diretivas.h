#ifndef DIRETIVAS_H
#define DIRETIVAS_H

#include <iostream>
using std::ostream;

#include <string>
using std::string;

#include <iostream>
using std::ostream;

class Diretivas
{

friend ostream &operator<< ( ostream &output, const Diretivas &diretiva );
	
private:
	string *textoDiretiva; 				//O que diz a diretiva.
	static int numAtualDiretivas;
	const static int NUM_MAX_DIRETIVAS;
	
public:
	Diretivas(const string &texto);
	Diretivas();
	Diretivas(const Diretivas &origem);
	~Diretivas();
	
	void operator =( const Diretivas &origem );
	
	void setTextoDiretiva(const string &texto);
	
	string getTextoDiretiva() const;
	int getNumAtualDiretivas() const;

	//void imprimirDiretiva();

};

#endif // DIRETIVAS_H
