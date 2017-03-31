#pragma once
#include <iostream>


using namespace std;

class Konduktor {
	string imie_nazwisko; 
	string ksywa;
	int wyplata;
	int wiek;
	
	
public:
	void wyswietlKonduktora();
	void noweImieINazwisko(string nowe_imie_nazwisko);
	void nowaKsywa(string nowa_ksywa);
	void nowaWyplata(int nowa_wyplata);
	void nowyWiek(int nowy_wiek);

	friend ostream&operator<<(ostream&s, Konduktor &k);

	Konduktor();
	~Konduktor();
};
