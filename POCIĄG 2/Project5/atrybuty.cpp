#include <iostream>
#include <fstream>
#include <string>
#include "atrybuty.h"

using namespace std;

string plik_atrybuty = "atrybuty.txt";

Atrybuty::Atrybuty()
{
	predkosc = 210;
	liczba_miejsc = 300;
	imie_kapitana = "Michal";
}

Atrybuty::~Atrybuty()
{}

void Atrybuty::wyswietlAtrybuty()
{
	cout << "Predkosc: " << predkosc << " km/h." << endl;
	cout << "Liczba miejsc: " << liczba_miejsc << endl;
	cout << "Imie kapitana/motorniczego: " << imie_kapitana << endl;
}

void Atrybuty::zmienAtrybuty(int nowa_predkosc, std::string nowy_kapitan)
{
	predkosc = nowa_predkosc;
	imie_kapitana = nowy_kapitan;
}

void Atrybuty::zapiszWPliku(Atrybuty &a)
{
	cout << "Zapisano atrybuty w pliku." << endl;
	ofstream plik(plik_atrybuty);
	plik << a;
	plik.close();
}

void Atrybuty::wczytajZPliku(Atrybuty &a)
{
	cout << "Wczytano atrybuty z pliku." << endl;
	ifstream plik(plik_atrybuty);
	plik >> a;
	plik.close();
}
ostream& operator << (ostream &s, Atrybuty &a)
{
	s << a.predkosc << endl <<
		a.liczba_miejsc << endl <<
		a.imie_kapitana << endl;
	return s;
}

istream& operator >> (istream &s, Atrybuty &a)
{
	s >> a.predkosc >> a.liczba_miejsc >> a.imie_kapitana;
	return s;
}
