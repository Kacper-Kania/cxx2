#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b, c, d;
    cout<<"podaj a: ";
    cin>>a;
    cout<<endl;
    cout<<"podaj b: ";
    cin>>b;
    cout<<endl;
    cout<<"podaj c: ";
    cin>>c;
    cout<<endl;
    cout<<"podaj d: ";
    cin>>d;
    cout<<endl;
 
    if(a > b && a > c && a > d) cout<<"Liczba a jest najwieksza"<<endl;
    if(a == b) cout<<"Liczba a jest rowna b"<<endl;
    if(a == c) cout<<"Liczba a jest rowna c"<<endl;
    if(a == d) cout<<"Liczba a jest rowna d"<<endl;
    if(b > a && b > c && b > d) cout<<"Liczba b jest najwieksza"<<endl;
    if(b == a) cout<<"Liczba b jest rowna a"<<endl;
    if(b == c) cout<<"Liczba b jest rowna c"<<endl;
    if(b == d) cout<<"Liczba b jest rowna d"<<endl;
    if(c > a && c > b && c > d) cout<<"Liczba b jest najwieksza"<<endl;
    if(c == a) cout<<"Liczba c jest rowna a"<<endl;
    if(c == b) cout<<"Liczba c jest rowna b"<<endl;
    if(c == d) cout<<"Liczba c jest rowna d"<<endl;
    if(d > a && d > b && d > c) cout<<"Liczba d jest najwieksza"<<endl;
    if(d == a) cout<<"Liczba d jest rowna a"<<endl;
    if(d == b) cout<<"Liczba d jest rowna b"<<endl;
    if(d == c) cout<<"Liczba d jest rowna c"<<endl;
    return 0;
}


