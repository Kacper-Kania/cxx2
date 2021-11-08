#include <iostream>

using namespace std;

int main (){
int n;
int a=0;
int i=2;

cout << "Podaj liczbe pierwsza ";
cin >> n;

if(n<2){
return false;
}

for(int i=2;i*i<=n;i++){
a++;
if(n%i==0)
 cout << "Liczba " <<n<< " nie jest pierwsza, wykonano "<<a<<" iteracji";
else
cout << "Liczba " <<n<<" jest pierwsza, wykonano "<<a<<" iteracji";
}

return 0;
}

