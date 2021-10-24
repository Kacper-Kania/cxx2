#include <iostream>
#include <cstdlib>

auto main()-> int 
{

int a = 0;
int b = 0;
int c = 0;
int stala = 0;
int zmienna = 0;
int zmienna2 = 0;
int zmienna3 = 0;

std::cout<<"Podaj liczbe a = ";
std::cin>>a;
std::cout<<"Podaj liczbe b = ";
std::cin>>b;
std::cout<<"Podaj liczbe c (cyfra nie moze byc rowna 0) = ";
std::cin>>c;

stala = c;

while(zmienna < 11) {

std::cout<<a;
a++;
zmienna++;
}

while(zmienna2 < 11) {
b--;
std::cout<<b;
zmienna2++;
}

if (c == 0) {
std::cout<<"Blad, liczba nie moze byc rowna 0";
goto space;
}

while(zmienna3 < 11) {

if (c%stala == 0){
std::cout<<c;
}
c++;
zmienna3++;
}

space:
return 0;
}



