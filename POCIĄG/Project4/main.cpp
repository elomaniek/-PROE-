#include <iostream>
#include <string>
#include "pociag.h"
#include "pasazer.h"
#include "konduktor.h"
#include "wagon.h"
#include <Windows.h>

using namespace std; //czemu nie dziala?!?!?!?!?!?, jednak dzialalo!

int sumaPasazerow(int a, int b)   
	{
		return a + b;
	}

int main()
{
	Pociag pociag1("Warszawy", "TLK 11115 Kraszewski", 912, 132, 1, 2);
	Pociag pociag2("Bialej Podl.", "PENDOLINO", 1409, 201, 3, 1);
	pociag1.dodajPasazera("Kamil", "Bieszczady", true, false, 64111104612);
	pociag2.dodajKonduktora("Michal Swiatek", "Michu", 2123, 20);

#ifdef _DEBUG
	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ POCIAG 1 ~~~~~~~~~~~~~~~~~~~~" << endl;
	pociag1.wyswietlPociag();
	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ POCIAG 2 ~~~~~~~~~~~~~~~~~~~~" << endl;
	pociag2.wyswietlPociag();
	std::system("PAUSE");

	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ DODAJE PASAZERA DO P1 ~~~~~~~~~~~~~~~~~~~~" << endl;
	pociag1.dodajPasazera("Kuba", "Warszawa", true, true, 98566621112);
	pociag1.wyswietlPociag();
	std::system("PAUSE");

	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ TEST == czy tyle samo konduktorow ~~~~~~~~~~~~~~~~~~~~" << endl;
	if (pociag1 == pociag2)
		std::cout << "W obu pociagach jest tyle samo konduktorow" << endl;
	else
		std::cout << "Ktos jest na urlopie" << endl;

	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ TEST > porownanie predkosci ~~~~~~~~~~~~~~~~~~~~" << endl;
	if (pociag1 > pociag2)
		std::cout << "Pociag 1 jedzie szybciej" << endl;
	else
		std::cout << "Pociag 1 musi przyspieszyc!" << endl;


	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ TEST < porownanie mocy ~~~~~~~~~~~~~~~~~~~~" << endl;
	if (pociag1 > pociag2)
		std::cout << "Pociag 1 ma mniejsza moc :'(" << endl;
	else
		std::cout << "Pociag 2 ma mniejsza moc!!!" << endl;


	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ TEST != czy pociagi jada z ta sama predkoscia ~~~~~~~~~~~~~~~~~~~~" << endl;
	if (pociag1 != pociag2)
		std::cout << "Preskosci sie roznia" << endl;
	else
		std::cout << "Dwa pociagi jada z ta sama predkoscia" << endl;


	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ TEST [] zwraca konduktora o danym indeksie ~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Konduktor z ID 2:" << endl;
	cout << pociag1[1] << endl;
	

	std::cout << "~~~~~~~~~~~~~~~~~~~~ TEST ++ zwieksza predkosc ~~~~~~~~~~~~~~~~~~~~" << endl;
	std::cout << "Preskossc drugiego pociagu: " <<endl;
	pociag2.wyswietlPredkosc();
	pociag2++;
	std::cout << "Predkosc drugiego pociagu po zmianie: " << endl;
	pociag2.wyswietlPredkosc();
	cout << endl;


	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ TEST -- zmniejsza predkosc ~~~~~~~~~~~~~~~~~~~~" << endl;
	std::cout << "Preskossc drugiego pociagu: " << endl;
	pociag2.wyswietlPredkosc();
	pociag2--;
	pociag2--;
	pociag2--;
	std::cout << "Predkosc drugiego pociagu po trzykrotnym zmniejszeniu predkosci: " << endl;
	pociag2.wyswietlPredkosc();


	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ TEST int() ~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Suma pasazerow: ";
	cout << sumaPasazerow(pociag1, pociag2) << endl; //gdybym dal po += wynik wynioslby 9, bo w operatorze +=dodaje p2 do p1, wiec p1=6
	
	system("PAUSE");

	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ TEST = przypisanie wartosci jednego do drugiego ~~~~~~~~~~~~~~~~~~~~" << endl;
	pociag1 = pociag2;
	pociag1.wyswietlPociag();
	pociag2.wyswietlPociag();

	system("PAUSE");

	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ TEST += ilu jest pasazerow ~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Liczba pasazerow w 1 pociagu: ";
	pociag1.ilePasazerow();
	cout << "Liczba pasazerow w 2 pociagu: ";
	pociag2.ilePasazerow();
	pociag1 += pociag2;
	cout << "Suma pasazerow: ";
	pociag1.ilePasazerow();
	cout << endl;

	system("PAUSE");

	std::cout << endl << "~~~~~~~~~~~~~~~~~~~~ TEST << wypisanie elementow pociagu ~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Drugi pociag: " << endl;
	cout << pociag2;
	  
	

	std::system("PAUSE");
	
#endif

	system("PAUSE");
	return 0;
	


}
