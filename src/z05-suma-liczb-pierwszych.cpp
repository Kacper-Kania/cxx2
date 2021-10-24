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
        int n = 0;
	int stala = 0;

        std::cout<<"Podaj liczbę: ";
        std::cin>>n;
	
	while(n>0){
        if(pierwsza(n)){
	stala = stala + n;
	n--;
}
        else{
        n--;
}
}

	std::cout <<"Wynik dodawania liczb pierwszych to:"<< stala;
	

	
        return 0;
}





