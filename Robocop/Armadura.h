#ifndef ARMADURA_H
#define ARMADURA_H

#include <string>
using std::string;

#include <iostream>
using std::ostream;

class Armadura
{
	
friend ostream &operator<< ( ostream &output, const Armadura &armadura );
	
private:

	const static int MAX_RESISTENCIA = 50.0;
	
	string material;
	
	int *resistencia;
	
public:
	Armadura(const string &material, int resistencia);
	Armadura();
	Armadura(const Armadura &);
	~Armadura();
	
	void operator =( const Armadura &armadura );
	
	void setMaterial(const string &);
	void setResistencia(int resistencia);
	
	string getMaterial() const;
	int getResistencia()const;
};

#endif // ARMADURA_H
