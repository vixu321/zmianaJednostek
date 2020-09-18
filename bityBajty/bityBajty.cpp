#include <iostream>
#include <string>
#include <conio.h>


using namespace std;

void przeliczanieJednostek() {

	float b, B, kb, kB, Mb, MB, Gb, GB;
	float oddzielone;
	string wynik;
	string wartosc;

	system("CLS");
	cout << "Podaj wartosc do przeliczenia (bez spacji miedzy wartoscia a jednostka): ";
	cin >> wartosc;

	for (int i = 0; i < wartosc.length() - 1; i++) {
		
		if (wartosc[i+1] == 'b') {
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			b = oddzielone;
			B = b / 8;
			kb = b / 1000;
			kB = b / 1000 / 8;
			Mb = b / 1000000;
			MB = b / 1000000 / 8;
			Gb = b / 1000000000;
			GB = b / 1000000000 / 8;
		}
		else if (wartosc[i + 1]=='B') {
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			B = oddzielone;
			b = B * 8;
			kb = b / 1000;
			kB = b / 1000 / 8;
			Mb = b / 1000000;
			MB = b / 1000000 / 8;
			Gb = b / 1000000000;
			GB = b / 1000000000 / 8;
		}

		switch (wartosc[i]) {
		case 'k':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			if (wartosc[i + 1] == 'b') {
				kb = oddzielone;
				b = kb * 1000;
				B = b / 8;
				kB = b / 1000 / 8;
				Mb = b / 1000000;
				MB = b / 1000000 / 8;
				Gb = b / 1000000000;
				GB = b / 1000000000 / 8;
			}
			else if (wartosc[i + 1] == 'B') {
				kB = oddzielone;
				b = kB * 8000;
				B = b / 8;
				kb = b / 1000;
				Mb = b / 1000000;
				MB = b / 1000000 / 8;
				Gb = b / 1000000000;
				GB = b / 1000000000 / 8;
				break;
			}
			
			
			break;

		case 'M':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);

			if (wartosc[i + 1] == 'b') {
				Mb = oddzielone;
				b = Mb * 1000000;
				B = b / 8;
				kb = b / 1000;
				kB = b / 1000 / 8;
				MB = b / 1000000 / 8;
				Gb = b / 1000000000;
				GB = b / 1000000000 / 8;
			}
			else if (wartosc[i + 1] == 'B') {
				MB = oddzielone;
				b = MB * 8000000;
				B = b / 8;
				kb = b / 1000;
				kB = b / 1000 / 8;
				Mb = b / 1000000;
				Gb = b / 1000000000;
				GB = b / 1000000000 / 8;
			}
			break;

		case 'G':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			if (wartosc[i + 1] == 'b') {
				Gb = oddzielone;
				b = Gb * 1000000000;
				B = b / 8;
				kb = b / 1000;
				kB = b / 1000 / 8;
				Mb = b / 1000000;
				MB = b / 1000000 / 8;
				GB = b / 1000000000 / 8;
			}
			else if (wartosc[i + 1] == 'B') {
				GB = oddzielone;
				b = GB * 8000000000;
				B = b / 8;
				kb = b / 1000;
				kB = b / 1000 / 8;
				Mb = b / 1000000;
				MB = b / 1000000 / 8;
				Gb = b / 1000000000;
			}
			break;


		}

	}

	cout << wartosc << " jest rowne: " << endl;
	cout << b << " b" << endl;
	cout << B << " B" << endl;
	cout << kb << " kb" << endl;
	cout << kB << " kB" << endl;
	cout << Mb << " Mb" << endl;
	cout << MB << " MB" << endl;
	cout << Gb << " Gb" << endl;
	cout << GB << "GB" << endl;


}


void obliczanieCzasu() {
	float szybkoscLacza;
	float wielkoscPliku;
	float czasPobierania;
	system("CLS");

	cout << "Podaj szybkosc lacza w Mb/s: ";
	cin >> szybkoscLacza;
	cout << endl << "Podaj wielkosc pliku w GB: ";
	cin >> wielkoscPliku;
	wielkoscPliku *= 1000;
	szybkoscLacza /= 8;
	czasPobierania = (wielkoscPliku / szybkoscLacza) / 60;
	cout << endl << "Pobranie tego pliku zajmie " << czasPobierania << "min" << endl;

}

void obliczaniePredkosci() {
	float wielkoscPliku;
	float maksymalnyCzas;
	float minimalnaPredkosc;
	system("CLS");
	cout << "Podaj wielkosc pliku w GB: ";
	cin >> wielkoscPliku;
	cout << endl << "Podaj maksymalny czas w ktorym chcesz pobrac ten plik w minutach: ";
	cin >> maksymalnyCzas;

	wielkoscPliku *= 8000;
	maksymalnyCzas *= 60;

	minimalnaPredkosc = wielkoscPliku / maksymalnyCzas;

	cout << endl << "Aby ten plik pobrac w maksymalnie tym czasie potrzebne jest lacze " << minimalnaPredkosc << " Mb/s" << endl;

}

void obliczaniePliku() {
	float predkosc;
	float czas;
	float rozmiar;
	
	system("CLS");
	cout << "Podaj predkosc lacza w Mb/s: ";
	cin >> predkosc;
	cout << endl << "Podaj czas w ktorym ten plik sie pobral (w minutach): ";
	cin >> czas;
	cout << "Rozmiar tego pliku to: " << predkosc / (czas*60) <<"Mb";
}


int main()
{
	char wybor;


	cout << "1. Przeliczanie jednostek." << endl;
	cout << "2. Oblcizanie czasu pobierania." << endl;
	cout << "3. Obliczanie predkosci lacza." << endl;
	cout << "4. Obliczanie rozmiaru pliku." << endl;
	wybor = _getch();

	switch (wybor) {
	case '1':
		przeliczanieJednostek();
		break;

	case '2':
		obliczanieCzasu();
		break;

	case '3':
		obliczaniePredkosci();
		break;

	case '4':
		obliczaniePliku();
		break;

	}


	return 0;
}


