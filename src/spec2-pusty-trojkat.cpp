#include <iostream>
using namespace std;

int main()
{
    int height;

    //1
    cout << "Wysokosc trojkata : "; 
	cin >> height;

    //2
    for (int i = 1; i <= height; i++)
    {
        //3
        for (int j = 1; j <= (height - i); j++)
        {
            cout << " ";
        }

        //4
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            //5
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else if (i == height)
            {
                //6
                cout << "*";
            }
            else
            {
                //7
                cout << " ";
            }

        }
        //8
        cout << endl;
    }
    return 0;
}
