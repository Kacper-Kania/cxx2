#include <iostream>

auto is_even(int a) -> bool
{
	if(a%2==0) {
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
std::cout<< is_even(a) << "\n";

return 0;
}
