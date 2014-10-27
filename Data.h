/* 
 * File:   Data.h
 * Author: Cssj
 *
 * Created on 9 de Junho de 2012, 14:47
 */

#ifndef DATA_H
#define	DATA_H

#include <iostream>
using std::ostream;

class Data 
{
friend ostream &operator<<(ostream &output, const Data &data);
public:
    
    Data( int = 1, int = 1, int = 1900 );
	Data ( const Data & );
    
	bool operator== ( const Data &data ) const;
	void operator= ( const Data &data );
    void print() const;
	int getDia() const;
	int getMes() const;
	int getAno() const;
    
private:
    
    int mes;
    int dia;
    int ano;
    
    int VerificaDia( int ) const;
};

#endif	/* DATA_H */

