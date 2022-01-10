#include <iostream>
#include <string>
#include <vector>

auto is_palindrome(std::string palindrome) -> bool
{
int result = 1;
int a = palindrome.size();
for (int i=1; i<=a; i++){
	if(palindrome[i-1] != palindrome[ a - i]){
	result = 0;
	break;
	}
}
return result;
}
auto filtr(std::vector < std::string > vec) ->
auto main -> int
{
std::vector < std::string > vec = {"ala", "ucho","kanapa"};
return 0;
}
