﻿// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Zajecia nr 2\n";


	int a = 2; int b = -8; int c = 4;

	cout << "a = " << a << "b=" << b << "c" << c << endl;
	int delta = b * b - 4 * a * c;

	if (delta < 0)
	{
		cout << "Delta =" << delta << endl;
		cout << "Gdy delta jest ujemna to trujmian kwadratowy nie posiada  pierwiastków rzeczyswistych";

		return 1;
	}
	double pierwastekZDelty = sqrt(delta);

	double x1 = (-b - pierwastekZDelty) / (2 * a);
	double x2 = (-b + pierwastekZDelty) / (2 * a);

	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
