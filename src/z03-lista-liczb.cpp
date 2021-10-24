#include <iostream>
#include <cstdlib>

auto main()-> int 
{

int a = 0;
int b = 0;
int s = 0;
int zmienna = 0;
int zmienna2 = 0;

std::cout<<"Podaj liczbe a = ";
std::cin>>a;
std::cout<<"Podaj liczbe b = ";
std::cin>>b;
std::cout<<"Podaj ile razy ma sie pokazac cyfr (S) = ";
std::cin>>s;

if(s == 0){
goto blad;
}

s=abs(s);

while(zmienna < s) {

std::cout<<a;
a++;
zmienna++;
}

while(zmienna2 < s) {
b--;
std::cout<<b;
zmienna2++;
}
blad:
return 0;
}



