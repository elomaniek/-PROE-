#include <iostream>
#include <string>
#include "wagon.h"

Wagon::Wagon()
{
	
#ifdef _DEBUG

		cout << "Wywolano konstruktor Wagon" << endl;

#endif
		rok_produkcji;
		klasa;
		rodzaj; //nie podalem wartosci wiec domyslnie jest 0
		kolor = "zielony";
		
}
Wagon::~Wagon()
{
#ifdef _DEBUG

	cout << "Wywolano destruktor obiektu Wagon" << endl;

#endif
}
void Wagon::wyswietlWagon()
{
	cout << "Rok produkcji: " << rok_produkcji << endl;
	cout << "1 czy 2 klasa: ";
	if (klasa == true)
		cout << "1" << endl;
	else
		cout << "2" << endl; 
		cout << "Rodzaj: ";
	if (rodzaj == true)
		cout << "z przedzialami" << endl;
	else
		cout << "bez przedzialow" << endl;
	cout << "Wagon ma kolor: " << kolor << endl << endl;

}
void Wagon::dodajWagon(int nowy_rok_produkcji, bool nowa_klasa, bool nowy_rodzaj, string nowy_kolor)
{
	rok_produkcji = nowy_rok_produkcji;
	klasa = nowa_klasa;
	rodzaj = nowy_rodzaj;
	kolor = nowy_kolor;
}

ostream&operator<<(ostream&s, Wagon &p) //operator strumieniowy
{
	s << "Rok produkcji: " << p.rok_produkcji << endl <<
		"1 czy 2 klasa(1- 1 klasa, 0- 2 klasa: " << p.klasa << endl <<
		"Rodzaj (1-z przedzialami, 0-bez): " << p.rodzaj << endl <<
		"Kolor" << p.kolor << endl;

	return s;
}

