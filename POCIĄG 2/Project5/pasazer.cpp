#include <iostream>
#include <fstream>
#include <string>
#include "pasazer.h"

using namespace std;

string plik_pasazer = "pasazer.txt";

Pasazer::Pasazer()
{
	wiek = 15;
	imie = "Karol";
}

Pasazer::~Pasazer()
{}

void Pasazer::wyswietlPasazera()
{
	cout << "Pasazer ma: " << wiek << "lat i ma na imie: " << imie << "." << endl;
}

void Pasazer::zapiszWPliku(Pasazer &p)
{
	cout << "Zapisano dane pasazera w pliku." << endl;
	ofstream plik(plik_pasazer);
	plik << p;
	plik.close();
}

void Pasazer::wczytajZPliku(Pasazer &p)
{
	cout << "Wczytano dane pasazera z pliku." << endl;
	ifstream plik(plik_pasazer);
	plik >> p;
	plik.close();
}
ostream& operator << (ostream &s, Pasazer &p)
{
	s << p.wiek << endl <<
		p.imie << endl;
	return s;
}

istream& operator >> (istream &s, Pasazer &p)
{
	s >> p.wiek;
	s >> p.imie;
	return s;
}
