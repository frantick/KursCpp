#include "stdafx.h"
#include "KursCpp.h"


void Rozdzial4::Cwiczenie_02()
{
	string name;
	string dessert;

	cout << "Podaj swoje imiê:\n";
	getline(cin, name);    // wczytanie wiersza i znaku nowego wiersza
	cout << "podaj :\n";
	getline(cin, dessert);
	cout << "Mam dla ciebie " << dessert;
	cout << ", " << name << ".\n";
}

void Rozdzial4::Cwiczenie_03()
{
	char imie[15];
	char nazwisko[15];
	char lacznie[3] = ", ";

	cout << "Podaj imie: ";
	cin.getline(imie, 15);
	cout << "podaj nazwisko: ";
	cin.getline(nazwisko, 15);
	strcat_s(imie, ", ");
	strcat_s(imie, nazwisko);
	cout << "trzeci napis: " << imie;

}

void Rozdzial4::Cwiczenie_04()
{
	string imie, nazwisko, lacznik{ ", " };
	cout << "podaj imie: ";
	getline(cin, imie);
	cout << "podaj nazwisko: ";
	getline(cin, nazwisko);
	cout << " trzeci napis to: " << imie + lacznik + nazwisko;
}

void Rozdzial4::Cwiczenie_05()
{
	struct batonik
	{
		string marka;
		double waga;
		int kalorie;
	};

	batonik snack
	{
		"nazwa",
		2.4,
		554
	};

	cout << snack.marka << " " << snack.waga << " " << snack.kalorie;

}

void Rozdzial4::Cwiczenie_06()
{
	struct batonik
	{
		string marka;
		double waga;
		int kalorie;
	};

	batonik xsnack[3]
	{
		{ "nazwa 1", 2.5, 300 },
	{ "nazwa 2", 6.5, 400 },
	{ "nazwa 3", 1.3, 502 }
	};

	for (int i = 0; i < 3; i++)
	{
		cout << xsnack[i].marka << " " << xsnack[i].waga << " " << xsnack[i].kalorie << endl;
	}

}

void Rozdzial4::Cwiczenie_07()
{
	struct pizza
	{
		string nazwa;
		int srednica;
		double waga;
	};

	pizza pp;

	cout << "podaj nazwe: ";
	getline(cin, pp.nazwa);
	cout << "podaj srednice: ";
	cin >> pp.srednica;
	cout << "podaj wage: ";
	cin >> pp.waga;
	cout << endl << endl;
	cout << pp.nazwa << endl;
	cout << pp.srednica << endl;
	cout << pp.waga << endl;


}

void Rozdzial4::Cwiczenie_08()
{
	struct pizza
	{
		string nazwa;
		int srednica;
		double waga;
	};

	pizza *pp = new	pizza;
	cout << "podaj srednice: ";
	cin >> (*pp).srednica;
	cout << "podaj nazwe: ";
	getline(cin, pp->nazwa);
	cout << "podaj wage: ";
	cin >> (*pp).waga;
	cout << endl << endl;
	cout << pp->nazwa << endl;
	cout << pp->srednica << endl;
	cout << pp->waga << endl;

	delete pp;
}

void Rozdzial4::Cwiczenie_09()
{
	struct batonik
	{
		string nazwa;
		double waga;
		int kalorie;
	};

	batonik *bat = new batonik[3];
	bat->nazwa = "nazwa 1";
	bat->waga = 23;
	bat->kalorie = 15;

	(bat + 1)->nazwa = "nazwa 2";
	(bat + 1)->waga = 223;
	(bat + 1)->kalorie = 232;

	(bat + 2)->nazwa = "trzecia nazwa";
	(bat + 2)->waga = 22.2;
	(bat + 2)->kalorie = 55;

	for (int i = 0; i < 3; i++)
		cout << bat[i].kalorie << endl
		<< bat[i].waga << endl
		<< bat[i].nazwa << endl;
	delete[] bat;

}

void Rozdzial4::Cwiczenie_10()
{
	const int aa = 3;
	array<double, aa> tab;

	cout << "podaj pierwszy czas: ";
	cin >> tab[0];
	cout << "podaj drugi czas: ";
	cin >> tab[1];
	cout << " podaj trzeci czas";
	cin >> tab[2];

	cout << "poszczegolne czasy to :" << endl
		<< tab[0] << endl
		<< tab[1] << endl
		<< tab[2] << endl;
	cout << "a srednia to :";
	tab[0] += tab[1] + tab[2];
	cout << (tab[0] / aa) << endl;

}