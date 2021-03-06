﻿#include "pch.h"
#include <iostream>
#include <list>
#include "Mittaus.h"

double Keskiarvo(std::list<Mittaus>& havainnot);

int main()
{
	std::list<Mittaus> havainnot;
	std::list<Mittaus>::iterator it;

	Mittaus *havainto_1 = new Mittaus(16.4, 1);
	havainnot.push_back(*havainto_1);

	Mittaus *havainto_2 = new Mittaus(189.2, 2);
	havainnot.push_back(*havainto_2);

	Mittaus *havainto_3 = new Mittaus(22.94, 3);
	havainnot.push_back(*havainto_3);

	Mittaus *havainto_4 = new Mittaus(302, 4);
	havainnot.push_back(*havainto_4);

	Mittaus *havainto_5 = new Mittaus(56, 5);
	havainnot.push_back(*havainto_5);

	for (it = havainnot.begin(); it != havainnot.end(); it++)
	{
		std::cout << "Mittaustulos: " << it->getNro() << " - Arvo: " << it->getArvo() << std::endl;
	}
	std::cout << "\nMittaustulosten keskiarvo: " << Keskiarvo(havainnot) << std::endl;

	return 0;
}

double Keskiarvo(std::list<Mittaus>& havainnot)
{
	std::list<Mittaus>::iterator it;
	double keskiarvo = 0;
	unsigned int lukumaara = 0;
	for (it = havainnot.begin(); it != havainnot.end(); it++ )
	{
		lukumaara += 1;
		keskiarvo += it->getArvo();
	}
	keskiarvo = keskiarvo / lukumaara;
	return keskiarvo;
}
