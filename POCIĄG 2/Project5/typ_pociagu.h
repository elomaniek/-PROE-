#pragma once
#include <iostream>
#include <fstream>
#include "pociag.h"
#include "typ_pociagu.h"

///klasa Typ_pociagu, podklasa klasy Pociag
class Typ_pociagu : public Pociag
{
protected:
	///<Pole mowiace czy pociag jest pospieszny
	std::string czy_pospieszny;
	///<Pole definiujace kolor pociagu
	std::string kolor;
	///<Pole definiujace rok produkcji
	int rok_produkcji;

public:
	///Konstruktor domyslny
	Typ_pociagu();
	///Destruktor 
	~Typ_pociagu();
	///Procedura wirtualna
	/**Wypisuje na ekran wszystkie dane pociagu*/
	void wyswietlDane();	
	///Procedura wirtualna
	/**Pokazuje jaki obiekt zostal stworzony*/
	void coSieDzieje();
	///Procedura wirtualna 
	/**Pozwala na wczytanie nowej,
	wybranej danej string dla obiektu Typ_pociagu*/
	void zmienDane(std::string cos_nowego);
	///Procedura zapisujaca dane w pliku
	void zapiszWPliku(Typ_pociagu &typ);
	///Procedura wczytujaca dane z pliku
	void wczytajZPliku(Typ_pociagu &typ);
	
	///Przeciazony operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Typ_pociagu &typ);
	///Przeciazony operator strumieniowy >> 
	friend std::istream& operator >> (std::istream &s, Typ_pociagu &typ);
};

