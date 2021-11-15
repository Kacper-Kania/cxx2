#include <iostream>
using namespace std;

int main()
{
    int wys;

    cout << "Wysokosc trojkata : "; 
	cin >> wys;

  
    for (int i = 1; i <= wys; i++)
    {
     
        for (int j = 1; j <= (wys - i); j++)
        {
            cout << "*";
        }

 
        for (int k = 1; k <= i * 2 - 1; k++)
        {
        
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == wys)
            {
           
                cout << "*";
            }
            else
            {
            
                cout << " ";
            }

        }

	 for (int j = 1; j <= (wys - i); j++)
        {
            cout << "*";
        }

      
        cout << endl;
    }
    return 0;
}
