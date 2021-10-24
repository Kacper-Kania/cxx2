#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Podaj dlugosc prostokata"<<endl;
    cin>>a;
    cout<<"Podaj szerokosc prostokata"<<endl;
    cin>>b;
    for(int x = a; x > 0 ; x--){
        for(int y = b; y > 0; y--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
