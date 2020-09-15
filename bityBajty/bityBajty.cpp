#include <iostream>
#include <string>

using namespace std;


void przeliczanieJednostek() {
	string wartosc;
	int b, B, Mb, MB, Gb, GB;
	float oddzielone;
	string wynik;

	system("CLS");
	cout << "Podaj wartosc do przeliczenia (bez spacji miedzy wartoscia a jednostka): ";
	cin >> wartosc;

	for (int i = 0; i < wartosc.length(); i++) {
		switch (wartosc[i]) {
		case 'b':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			cout << oddzielone << " jest rowna: " << endl;
			cout << oddzielone / 8 << " B" << endl;
			cout << oddzielone / 1000 << " kb" << endl;
			cout << oddzielone / 1000 / 8 << " kB" << endl;
			cout << oddzielone / 1000000 << " Mb" << endl;
			cout << oddzielone / 1000000 / 8 << " MB" << endl;
			break;


		case 'B':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			cout << oddzielone << " jest rowna: " << endl;
			cout << oddzielone * 8 << " b" << endl;
			cout << oddzielone / 1000 * 8 << " kb" << endl;
			cout << oddzielone / 1000 << " kB" << endl;
			cout << oddzielone / 1000000 * 8 << " Mb" << endl;
			cout << oddzielone / 1000000 << " MB" << endl;
			break;

		case 'kb':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			cout << oddzielone << " jest rowna: " << endl;
			cout << oddzielone * 1000 << " b" << endl;
			cout << oddzielone * 1000 / 8 << " B" << endl;
			cout << oddzielone / 8 << " kB" << endl;
			cout << oddzielone / 1000 << " Mb" << endl;
			cout << oddzielone / 1000 / 8 << " MB" << endl;
			break;

		case 'kB':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			cout << oddzielone << " jest rowna: " << endl;
			cout << oddzielone * 1000 / 8 << " b" << endl;
			cout << oddzielone * 1000 << " B" << endl;
			cout << oddzielone / 8 << " kb" << endl;
			cout << oddzielone / 1000 * 8 << " Mb" << endl;
			cout << oddzielone / 1000 << " MB" << endl;
			break;

		case 'Mb':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			cout << oddzielone << " jest rowna: " << endl;
			cout << oddzielone * 1000000 << " b" << endl;
			cout << oddzielone * 1000000 / 8 << " B" << endl;
			cout << oddzielone * 1000 << " kb" << endl;
			cout << oddzielone * 1000 / 8 << " kB" << endl;
			cout << oddzielone / 8 << " MB" << endl;
			break;

		case 'MB':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			cout << oddzielone << " jest rowna: " << endl;
			cout << oddzielone * 1000000 * 8 << " b" << endl;
			cout << oddzielone * 1000000 << " B" << endl;
			cout << oddzielone * 1000 * 8 << " kb" << endl;
			cout << oddzielone * 1000 << " kB" << endl;
			cout << oddzielone * 8 << " Mb" << endl;
			break;

		case 'Gb':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			cout << oddzielone << " jest rowna: " << endl;
			cout << oddzielone * 1000000 << " b" << endl;
			cout << oddzielone * 1000000 / 8 << " B" << endl;
			cout << oddzielone * 1000 << " kb" << endl;
			cout << oddzielone * 1000 / 8 << " kB" << endl;
			cout << oddzielone / 1000 << " Mb" << endl;
			cout << oddzielone / 1000 / 8 << " MB" << endl;
			break;

		case 'GB':
			wynik = wartosc.substr(0, i);
			oddzielone = stoi(wartosc);
			cout << oddzielone << " jest rowna: " << endl;
			cout << oddzielone * 1000000 * 8 << " b" << endl;
			cout << oddzielone * 1000000 << " B" << endl;
			cout << oddzielone * 1000 * 8 << " kb" << endl;
			cout << oddzielone * 1000 << " kB" << endl;
			cout << oddzielone / 1000 / 8 << " Mb" << endl;
			cout << oddzielone / 1000 << " MB" << endl;
			break;



		}




	}


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


int main()
{
	char wybor;


	cout << "1. Przeliczanie jednostek." << endl;
	cout << "2. Oblcizanie czasu pobierania." << endl;
	cout << "3. Obliczanie predkosci lacza." << endl;
	wybor = getchar();

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
	}


	return 0;
}


