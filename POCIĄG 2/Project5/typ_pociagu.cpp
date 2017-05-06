#include <string>
#include <iostream>
#include<fstream>
#include"typ_pociagu.h"
#include "pociag.h"

using namespace std;	

string plik_typ_pociagu = "typ_pociagu.txt";

Typ_pociagu::Typ_pociagu()
{
	czy_pospieszny = "TAK";
	kolor = "ZIELONY";
	rok_produkcji = 1997;
}

Typ_pociagu::~Typ_pociagu()
{}

void Typ_pociagu::wyswietlDane()
{		
	
	cout << "Czas dojazdu do celu to: " << czas_dojazdu << " minut." << endl << 
			"Ten pociag ma: " << ile_wagonow << " wagony." << endl <<
			"Nazywa sie " << nazwa << endl;
		this->atrybuty.wyswietlAtrybuty();
		this->pasazer[0].wyswietlPasazera();
	cout << "Czy ten pociag jest pospieszny? " << endl << czy_pospieszny << endl <<
			"Jaki ma kolor? " << endl << kolor << endl << 
			"Kiedy zostal wyprodukowany? " << endl << "W " << rok_produkcji  << " roku."<< endl;
		
}

void Typ_pociagu::zmienDane(std::string cos_nowego)
{
	kolor = cos_nowego;
}

void Typ_pociagu::zapiszWPliku(Typ_pociagu &typ)
{
	cout << "Zapisano typ pociagu w pliku" << endl;
	ofstream plik(plik_typ_pociagu);
	plik << typ;
	plik.close();
}

void Typ_pociagu::coSieDzieje()
{
	cout << "Powstal typ pociagu" << endl;
}

void Typ_pociagu::wczytajZPliku(Typ_pociagu &typ)	
{
	cout << "Wczytano typ pociagu z pliku" << endl;
	ifstream plik(plik_typ_pociagu);
	plik >> typ;
	plik.close();
}

ostream& operator << (ostream &s, Typ_pociagu &typ) 
{
	s << typ.czy_pospieszny << endl << typ.kolor << endl << typ.rok_produkcji;
	return s;
}

istream& operator >> (istream &s, Typ_pociagu &typ)
{
	s >> typ.czy_pospieszny >> typ.kolor >> typ.rok_produkcji; 
	return s;
}











