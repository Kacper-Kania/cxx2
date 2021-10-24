#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Podaj dlugosc trojkata"<<endl;
    cin>>a;
    for(int x = a; x > 0 ; x--){
        for(int y = 0; x > y; y++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
