#include<iostream>
#include <stdlib.h>
using namespace std;
 
void Sortowanie(int *tab, int lewy, int prawy)
{
	if(prawy <= lewy){
	return;
	}
 
	int i = lewy - 1, j = prawy + 1, 
	meh = tab[(lewy+prawy)/2];
 
	while(1)
	{
		while(meh>tab[++i]);
 
		while(meh<tab[--j]);
 
		if( i <= j)
			swap(tab[i],tab[j]);
		else
			break;
	}
 
	if(j > lewy){
	Sortowanie(tab, lewy, j);
}
	if(i < prawy){
	Sortowanie(tab, i, prawy);
}
}
 
int main(){
    int n=0;
    cout<<"Podaj rozmiar tablicy = ";
    cin>>n;
    int tab[n];
    cout<<"Podaj wartosci ";
    cout<<endl;
    for(int x=0;x<n;x++){
        cin>> tab[x];
    }
 
    cout<<"Przed sortowaniem: ";
 
    for(int x=0;x<n;x++)
          cout<<tab[x]<<" ";
    cout<<endl;
    Sortowanie(tab, 0, n-1);
    cout<<"Po sortowaniu: ";
    for(int x=0;x<n;x++)
          cout<<tab[x]<<" ";
    return 0;
}
