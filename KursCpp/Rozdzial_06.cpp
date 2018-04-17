#include "stdafx.h"
#include "KursCpp.h"

void Rozdzial6::Listing6_8()
{
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punc = 0;
	int others = 0;
	char ch;

	cout << " Podaj tekst do analizy i zakoncz go @";

	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punc++;
		else
			others++;
		cin.get(ch);
	}
	cout << chars << "  liter, "
		<< whitespace << " bialych znakow, "
		<< digits << " cyfr, "
		<< punc << " znakow przestankowych"
		<< others << " innych znakow." << endl;
}

void Rozdzial6::Cwiczenie_01()
{
	char ch;
	cout << " Podaj tekst do analizy i zakoncz go @";

	while (cin.get(ch) && ch != '@')
	{
		if (!isdigit(ch))
		{
			if (isupper(ch))
			{
				cout << static_cast<char> (tolower(ch));
			}
			else
			{
				cout << (char)toupper(ch);
			}
		}
	}
}

void Rozdzial6::Cwiczenie_02()
{
	const uint8_t maxArray = 10;
	double tablica[maxArray];
	double total = 0;
	int i = 0;
	cout << "Podaj " << i + 1 << " liczbe: ";
	while (i < maxArray && cin >> tablica[i])
	{
		if (++i < maxArray) cout << "Podaj " << i + 1 << " liczbe: ";
	}

	for (int j = 0; j < i; j++)
	{
		total += tablica[j];
	}

	cout << "\n Total: " << (total / i) << endl;

	for (int j = 0; j < i; j++)
	{
		if (tablica[j] >(total / i))
		{
			cout << tablica[j] << ", ";
		}
	}

}

void Rozdzial6::Cwiczenie_03()
{
	char menu;
	cout << "a. aaa\nb. bbb\nc. ccc\nd. ddd\nx. exit\n";
	while (cin.get(menu) && menu != 'x')
	{
		if (menu == '\n')
		{
			continue;
		}
		switch (menu)
		{
		case 'a':
			cout << "a";
			break;
		case 'b':
			cout << "b";
			break;
		case 'c':
			cout << "c";
			break;
		case 'd':
			cout << "d";
			break;
		default:
			cout << "prosze wybrac pozycje z listy lub x zeby zakonczyc." << endl;
			break;
		}
		cout << "a. aaa\nb. bbb\nc. ccc\nd. ddd\nx. exit\n";
	}
}
void Rozdzial6::Cwiczenie_04()
{
	const int strsize = 10;

	struct zdpw
	{
		char imie[strsize];
		char nazwisko[strsize];
		char pseudo[strsize];
		int prefer;
	};
	const int wielkoscTablicy = 4;
	zdpw tablica[wielkoscTablicy] =
	{
		{ "Imie1", "Nazwisko1", "Pseudo1", 2 },
	{ "imie2","nazwisko2","pseudo2",3 },
	{ "imie3","nazwisko3","pseudo3",1 },
	{ "imie4","nazwisko4","pseudo4",1 }
	};
	cout << "a. lista wg imion\tb. lista wg nazwisk\nc. lista wg pseudo\td. lista wg preferencji\nx. koniec\n";
	char menu;
	while (cin.get(menu) && menu != 'x')
	{
		if (menu == '\n')
			continue;
		switch (menu)
		{
		case 'a':
			for (int i = 0; i < wielkoscTablicy; i++)
			{
				cout << tablica[i].imie << endl;
			}
			break;
		case 'b':
			for (int i = 0; i < wielkoscTablicy; i++)
			{
				cout << tablica[i].nazwisko << endl;
			}
			break;
		case 'c':
			for (int i = 0; i < wielkoscTablicy; i++)
			{
				cout << tablica[i].pseudo << endl;
			}
			break;
		case 'd':
			for (int i = 0; i < wielkoscTablicy; i++)
			{
				if (tablica[i].prefer == 1) cout << tablica[i].imie << endl;
				if (tablica[i].prefer == 2) cout << tablica[i].nazwisko << endl;
				if (tablica[i].prefer == 3) cout << tablica[i].pseudo << endl;
			}
			break;
		default:
			cout << "prosze wybrac poprawna litere z menu.";
			break;
		}
		cout << "a. lista wg imion\tb. lista wg nazwisk\nc. lista wg pseudo\td. lista wg preferencji\nx. koniec\n";
	}
}
void Rozdzial6::Cwiczenie_05()
{
	int kwota = 0;
	double suma = 0;
	cin >> kwota;
	while (kwota >= 0)
	{
		if (!isdigit(kwota))
			break;
		if (kwota <= 5000)
		{
			suma = 0;
		}
		else if (kwota > 5000 && kwota <= 19999)
		{
			suma = (kwota - 5000) * 0.1;
		}
		else if (kwota >= 20000 && kwota <= 35000)
		{
			suma = 10000 * 0.1 + (kwota - 15000) * 0.15;
		}
		else if (kwota > 35000)
		{
			suma = 10000 * 0.1 + 20000 * 0.15 + (kwota - 35000)*0.2;
		}
		cout << "Suma podatku wynosi: " << suma << endl;
		cin >> kwota;

	}
}
void Rozdzial6::Cwiczenie_06()
{
	int iloscWplat;

	struct dane
	{
		char nazwisko[10];
		double wplata;
	};

	cout << "ile wpisow dodac: ";
	cin >> iloscWplat;
	dane *wplaty = new dane[iloscWplat];
	for (int i = 0; i < iloscWplat; i++)
	{
		cout << "Nazwisko: ";
		cin >> wplaty[i].nazwisko;
		cout << "Wysokosc wplaty: ";
		cin >> wplaty[i].wplata;
	}
	cout << "najwyzsze wplaty" << endl;
	bool flaga1 = false;
	for (int i = 0; i < iloscWplat; i++)
	{
		if (wplaty[i].wplata >= 100)
		{
			cout << wplaty[i].nazwisko << endl;
			flaga1 = true;
		}
	}
	if (!flaga1) cout << "brak" << endl;
	cout << "wplaty" << endl;
	bool flaga2 = false;
	for (int i = 0; i < iloscWplat; i++)
	{
		if (wplaty[i].wplata < 100)
		{
			cout << wplaty[i].nazwisko << endl;
			flaga2 = true;
		}

	}
	if (!flaga2) cout << "brak" << endl;
	delete[]wplaty;
}
void Rozdzial6::Cwiczenie_07()
{
	string ch;
	int samogloska = 0, spolgloska = 0, inne = 0;
	cout << "Podaj zdanie do analizy, q konczy program." << endl;
	cin >> ch;
	while (cin.good() && ch[0] != 'q' && ch[0] != 'Q')
	{
		if (isalpha(ch[0]))
		{
			if (ch[0] == 'a' ||
				ch[0] == 'e' ||
				ch[0] == 'i' ||
				ch[0] == 'o' ||
				ch[0] == 'u')
				samogloska++;
			else
				spolgloska++;
		}
		else
		{
			inne++;
		}

		cin >> ch;
	}
	cout << samogloska << " slow zaczynajacych sie od samoglosek" << endl;
	cout << spolgloska << " slow zaczynajacych sie spolglosek" << endl;
	cout << inne << " slow ktore nie zaliczaja sie do tych kategorii" << endl;
}

void Rozdzial6::Cwiczenie_08()
{

}