#include <iostream>

using namespace std;

int main()
{
    int limit = 0, dzielnik = 0, suma = 0;
    cout<<"podaj dzielnik: ";
    cin>>dzielnik;
    cout<<endl;
    cout<<"podaj limit: ";
    cin>>limit;
    cout<<endl;
    for(int x = limit; x > 0; x--){
        if(x % dzielnik == 0){
            cout<<" "<<x;
            suma = suma + x;
        }
    }
    cout<<endl;
    cout<<"Suma: "<<suma;
    return 0;
}
