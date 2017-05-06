#include <iostream>
#include <fstream>
#include <string>
#include "samolot.h"

using namespace std;

string plik_samolot = "samolot.txt";

Samolot::Samolot()
{
	wysokosc = 1200; 
	nazwa = "Airbus";
}

Samolot::~Samolot()
{}

void Samolot::wyswietlDane()
{
	cout << "Wysokosc, na jakiej znajduje sie samolot: " << wysokosc << "[m]" << endl <<
			"Nazwa samolotu: " << nazwa << endl;
}
void Samolot::zmienDane(std::string cos_nowego)
{
	nazwa = cos_nowego;
}

void Samolot::coSieDzieje()
{
	cout << "Powstal samolot" << endl;
}

void Samolot::zapiszWPliku(Samolot &st)
{
	cout << "Zapisano dane samolotu w pliku." << endl;
	ofstream plik(plik_samolot);
	plik << st;
	plik.close();
}

void Samolot::wczytajZPliku(Samolot &st)
{
	cout << "Wczytano dane samolotu z pliku." << endl;
	ifstream plik(plik_samolot);
	plik >> st;
	plik.close();
}

ostream& operator << (ostream &s, Samolot &st)
{
	s <<st.wysokosc << endl <<
		st.nazwa << endl;
	return s;
}

istream& operator >> (istream &s, Samolot &st)
{
	s >> st.wysokosc >> st.nazwa ;
	return s;
}

