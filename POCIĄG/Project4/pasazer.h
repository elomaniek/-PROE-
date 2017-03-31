#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pasazer {
	string name;
	string skad;
	bool bilet; //bool - zwraca tylko prawde/falsz  / zajmuje mniej pamieci
	bool przemyt; //czy ktos przemyca papierosy zza wschodniej granicy?!
	long long pesel; 
	
public:
	Pasazer(); // konstrunktor domyslny
	~Pasazer(); //destruktor


	void wyswietlPasazera();
	void nowyPasazerImie(string nowy_name);
	void nowyPasazerSkad(string nowy_skad);
	void czyMaBilet(bool czy_bilet);
	void czyPrzemyca(bool czy_przemyt);
	void nowyPasazerPesel(long long nowy_pesel);



	friend ostream& operator<<(ostream&s, Pasazer &p); //operator strumieniowy - wyklad - jak dziala?!
	Pasazer& operator=(const Pasazer&p); // przypisuje dane jednego pasazera do drugiego, nie korzystam w programie




};
