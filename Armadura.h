#ifndef ARMADURA_H
#define ARMADURA_H

#include <string>
using std::string;

class Armadura
{
private:
	string material;
	
	int resistencia;
	
public:
	Armadura(const string &material, int resistencia);
	Armadura();
	~Armadura();
	
	void setMaterial(const string &);
	void setResistencia(int resistencia);
	
	string getMaterial() const;
	int getResistencia()const;
	
	
};

#endif // ARMADURA_H
