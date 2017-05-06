#pragma once
#include <iostream>
#include <fstream>

using namespace std;
///Klasa abstrakcyjna
class Srodek_transportu
{
protected:
	///<Pole okreslajace godzine wyjazdu 
	string godzina_wyjazdu;
public:
	///Konstruktor domyslny
	Srodek_transportu();
	///Destruktor wirtualny
	virtual ~Srodek_transportu();
	///Metoda witrualna
	/**Funkcja nie jest zdefiniowana 
	w klasie Srodek_transportu*/
	virtual void coSieDzieje() = 0;
	///Metoda wirtualna pozwalajaca na wyswietlenie danych danego obiektu
	/**Funkcja nie jest zdefiniowana
	w klasie Srodek_transportu*/
	virtual void wyswietlDane() = 0;
	///Metoda witrualna pozwalajaca na zmienienie dowolnej danej typu string
	/**Funkcja nie jest zdefiniowana
	w klasie Srodek_transportu*/
	virtual void zmienDane(std::string cos_nowego) = 0;
	
	///Przeciazony operator strumieniowy <<
	friend ostream& operator << (ostream &s, Srodek_transportu &srodek);
	///Przeciazony operator strumieniowy >>
	friend istream& operator >> (istream &s, Srodek_transportu &srodek);
};