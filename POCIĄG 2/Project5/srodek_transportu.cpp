#include <iostream>
#include <fstream>
#include <string>
#include "srodek_transportu.h"

using namespace std;



Srodek_transportu::Srodek_transportu()
{
	godzina_wyjazdu = "16:12";
}

Srodek_transportu::~Srodek_transportu()
{}

ostream& operator << (std::ostream &s, Srodek_transportu &srodek) {
	s << srodek.godzina_wyjazdu << endl;
	return s;
}

istream& operator >> (std::istream& s, Srodek_transportu &srodek)
{
	s >> srodek.godzina_wyjazdu;
	return s;
}