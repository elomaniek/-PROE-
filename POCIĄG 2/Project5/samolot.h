#pragma once
#include <iostream>
#include <fstream>
#include "srodek_transportu.h"
///klasa Samolot, pochodna klasy Srodek transportu
class Samolot : public Srodek_transportu
{
private:
	///<Pole okreslajace wysokosc na jakiej leci samolot
	int wysokosc;
	///<Pole okreslajace nazwe samolotu
	std::string nazwa;
public:
	///Konstruktor domyslny
	Samolot();
	///Destruktor
	~Samolot();
	///Procedura wirtualna
	/**Wypisuje na ekran dane samolotu i klas pochodnych*/
	void wyswietlDane();
	///Procedura wirtualna
	/**Pokazuje jaki obiekt zostal stworzony*/
	void coSieDzieje();
	///Procedura wirtualna 
	/**Pozwala na wczytanie nowej,
	wybranej danej string dla oniektu Pociag*/
	void zmienDane(std::string cos_nowego);
	///Procedura zapisujaca dane w pliku
	void zapiszWPliku(Samolot &st);
	///Procedura wczytujaca dane z pliku
	void wczytajZPliku(Samolot &st);

	///Operator strumieniowy >>		
	friend std::ostream& operator << (std::ostream &s, Samolot &samolot);
	///Operator strumieniowy <<
	friend std::istream& operator >> (std::istream &s, Samolot &samolot);
};