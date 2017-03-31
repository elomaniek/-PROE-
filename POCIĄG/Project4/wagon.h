#pragma once
#include <iostream>
#include <string>

using namespace std;

class Wagon {
	int rok_produkcji; 
	bool klasa; // 1/2 klasa
	bool rodzaj; //z przedzialami/bez
	string kolor;

public:
	void wyswietlWagon();
	void dodajWagon(int nowy_rok_produkcji, bool nowa_klasa, bool nowy_rodzaj, string nowy_kolor);

	friend ostream& operator<<(ostream&s, Wagon &p);

	Wagon();
	~Wagon();

	
};

