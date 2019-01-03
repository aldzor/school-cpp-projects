#include "pch.h"
#include <iostream>
#include "Mittaus.h"


Mittaus::Mittaus(double aloitus_arvo, unsigned int aloitus_nro)
{
	setArvo(aloitus_arvo);
	setNro(aloitus_nro);
}


Mittaus::~Mittaus()
{
	std::cout << "\nMittaustulos poistettu" << std::endl;
}
void Mittaus::setArvo(double uusi_arvo)
{
	arvo = uusi_arvo;
}
void Mittaus::setNro(unsigned int uusi_nro)
{
	nro = uusi_nro;
}
double Mittaus::getArvo()
{
	return arvo;
}
unsigned int Mittaus::getNro()
{
	return nro;
}