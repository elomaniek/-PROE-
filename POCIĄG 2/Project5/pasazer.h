#pragma once
#include <iostream>
#include <fstream>

///Podklasa klasy Restauracja
class Pasazer
{
public:
	///<Pole definiuj¹ce wiek pasazera
	int wiek;
	///<Pole definiuj¹ce imie pasazera
	std::string imie;

	///Konstruktor domyslny
	Pasazer();
	///Destruktor
	~Pasazer();

	///Procedura wyswietlajaca dane pasazera
	void wyswietlPasazera();
	///Procedura zapisujaca dane pasazera w pliku
	void zapiszWPliku(Pasazer &p);
	///Procedura wczytujaca dane pasazera z pliku
	void wczytajZPliku(Pasazer &p);

	///Przeciazony operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Pasazer &p);
	///Przeciazony operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Pasazer &p);

};