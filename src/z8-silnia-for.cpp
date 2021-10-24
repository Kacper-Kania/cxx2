#include <iostream>

	auto main() -> int 
{

	int silnia = 1;
	int i=0;

	std::cout<<"Podaj liczbe i (silnia): ";
	std::cin>>i;

	for (i=i;i>1;i--) {
	silnia = silnia*i;
	}

	std::cout <<"Silnia to: ";
	std::cout <<silnia;
	
	return 0;
}
