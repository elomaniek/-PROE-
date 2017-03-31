#include <iostream>
#include <string>
#include "konduktor.h"

Konduktor::Konduktor()
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor Konduktor" << endl;

#endif
	imie_nazwisko = "Maciej Sobieraj";
	ksywa = "Senpai";                     //domyslne wartosci
	wyplata = 2900;
	wiek = 48;
}

Konduktor::~Konduktor()
{
#ifdef _DEBUG

	cout << "Wywolano destruktor obiektu Konduktor" << endl;

#endif
}

void Konduktor::wyswietlKonduktora()
{
	cout << "Imie i nazwisko: " << imie_nazwisko << endl;
	cout << "Jak na Pana wolaja: " << ksywa << endl;
	cout << "Ile Pan zarabia: " << wyplata << endl;
	cout << "Ile ma Pan lat: " << wiek << endl << endl;
}

void Konduktor::noweImieINazwisko(string nowe_imie_nazwisko)
{
	imie_nazwisko = nowe_imie_nazwisko;
}
void Konduktor::nowaKsywa(string nowa_ksywa)
{
	ksywa = nowa_ksywa;
}
void Konduktor::nowaWyplata(int nowa_wyplata)
{
	wyplata = nowa_wyplata;
}
void Konduktor::nowyWiek(int nowy_wiek)
{
	wiek = nowy_wiek;
}
ostream&operator<<(ostream&s, Konduktor &p) //operator strumieniowy, nie wypisuje z tego
											//pokazuje, ze przeciazam operator
{
	s << "Imie i nazwisko: " << p.imie_nazwisko << endl << 
		"Ksywa: " << p.ksywa << endl <<
		"Zarobki: " << p.wyplata << endl <<
		"Wiek: " << p.wiek << endl;
	return s;
}






