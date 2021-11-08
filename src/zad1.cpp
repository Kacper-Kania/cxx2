#include <iostream>

using namespace std;

int main() {
int dzien = 0;

cout << "Jaki dzien? - ";
cin >> dzien;


switch (dzien) {

case 1:
	cout << "Poniedzialek";
break;

case 2:
	cout << "Wtorek";
break;

case 3:
	cout << "Sroda";
break;

case 4:
	cout << "Czwartek";
break;

case 5:
	cout << "Piatek";
break;

case 6:
	cout << "Sobota";
break;

case 7:
	cout << "Niedziela";
break;

default:
	cout << "Nie ma takiego dnia";
break;
}

cout << endl;
return 0;
}
