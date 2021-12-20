#include <iostream>
#include <vector>

using namespace std;

auto average_of(vector<float> oceny) -> float {
    float suma=0;
    
    for(int x=0; oceny.size()>x; x++) {
        suma+=oceny[x];
    }
        float average=suma/oceny.size();
        return average;
    }

int main()
{
    vector<float> oceny{5,2,5,6,6};
    
    cout << average_of(oceny);
    return 0;
}
