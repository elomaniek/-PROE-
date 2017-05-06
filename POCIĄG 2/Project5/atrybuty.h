#pragma once
#include <iostream>
#include <fstream>
#include <string>
///Podklasa Atrybuty klasy Restauracja
class Atrybuty
{
private: 
	///<Pole definiuj¹ce predkosc 
	int predkosc;
	///<Pole definiuj¹ce liczbe miejsc
	int liczba_miejsc;
	///<Pole definiuj¹ce imie motorniczego
	std::string imie_kapitana;
public:
	///Konstruktor domyslny
	Atrybuty();
	///Destruktor
	~Atrybuty();

	///Procedura pozwalajaca wyswietlic dane 
	void wyswietlAtrybuty();
	///Procedura pozwalajaca zmienic wybrane atrybuty
	void zmienAtrybuty(int nowa_predkosc, std::string nowy_kapitan);
	///Procedura pozwalajaca zapisac dane Atrybutow w pliku
	void zapiszWPliku(Atrybuty &a);
	///Procedura pozwalajaca odczytac dane Atrybutow z pliku
	void wczytajZPliku(Atrybuty &a);

	///Przeciazany operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Atrybuty &a);
	///Przeciazany operator strumieniowy  >>
	friend std::istream& operator >> (std::istream &s, Atrybuty &a);

};