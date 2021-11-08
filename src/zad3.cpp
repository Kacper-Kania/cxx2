#include<iostream>
#include<cstdlib>

auto pierwsza(int a) -> int
{
bool pierwsza(int n)
{
	int a=0;
	if(n < 2)
                return false;

        for(int i=2; i*i<=n; i++){
	a++;
                if(n%i==0)
                        return false;
        return true;
}
}

auto main() -> int
{
        int n;
	int a;
        std::cout<<"Podaj liczbę: ";
        std::cin>>n;

        if(pierwsza(n))
                std::cout<<"Liczba "<<n<<" jest pierwsza wykonano "<<a<<" iteracji";
        else
                std::cout<<"Liczba "<<n<<" nie jest pierwsza wykonano "<<a<<" iteracji";
        std::cout<<"\n";
        return 0;
}


