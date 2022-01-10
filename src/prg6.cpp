#include <iostream>

auto is_divisible(int x, int y) -> bool
{
	if (x % y == 0){
	return true;
}
	else{
	return false;
}
}

auto is_even(int a) -> bool
{
        if(is_divisible(a,2) == 1 ){
        return true;
}
else {
        return false;
}
}

auto main() -> int {
int a;

std::cout<<"Podaj liczbe: ";
std::cin>>a;

std::cout<< is_even(a);

return 0;
}

