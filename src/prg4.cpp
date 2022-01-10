#include <iostream>
int main() {
int x;
std::cout<<"Podaj liczbe ";
std::cin>>x;

if(x%2 == 0)
std::cout<<"Liczba "<< x <<" jest parzysta";
else
std::cout<<"Liczba "<< x << " jest nieparzysta";

return 0;
}
