#pragma once
#include <iostream>
#include <string>
#include "wagon.h"
#include "pasazer.h"
#include "konduktor.h"

using namespace std;

class Pociag {
	
	int predkosc;
	int moc;
	int ile_pasazerow;
	int ile_konduktorow;
	string dokad;
	string nazwa;

	Wagon wagon;
	Pasazer* pasazer;
	Konduktor* konduktor;


public:
	
	static int ileObiektow;

	Pociag();//konstruktor domyslny
	//mozna rowniez zrobic konstruktor z kilkoma elementami i reszte bedzie pobieral z k. domyslnego -chyba
	Pociag(string dokad, string nazwa, int moc, int predkosc, int ile_pasazerow, int ile_konduktorow); // konstruktor przypisania
	Pociag(const Pociag &pociag); //konstruktor kopiujacy
	~Pociag();//destruktor

	
	void Pociag::ilePasazerow();
	void Pociag::ileKonduktorow();
	void wyswietlPociag();
	void Pociag::wyswietlPredkosc();
	void dodajPasazera(string nowy_name, string nowy_skad, bool czy_przemyt, bool czy_bilet,  long long nowy_pesel);
	void dodajKonduktora(string nowe_imie_nazwisko, string nowa_ksywa, int nowa_wyplata, int nowy_wiek); //useless

	bool operator == (const Pociag &p); 
	bool operator > (const Pociag &p);
	bool operator < (const Pociag &p); 
	bool operator != (const Pociag &p);
	Pociag& Pociag::operator++(int); 
	Pociag& Pociag::operator--(int);
	Pociag& Pociag::operator=(const Pociag &p); 
	Pociag& Pociag::operator+=(const Pociag &p); 
	Konduktor& Pociag::operator[](unsigned int i); 
	friend ostream&operator<<(ostream&s, Pociag &p); 
	operator int(); 




};