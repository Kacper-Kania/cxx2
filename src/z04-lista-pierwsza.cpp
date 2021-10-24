#include<iostream>
#include<cstdlib>


bool pierwsza(int n)
{
	if(n < 2)
		return false;
		
	for(int i=2; i*i<=n; i++)
		if(n%i==0)
			return false;
	return true;
}

auto main() -> int
{
	int n;
	
	std::cout<<"Podaj liczbę: ";
	std::cin>>n;
	
	if(pierwsza(n))
		std::cout<<"Liczba "<<n<<" jest pierwsza";
	else
		std::cout<<"Liczba "<<n<<" nie jest pierwsza";
	
	return 0;
}

