#include <iostream>
#include <string>
#include "pociag.h"

using namespace std;
 
int Pociag::ileObiektow = 0;

Pociag::Pociag() 
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor domyslny obiektu Pociag" << endl;

#endif
	dokad = "Minsk Maz.";
	nazwa = "MIEDZYMIASTOWY";
	moc = 822;
	predkosc = 99;
	ile_pasazerow = 2;
	ile_konduktorow = 1;
	pasazer = new Pasazer[ile_pasazerow];
	konduktor = new Konduktor[ile_konduktorow];
	ileObiektow++;
	cout << "Obiekty po k.domyslnym:" << ileObiektow << endl;

}
Pociag::Pociag(string new_dokad, string new_nazwa, int new_moc, int new_predkosc, int new_ile_pasazerow, int new_ile_konduktorow)
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor przypisania obiektu Pociag" << endl;

#endif
	dokad = new_dokad;
	nazwa = new_nazwa;
	moc = new_moc;
	predkosc = new_predkosc;
	ile_pasazerow = new_ile_pasazerow;
	ile_konduktorow = new_ile_konduktorow;
	pasazer = new Pasazer[ile_pasazerow];
	konduktor = new Konduktor[ile_konduktorow];
	ileObiektow++;
	cout << "Obiekty po k.przypisania:" << ileObiektow << endl;

}
Pociag::Pociag(const Pociag &pociag)
{
	dokad = pociag.dokad;
	nazwa = pociag.nazwa;
	moc = pociag.moc;
	predkosc = pociag.predkosc;
	ile_pasazerow = pociag.ile_pasazerow;
	ile_konduktorow = pociag.ile_konduktorow;

	if (pociag.pasazer != nullptr)
	{
		pasazer = new Pasazer[ile_pasazerow];
		for (int i = 0; i < ile_pasazerow; i++)
		{
			pasazer[i] = pociag.pasazer[i];
		}
	}
	else
	{
		pasazer = nullptr;
	}

	ileObiektow++;
	cout << "Obiekty po k. kopiujacym (pasazer)" << ileObiektow << endl;

	if (pociag.konduktor != nullptr)
	{
		konduktor = new Konduktor[ile_konduktorow];
		for (int i = 0; i < ile_konduktorow; i++)
		{
			konduktor[i] = pociag.konduktor[i];
		}
	}
	else
	{
		pasazer = nullptr;
	}
	ileObiektow++;
	cout << "Obiekty po k. kopiujacym (konduktor)" << ileObiektow << endl;
}
	Pociag::~Pociag()
	{
#ifdef _DEBUG

		cout << "Wywolano destruktor Pociag" << endl;

#endif
		delete[]pasazer;
		delete[]konduktor;
		ileObiektow--;
	};

	void Pociag::ilePasazerow()
	{
		cout << ile_pasazerow << endl;
	}
	void Pociag::ileKonduktorow()
	{
		cout << ile_konduktorow << endl;
	}
	void Pociag::wyswietlPredkosc()
	{
		cout << predkosc << endl;
	}
	void Pociag::wyswietlPociag()
	{
		cout << endl << "DANE POCIAGU: " << endl;
		cout << "Jedzie do: " << dokad << endl;
		cout << "Jak sie nazywa: "<< nazwa << endl;
		cout << "Moc: " << moc << " KM"<< endl;
		cout <<	"Ilu w nim pasazerow: "<< ile_pasazerow << endl;
		cout << "Ilu w nim konduktorow: "<< ile_konduktorow << endl;
	
		cout << endl << "Wagonik" << endl;
		
		wagon.wyswietlWagon();

		if (ile_konduktorow > 0)
		{
			cout << endl << "Wypisz Konduktorow" << endl;
			for (int i = 0; i < ile_konduktorow; i++)
			{
				konduktor[i].wyswietlKonduktora();
			}
		}
		else
			cout << "nie ma Konduktorow w pociagu!!!" << endl;
	
		if (ile_pasazerow > 0)
		{
			cout << endl << "Wypisz Pasazerow" << endl;
			for (int i = 0; i < ile_pasazerow; i++)
			{
				pasazer[i].wyswietlPasazera();
			}
		}
		else
			cout << "nie ma Pasazerow, po co ten pociag ruszyl?!" << endl;
	};


	void Pociag::dodajPasazera(string nowy_name, string nowy_skad, bool czy_przemyt, bool czy_bilet, long long nowy_pesel )
	{
		Pasazer* temp;							
		temp = new Pasazer[ile_pasazerow];
		for (int i = 0; i < ile_pasazerow; i++)		
		{
			temp[i] = pasazer[i];
		}
		delete[]pasazer;
		ile_pasazerow++;
		pasazer = new Pasazer[ile_pasazerow];

		for (int i = 0; i < ile_pasazerow - 1; i++)
		{
			pasazer[i] = temp[i];
		}
		pasazer[ile_pasazerow - 1].nowyPasazerImie(nowy_name);
		pasazer[ile_pasazerow - 1].nowyPasazerSkad(nowy_skad);  
		pasazer[ile_pasazerow - 1].czyPrzemyca(czy_przemyt);
		pasazer[ile_pasazerow - 1].czyMaBilet(czy_bilet);
		pasazer[ile_pasazerow - 1].nowyPasazerPesel(nowy_pesel);
		delete[]temp;
	}

	void Pociag::dodajKonduktora(string nowe_imie_nazwisko, string nowa_ksywa, int nowa_wyplata, int nowy_wiek)
	{
		Konduktor* temp;
		temp = new Konduktor[ile_konduktorow];
		for (int i = 0; i < ile_konduktorow; i++)
		{
			temp[i] = konduktor[i];
		}
		delete[] konduktor;
		ile_konduktorow++;
		konduktor = new Konduktor[ile_konduktorow];  // niepotrzebne

		for (int i = 0; i < ile_konduktorow - 1; i++)
		{
			konduktor[i] = temp[i];
		}
		konduktor[ile_konduktorow - 1].noweImieINazwisko(nowe_imie_nazwisko);
		konduktor[ile_konduktorow - 1].nowaKsywa(nowa_ksywa);
		konduktor[ile_konduktorow - 1].nowaWyplata(nowa_wyplata);
		konduktor[ile_konduktorow - 1].nowyWiek(nowy_wiek);
		delete[]temp;
	}



	bool Pociag::operator==(const Pociag &p) //sprawdzenie czy w obu pociagach jest tyle samo pracownikow
	{
		if (p.ile_konduktorow == ile_konduktorow)
			return true;
		else
			return false;
	}
	bool Pociag::operator>(const Pociag &p) //porownanie predkosci
	{
		if (p.predkosc > predkosc)
			return true;
		else
			return false;
	}

	bool Pociag::operator<(const Pociag &p) //porownanie mocy
	{
		if (p.moc < moc)
			return true;
		else
			return false;
	}
	bool Pociag::operator != (const Pociag &s) //czy predkosci sie roznia
	{
		if (s.predkosc != predkosc)
			return true;
		else
			return false;
	}

	Pociag & Pociag::operator ++ (int) //zwiekszenie predkosci z ograniczeniem do 250 bo inaczej bedzie kraksa!!
	{
		if (predkosc <250)
			predkosc = predkosc + 10;
		return *this;
	}

	Pociag & Pociag::operator -- (int) // zmniejszenie predkosci, zabezpieczenie przed predkoscia ujemna
	{									
		if (predkosc > 10)
			predkosc = predkosc - 11;
		return *this;
	}

	Pociag& Pociag::operator=(const Pociag &p) //przypisanie jednemu pociagowi wartosci drugiego
	{
		if (&p != this)  //zabezpieczenie przed przypisaniem samego siebie
		{
			dokad = p.dokad;
			nazwa = p.nazwa;
			moc = p.moc;
			predkosc = p.predkosc;
			ile_konduktorow = p.ile_konduktorow;
			ile_pasazerow = p.ile_pasazerow;
			wagon = p.wagon;

			if (konduktor != nullptr)  //jezeli istnieja konduktorrzy to ich usuwam
				delete[] konduktor;
			konduktor = new Konduktor[ile_konduktorow]; // i tworze nowych

			for (int i = 0; i < ile_konduktorow; i++)
			{
				konduktor[i] = p.konduktor[i];			//kopiuje wszystkich z jednego pociagu do drugiego
			}
			if (pasazer != nullptr) //to samo
				delete[] pasazer;
			pasazer = new Pasazer[ile_pasazerow];

			for (int i = 0; i < ile_pasazerow; i++)
			{
				pasazer[i] = p.pasazer[i];
			}
			return *this;
		}
	}
	Pociag& Pociag::operator += (const Pociag &p) //ilu pasazerow jedzie w obu pociagach 
	{
		ile_pasazerow += p.ile_pasazerow;
		return *this;
	}
	Konduktor& Pociag::operator[](unsigned int i) //operator indeksowania, zwraca konduktora o danym indeksie
	{
		if (i < ile_konduktorow)
		{
			return konduktor[i];
		}
	}

	ostream& operator<<(ostream&s, Pociag &p) //operator strumieniowy
	{
		s << "Dokad zmierza: " << p.dokad << endl <<
			"Nazwa pociagu: " << p.nazwa << endl <<
			"Moc pociagu: " << p.moc << "KM" << endl <<
			"Predkosc: " << p.predkosc << "km/h" << endl <<
			"Ilu jest konduktorow: " << p.ile_konduktorow << endl <<
			"Ilu jest pasazerow: " << p.ile_pasazerow << endl << endl;
		for (int i = 0; i < p.ile_konduktorow; i++)
		{
			s << p.konduktor[i] << endl;
		}
		for (int i = 0; i < p.ile_pasazerow; i++)
		{
			s << p.pasazer[i] << endl;
		}
		return s;
	}

	Pociag::operator int() //operator konwertujacy, suma pasazerow
	{
		return ile_pasazerow;
	}














