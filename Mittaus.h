#pragma once
class Mittaus
{
public:
	Mittaus(double aloitus_arvo, unsigned int aloitus_nro);
	~Mittaus();
	void setArvo(double uusi_arvo);
	void setNro(unsigned int uusi_nro);
	double getArvo();
	unsigned int getNro();

private:
	unsigned int nro;
	double arvo;
};

