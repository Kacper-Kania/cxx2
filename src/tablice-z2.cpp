#include <iostream>

using namespace std;

auto wypisz_tablice(int a[], int n) -> void 
{
        for(int i = 0; i < n; i++)
        {
                cout << a[i] <<" ";
        }
}


auto iota(int a[], int n, int start) -> void
{
        for(int i = 0; i < n; i++)
        {
                 a[i] = 0;
        }
}


int main() 
{
        int n=0;
        int a[100];
	int start=0;


	cout << "Od ktorej liczby zaczac ";
	cin >> start;

        cout << "Ile liczb ma zostac wyswietlonych ";
        cin >> n;

        iota(a,n,start);

        wypisz_tablice(a,n);

return 0;
}


