#include <iostream>
#include <string>

auto main() -> int
{
	auto imie = std::string();
	auto drugieimie=std::string();
	std::cout<<"Podaj pierwsze imie"<<std::endl;
	std::cin>>imie;
	std::cout<<"Podaj drugie imie"<<std::endl;
	std::cin>>drugieimie;
	std::cout<<std::endl;
	
	if(imie.size()>drugieimie.size())
	{
	std::cout<<imie<<" jest dłuższe!";
	} else{

	if(imie.size()==drugieimie.size()){
	std::cout<<"Imiona są tej samej długości...";

	}
	else{
		std::cout<<drugieimie<<" jest dłuższe.";
		}
	}
return 0;
}
