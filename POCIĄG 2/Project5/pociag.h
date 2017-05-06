#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "pasazer.h"
#include "atrybuty.h"
#include "srodek_transportu.h"

///klasa Pociag, podklasa lasy Srodek_transportu
class Pociag : public Srodek_transportu
{
protected:
	///Pole okreslajace czas dojazdu pociagu do celu
	int czas_dojazdu;
	///Pole okreslajace ilosc wagonow pociagu
	int ile_wagonow;
	///Pole okreslajace nazwe pociagu
	std::string nazwa;
	///Pole okreslajace podklase Atrybuty
	Atrybuty atrybuty;
	///Pole okreslajace dynamiczna podklase Pasazer
	vector <Pasazer> pasazer;
public:
	///Konstruktor domyslny
	Pociag();
	///Destruktor
	~Pociag();

	///Procedura wirtualna 
	/**Pozwala na wczytanie nowej, 
	wybranej danej string dla oniektu Pociag*/
	void zmienDane(std::string cos_nowego);
	/// Procedura pozwalajaca na zmiane czasu przyjazdu
	void zmienCzasDojazdu(int nowy_czas);
	///Procedura pozwalajaca na zmiane liczby wagonow
	void zmienLiczbeWagonow(int nowa_liczba);
	///Procedura pozwalajaca na zmiane nazwy pociagu
	void zmienNazwe(string nowa_nazwa);
	///Procedura wirtualna
	/**Pokazuje jaki obiekt zostal stworzony*/
	void coSieDzieje();
	///Procedura wirtualna
	/**Wypisuje na ekran dane pociagu */
	void wyswietlDane();
	///Procedura zapisujaca dane w pliku
	void zapiszWPliku(Pociag &st);
	///Procedura wczytujaca dane z pliku
	void wczytajZPliku(Pociag &st);

	///Przeciazony operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Pociag &p);
	///Przeciazony operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Pociag &p);
};