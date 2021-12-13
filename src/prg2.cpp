#include <iostream>
#include <string>

auto main() -> int
{
	std::string Imie;
	double Waga;
	int Wzrost;
	std::cout<<"Imie|Waga|Wzrost" << std::endl;
	std::cin>>Imie>>Waga>>Wzrost;
	std::cout<<"Imie: "<<Imie<<std::endl;
	std::cout<<"Waga: "<<Waga<<"kg"<<std::endl;
	std::cout<<"Wzrost: "<<Wzrost<<"cm"<<std::endl;
return 0;
}
