#include <iostream>
#include <cstdlib>

auto main()-> int 
{

int a = 0;
int b = 0;
int zmienna = 0;
int zmienna2 = 0;

std::cout<<"Podaj liczbe a = ";
std::cin>>a;
std::cout<<"Podaj liczbe b = ";
std::cin>>b;

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

return 0;
}
