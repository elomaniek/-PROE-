#include <iostream>
#include <fstream>
#include <vector>
#include <conio.h>
#include "pociag.h"
#include "samolot.h"
#include "typ_pociagu.h"
#include "atrybuty.h"

using namespace std;


int main()
{
	Srodek_transportu *srodek1, *srodek2;
	Pociag pociag1, pociag2;
	Typ_pociagu typ1;
	Samolot samolot1, samolot2;
	Atrybuty atrybuty1, atrybuty2;
	string opcja;

	for (;;)
	{
		cout << "~~~~~~~~~~MENU~~~~~~~~~~" << endl <<
			"1.Dziedziczenie" << endl <<
			"2.Polimorfizm" << endl <<
			"3.Zapis i odczyt z pliku danych pociagu" << endl <<
			"4.Zapis i odczyt z pliku atrybutow" << endl <<
			"5.Zapisz w pliku reszte danych" << endl <<
			"6.Kontener vector" << endl <<
			"7.Aktualny stan" << endl <<
			"0.Wyjscie" << endl;

		cin >> opcja;

		if (opcja == "1")

		{
			cout << "Obiekt dziedziczacy zmienne z  klasy abstakcyjnej:" << endl;
			pociag1.wyswietlDane();
			cout << endl;
			cout << "Typ_pociagu dziedziczy zmienne od Pociagu:" << endl;
			typ1.wyswietlDane();
			

		}
		else if (opcja == "2")
		{
			cout << endl << "Polimorfizm." << endl;
			Srodek_transportu *obiekty[4];
			obiekty[0] = &pociag1;
			obiekty[1] = &pociag2;
			obiekty[2] = &samolot1;
			obiekty[3] = &samolot2;

			cout << endl << "Pociag po zmnianie danej: " << endl;
			obiekty[0]->zmienDane("cos_nowego");
			obiekty[0]->wyswietlDane();
			cout << endl << "Przed zmiana: " << endl;
			obiekty[1]->wyswietlDane();

			cout << endl << "Samolot po zmnianie danej: " << endl;
			obiekty[2]->zmienDane("cos_nowego");
			obiekty[2]->wyswietlDane();
			cout << endl << "Przed zmiana: " << endl;
			obiekty[3]->wyswietlDane();
			
		}
		else if (opcja == "3")
		{
			cout << endl << "Zmiana danych pociagu i zapis do pliku." << endl;
			pociag1.zmienCzasDojazdu(233);
			pociag1.zmienLiczbeWagonow(11);
			pociag1.zmienNazwe("LOL");
			pociag1.zapiszWPliku(pociag1);
			pociag2.wczytajZPliku(pociag2);
			pociag2.wyswietlDane();
			
		}
		else if (opcja == "4")
		{
			atrybuty1.zmienAtrybuty(444, "Maciek");
			atrybuty1.zapiszWPliku(atrybuty1);
			atrybuty2.wczytajZPliku(atrybuty2);
			cout << "Jesli atrybuty sa takie same to wszystko dziala!" << endl;
			atrybuty1.wyswietlAtrybuty();
			atrybuty2.wyswietlAtrybuty();
		
		}
		else if (opcja == "5")
		{
			typ1.zapiszWPliku(typ1);
			samolot1.zapiszWPliku(samolot1);

		}


		else if (opcja == "6")
		{
			cout << "Test" << endl;

			vector<Srodek_transportu*> srodki;

			for (int i = 0; i < 2; i++)
			{
				srodki.push_back(&typ1);
				srodki.push_back(&pociag1);
				srodki.push_back(&samolot1);
			}
			cout << "Te obiekty stworzylem: " << endl;

			for (int i = 0; i < 5; i++)
				srodki[i]->coSieDzieje();

			cout << endl << "Testy funkcji" << endl;

			vector<Srodek_transportu*>::iterator i;

			cout << "Iterator na 1 obiekt:" << endl;
			i = srodki.begin();
			(*i)->coSieDzieje();
			cout << "Iterator na 2 obiekt: " << endl;
			i += 1;
			(*i)->coSieDzieje();
			cout << "Iterator na ostatni obiekt" << endl;
			i = srodki.end() - 1;
			(*i)->coSieDzieje();
			cout << "Usuwam tablice" << endl;

			srodki.clear();

			if (srodki.empty())
				cout << "Tablica rzeczywiscie zostala usunieta" << endl;

		}
		else if (opcja == "7")
		{
			cout << endl << "Samolot:" << endl;
			samolot1.wyswietlDane();
			cout << endl << "Pociag:" << endl;
			pociag1.wyswietlDane();
			cout << endl << "Typ Pociagu:" << endl;
			typ1.wyswietlDane();
			
		}
		else if (opcja == "0")
		{
			exit(0);
		}
		else
		{
			cout << "Popelniles blad!" << endl;
			system("PAUSE");

		}
		cout << "[PRESS ENTER TO CONTINUE]" << endl;
		getchar(); getchar();
		system("cls");
	}return 0;
}



