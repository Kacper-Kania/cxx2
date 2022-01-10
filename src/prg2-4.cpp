#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
 
using namespace std;
 
struct student {
  string imie;
  string nazwisko;
  int indeks;
  float srednia;
};
 
 
int main()
{
    cout<<"Podaj dane studentow"<<endl<<endl;
    student osoby[5];
    for (int i=0; i<5; i++)
    {
        cout<<"Imie studenta nr "<<i+1<<": ";
        cin>>osoby[i].imie;
        cout<<"Nazwisko studenta nr "<<i+1<<": ";
        cin>>osoby[i].nazwisko;
        cout<<"Indeks studenta nr "<<i+1<<": ";
        cin>>osoby[i].indeks;
        cout<<"Srednia studenta nr "<<i+1<<": ";
        cin>>osoby[i].srednia;
        cout<<endl;
    }
    return 0;
}
