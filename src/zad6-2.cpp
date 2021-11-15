#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	static int const rozmiar = 12;
	int const szerokosc = 6;
	int tablica[rozmiar][rozmiar+1];

	for ( int i = 0; i < rozmiar; ++i)
	{
		tablica[i][0] =  1;
		tablica[i][i+1] = 0;

		cout << string((rozmiar - i) * szerokosc / 2, 0x20) << tablica[i][0];

		for (int k = 1; k <= i; ++k)
		{
			tablica[i][k] = tablica[i-1][k-1] + tablica[i-1][k];
			cout << setw(szerokosc) << tablica[i][k];
		}
	cout << endl;
}
return 0;
}
