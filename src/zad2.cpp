#include <iostream>

using namespace std;

int main() {

int miesiac;
int rok;

cout << "Podaj miesiac = ";
cin >> miesiac;

cout << endl;

cout << "Podaj rok = ";
cin >> rok;

cout << endl;

if (miesiac == 1 || miesiac == 3 || miesiac == 5 || miesiac == 7 || miesiac == 8 || miesiac == 10 || miesiac == 12)
cout << "Miesiac ten ma 31 dni";

if (miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11)
cout << "Miesiac ten ma 30 dni";

else if ( miesiac == 2)
{
bool przestepny = (rok % 4 == 0 && rok % 100 !=0) || (rok % 400 == 0);

if (przestepny == 0)
cout << " Miesiac ten ma 28 dni";
else
cout <<" Miesiac ten ma 29 dni";
}
return 0;
}
