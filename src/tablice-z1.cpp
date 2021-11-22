#include <iostream>

using namespace std;

auto wypisz_tablice(int a[], int n) -> void 
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] <<" ";
	}
}

auto init(int a[], int n) -> void
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
	cout << "Podaj wielkosc ";
	cin >> n;

	init(a,n);
	wypisz_tablice(a,n);

return 0;
}
