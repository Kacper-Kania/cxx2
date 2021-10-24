#include <iostream>

using namespace std;

int main()
{
    int a;
    string tab[20][20];
       cout << "Podaj dlugosc boku kwadratu" <<endl;
       cin >> a;
       for(int i = 0; i < a; i++)
       {
          for(int j = 0; j < a; j++)
             if(j>0&&j<a-1&&i>0&&i<a-1)
          tab [i][j]=" ";
      else
          tab [i][j]="*";
       }

    for(int i = 0; i < a; i++)
    {
        cout << endl;
        for(int j = 0; j < a; j++)
              cout << tab[i][j];
    }
return 0;

}
