#include <iostream>
#include <string>
#include "pasazer.h"

using namespace std;

Pasazer::Pasazer() //konstruktor domyslny
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor domyslny Pasazer" << endl;
#endif
	name = "Pawel";
	skad = "Muszyna";
	bilet = true;
	przemyt = false;
	pesel = 96857585632;
};

Pasazer::~Pasazer()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor Pasazer" << endl;
#endif
};

void Pasazer::wyswietlPasazera() 
{
	cout << "Imie delikwenta: " << name << endl;
	cout << "Pochodzenie delikwenta: " << skad << endl;
	cout << "Czy delikwent ma bilet: ";
		if (bilet == true)
			cout << "ma" << endl;
		else
			cout << "nie ma" << endl;
	cout << "Czy delikwent jest przestepca: ";
		if (przemyt == true)
			cout << "tak, zawijamy go na 24" << endl;
		else
			cout << "nie, jest czysty jak lza" << endl;
	cout << "Pesel delikwenta: " << pesel << endl << endl;
}

void Pasazer::nowyPasazerImie(string nowy_name)
{
	name = nowy_name;
}
void Pasazer::nowyPasazerSkad(string nowy_skad)
{
	skad = nowy_skad;
}
void Pasazer::czyPrzemyca(bool czy_przemyt)
{
	przemyt = czy_przemyt;
}

void Pasazer::czyMaBilet(bool czy_bilet)
{
	bilet = czy_bilet;
}
void Pasazer::nowyPasazerPesel(long long nowy_pesel)
{
	pesel = nowy_pesel;
}

ostream&operator<<(ostream&s, Pasazer &p)  
{
	s << "Imie: " << p.name << endl <<
		"Adres: " << p.skad << endl <<
		"Czy ma bilet: " << p.bilet << endl <<
		"Przemytnik?: " << p.przemyt << endl <<
		"PESEL: " << p.pesel << endl << endl;
	return s;
}


Pasazer& Pasazer::operator= (const Pasazer&p)
{
	name = p.name;
	skad = p.skad;
	bilet = p.bilet;
	przemyt = p.przemyt;
	pesel = p.pesel;
	return *this;
}