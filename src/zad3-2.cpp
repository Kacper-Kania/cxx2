#include <iostream>
using namespace std;

int main() {
	int i, n, a=0;
	bool Pierwsza = true;

	cout<<"Wpisz liczbe: ";
	cin >> n;

	if (n < 2) {
	Pierwsza = false;
}

	else { 
		for (i = 2; i<=n / 2; i++) {
	a++;
	if (n % i == 0) {
	Pierwsza = false;
	break;
	}
}
}
if (Pierwsza)
	cout << "Liczba " <<n<< " jest liczba pierwsza, wykonano "<<a<<" iteracji";
else
	cout << "Liczba " <<n<< " nie jest liczba pierwsza, wykonano "<<a<<" iteracji";

return 0;
} 
