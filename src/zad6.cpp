#include <iostream>

using namespace std;

int main()
{
cout <<"Podaj ilosc w trojkacie: ";

int szer, dl;
cin >> szer, dl;

int pascal[szer][dl];

cout << endl;

for(int i=0; i<wymiar; i++)
{
for(int b=1; b<=i; b++)
 {
	if (b==0){
pascal[i][b]=1;
}

else if(pascal[b]==pascal[i])
{
pascal[i][b]=1;
}
else if (b>0)
{
pascal[i][b] = pascal [i-1][b-1] + pascal[i-1][b];
}

cout << " " << pascal[i][b];
}
cout << endl;
}

return 0;
}
