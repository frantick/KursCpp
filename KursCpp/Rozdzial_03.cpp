#include "stdafx.h"
#include "KursCpp.h"

void Rozdzial3::Cwiczenie_04()
{

	const int dni = 86400;
	const int godziny = 3600;
	const int minuty = 60;
	long long ile_sek;

	cout << "podaj ilosc sekund: ";
	cin >> ile_sek;
	cout << ile_sek << " to inaczej ";
	cout << ile_sek / dni << " dni, ";
	ile_sek %= dni;
	cout << ile_sek / godziny << " godzin, ";
	ile_sek %= godziny;
	cout << ile_sek / minuty << " minut, i ";
	ile_sek %= minuty;
	cout << ile_sek << " sekund.";
}

void Rozdzial3::Cwiczenie_05()
{
	const long double liczba1 = 6898758899;
	const long double liczba2 = 38482919;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << liczba2 << " to " << (liczba2 / liczba1) * 100 << " % " << "liczby " << liczba1 << endl;
}

void Rozdzial3::Cwiczenie_06()
{
	double kilometry, litry;
	cout << "Podaj ile km przejechales: ";
	cin >> kilometry;
	cout << "Podaj ile paliwa zuzyto: ";
	cin >> litry;
	cout << "Srednie zuzycie to: " << litry / kilometry * 100 << endl;
}

void Rozdzial3::Cwiczenie_07()
{
	double kilometry, litry;
	cout << "Podaj ile km przejechales: ";
	cin >> kilometry;
	cout << "Podaj ile paliwa zuzyto: ";
	cin >> litry;
	cout << "Srednie zuzycie w litrach/kilometr to: " << litry / kilometry * 100 << endl;
	litry /= 3.875;
	kilometry *= 0.6214;
	cout << "a w galonach/mile: " << kilometry / litry / 100 << endl;
}

