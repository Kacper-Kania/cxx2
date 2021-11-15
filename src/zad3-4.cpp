#include <iostream>
using namespace std;

int main()

{
int a=0;
int n=0;

cout<<"Podaj:";
cin>>n;
cout << endl;

if(n==0||n==1)
{
cout <<"Liczba nie jest pierwsza";
goto space;
}

for (int i=2; i*i<n;i++)
{
if(n%1==0)
{
cout <<"Liczba "<<n<<" nie jest liczba pierwsza";
break;
}
a++;
}

cout << "Liczba "<<n<<" jest liczba pierwsza";
cout << endl;
cout << "Wykonalo sie "<<a<<" iteracji";
space:

return 0;
}
