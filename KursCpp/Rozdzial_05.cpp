#include "stdafx.h"
#include "KursCpp.h"

void Rozdzial5::Cwiczenie_01()
{
	int liczba1, liczba2;
	cout << "podaj 1 liczbe: ";
	cin >> liczba1;
	cout << "podaj 2 liczbe: ";
	cin >> liczba2;

	for (int i = liczba1; i < liczba2; i++)
		liczba1 += i + 1;

	cout << "suma tego zakresu to: " << liczba1;
}

void Rozdzial5::Cwiczenie_02()
{
	const int ArrSize = 101;

	array<long double, ArrSize> arry;
	arry[1] = arry[0] = 1;
	for (int i = 2; i < ArrSize; i++)
		arry[i] = i * arry[i - 1];
	for (int i = 0; i < ArrSize; i++)
		cout << i << "! = " << arry[i] << endl;

}

void Rozdzial5::Cwiczenie_03()
{
	int liczba1 = 1, liczba2 = 1;
	cout << "Podaj liczbe: ";
	cin >> liczba1;
	while (liczba1)
	{
		cout << "Podaj liczbe: ";
		cin >> liczba1;
		liczba2 += liczba1;
		cout << "\nSuma liczb to: " << liczba2 << endl;
	}
}

void Rozdzial5::Cwiczenie_04()
{
	double kapital_Dafne = 100, zysk_Dafne = 100, zysk_Cloe = 100;
	int ilosc = 0;

	do
	{
		zysk_Dafne += (0.1 * kapital_Dafne);
		zysk_Cloe += (0.05 * zysk_Cloe);
		ilosc++;
	} while (zysk_Dafne > zysk_Cloe);

	cout << "Dafne ma: " << zysk_Dafne << endl;
	cout << "Cloe ma: " << zysk_Cloe << endl;
	cout << "Lat: " << ilosc << endl;

}

void Rozdzial5::Cwiczenie_05()
{
	string miesiac[12]
	{
		"styczen",
		"luty",
		"marzec",
		"kwiecien",
		"maj",
		"czerwiec",
		"lipiec",
		"sierpien",
		"wrzesien",
		"pazdziernik",
		"listopad",
		"grudzien"
	};
	int sprzedaz[12]{};

	for (int i = 0; i < 12; i++)
	{
		cout << "Ile w miesiacu : " << miesiac[i] << " sprzedano: ";
		cin >> sprzedaz[i];
	}
	for (int i = 0; i < 11; i++)
	{
		sprzedaz[i + 1] += sprzedaz[i];

	}
	cout << "\nlacznie sprzedano: " << sprzedaz[11];
}

void Rozdzial5::Cwiczenie_06()
{
	string miesiac[12]
	{
		"styczen",
		"luty",
		"marzec",
		"kwiecien",
		"maj",
		"czerwiec",
		"lipiec",
		"sierpien",
		"wrzesien",
		"pazdziernik",
		"listopad",
		"grudzien"
	};
	int sprzedaz[12][3]{};

	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 12; i++)
		{
			cout << "W " << j + 1 << " roku, miesiacu: " << miesiac[i] << " sprzedano: ";
			cin >> sprzedaz[i][j];
		}

	}
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 11; i++)
		{
			sprzedaz[i + 1][j] += sprzedaz[i][j];

		}
		cout << "\nlacznie sprzedano: " << sprzedaz[11][j] << endl;
	}
	cout << "przez 3 lata sprzedano: " << sprzedaz[11][0] + sprzedaz[11][1] + sprzedaz[11][2] << endl;


}

void Rozdzial5::Cwiczenie_07()
{
	struct car
	{
		string marka;
		int rocznik;
	};

	int iloscSamochodow = 0;
	cout << "Ile samochodow skatalogowac? ";
	(cin >> iloscSamochodow).get();

	car *samochod = new car[iloscSamochodow];

	for (int i = 0; i <= iloscSamochodow - 1; i++)
	{
		cout << "Samochod #" << i + 1 << endl;
		cout << "Prosze podac marke: ";
		getline(cin, (samochod + i)->marka);
		cout << "Prosze podac rocznik: ";
		(cin >> (samochod + i)->rocznik).get();
	}
	cout << endl << endl;
	cout << "w katalogu znajduje sie\n";
	for (int i = 0; i <= iloscSamochodow - 1; i++)
	{
		cout << (samochod + i)->rocznik << " " << (samochod + i)->marka << endl;
	}
	delete[]samochod;
}

void Rozdzial5::Cwiczenie_08()
{
	char slowo[20];
	int licznik = 0;

	cout << "Podaj slowa, wpisz gotowe jesli chcesz skonczyc\n";
	do
	{
		cin >> slowo;
		licznik++;
	} while (strcmp("gotowe", slowo));
	cout << "Podano	" << licznik << " slow";
}

void Rozdzial5::Cwiczenie_09()
{
	int liczbaWierszy;

	cout << "Podaj liczbe wierszy";
	cin >> liczbaWierszy;
	for (int i = 1; i <= liczbaWierszy; i++)
	{
		for (int k = liczbaWierszy - i; k > 0; k--)
		{
			cout << ".";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}