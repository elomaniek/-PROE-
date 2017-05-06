#include <iostream>
#include <fstream>
#include <string>
#include "pociag.h"

using namespace std;

string plik_pociag = "pociag.txt";

Pociag::Pociag()
{
	czas_dojazdu = 124;
	ile_wagonow = 4;
	nazwa = "PENDOLINO";
	Pasazer pas;
	for (int i = 0; i < 2; i++)
		pasazer.push_back(pas);
}

Pociag::~Pociag()
{ }

void Pociag::coSieDzieje()
{
	cout << "Powstal pociag" << endl;
}
void Pociag::zmienCzasDojazdu(int nowy_czas)
{

	cout << "Podaj nowy czas dojazdu (w minutach):" << endl;
	cin >>nowy_czas;
	if (!cin)
	{
		cin.clear();
		cin.sync();
		cout << "PODAJ LICZBE!!" << endl;
		cin >> nowy_czas;
	}
	else
	{ 
		czas_dojazdu = nowy_czas;
	}
	
}
void Pociag::zmienLiczbeWagonow(int nowa_liczba)
{
	cout << "Podaj nowa liczbe wagonow:" << endl;
	cin >> nowa_liczba;
	if (!cin)
	{
		cin.clear();
		cin.sync();
		cout << "PODAJ LICZBE!!" << endl;
		cin >> nowa_liczba;
	}
	else
	{
		ile_wagonow = nowa_liczba;
	}
	
}

void Pociag::zmienNazwe(string nowa_nazwa)
{
	cout << "Podaj nowa nazwe pociagu:" << endl;
	cin >> nowa_nazwa;
	nazwa = nowa_nazwa;
}


void Pociag::wyswietlDane()
{
	cout << "Czas dojazdu do celu to: " << czas_dojazdu << " minut." << endl
		<< "Ten pociag ma: " << ile_wagonow << " wagony." << endl <<
		"Nazywa sie " << nazwa << endl;
	this->atrybuty.wyswietlAtrybuty();
	this->pasazer[0].wyswietlPasazera();
}

void Pociag::zmienDane(string cos_nowego)
{
	nazwa = cos_nowego;
}

void Pociag::zapiszWPliku(Pociag &st)
{
	cout << "Zapisano dane pociagu w pliku." << endl;
	ofstream plik(plik_pociag);
	plik << st;
	plik.close();
}

void Pociag::wczytajZPliku(Pociag &st)
{
	cout << "Wczytano dane pociagu z pliku." << endl;
	ifstream plik(plik_pociag);
	plik >> st;
	plik.close();
}

ostream& operator << (ostream &s, Pociag &st)
{
	s << st.czas_dojazdu << endl <<
		st.ile_wagonow << endl <<
		st.nazwa << endl;
	return s;
}

istream& operator >> (istream &s, Pociag &st)
{
	s >> st.czas_dojazdu >> st.ile_wagonow >> st.nazwa;
	return s;
}

