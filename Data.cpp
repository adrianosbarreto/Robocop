/* 
 * File:   Data.cpp
 * Author: Cssj
 * 
 * Created on 9 de Junho de 2012, 14:47
 */

#include "Data.h"

#include <iostream>
using std::cout;

Data::Data(int d, int m, int a) 
{
    if ( m > 0 && m <= 12 ) // validate the month
        mes = m;
    
    if ( a < 0 )
        ano = 1900;
    else
        ano = a;
   
    dia = VerificaDia(d);

}
Data::Data (const Data &date)
{
	this->ano = date.ano;
	this->mes = date.mes;
	this->dia = date.dia;
}
 
int Data::getDia() const
{
		return this->dia;
}
int Data::getMes() const
{
		return this->mes;
}
int Data::getAno() const
{
		return this->ano;
}
void Data::print() const
{
   cout << dia << '/' << mes << '/' << ano;
   
}

int Data::VerificaDia(int diaTeste) const
{
    static const int diasPorMes[ 13 ] = 
       { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    if ( diaTeste > 0 && diaTeste <= diasPorMes[ mes ] )
        return diaTeste;
    
    if ( mes == 2 && diaTeste == 29 && ( ano % 400 == 0 ||
            ( ano % 4 == 0 && ano % 100 != 0 ) ) )
        return diaTeste;
    
    cout << "Dia invalido (" << diaTeste << ") configurado para 1.\n";
    return 1; 

    
}

ostream &operator<<(ostream &output, const Data &data)
{
	output << data.dia << "/" << data.mes << "/" << data.ano;
	return output;
}
bool Data::operator== (const Data &data) const
{
	
	if(this->dia == data.dia)
	{
		if(this->mes == data.mes)
		{
			if(this->ano == data.ano)
			{
				return true;
			}
		}
	}
	else
	{
		return false;
	}
	
}
void Data::operator= ( const Data &data )
{
	this->mes = data.mes;
	this->dia = data.dia;
	this->ano = data.ano;
}


