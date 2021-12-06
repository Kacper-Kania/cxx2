#include <iostream>
#include <string>
#include <array>

auto ask(std::string const prompt) -> int
{
if ( not prompt . empty ()) {
std::cout << prompt;
}
auto value = std :: string ();
std :: getline ( std::cin, value);
return std::stoi (value);
}


auto asum(std::array<int,10>a, int n) -> int
{

	int t=0;
	for (int i=0; i<n; i++){
	t = t+a[i];
}

return t;
}


auto main() -> int
{
auto const n = ask("Ile liczb ma byc =");
std::array <int , 10> a = {42, 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12};
std::cout << "Suma liczb: " <<asum(a,n)<< "\n";
return 0;
}
