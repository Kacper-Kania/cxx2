#include <iostream>
#include <string>
auto ask_user_for_integer ( std::string const prompt ) -> int
{
if ( not prompt.empty ()) {
std::cout << prompt ;
}
auto value = std::string {};
std::getline ( std::cin , value );
return std::stoi ( value );
}

auto main() -> int
{
auto const a = ask_user_for_integer ("a=");

if(a>0){
std::cout<<"1";
}
if(a==0){
std::cout<<"0";
}
if(a<0){
std::cout<<"-1";
}

return 0;
}


