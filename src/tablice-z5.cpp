#include <iostream>

auto amax(int a[], int n) -> int
{
        int max = -9999;
        for (int i = 0; i<n; i++)
{
        if(max<a[i])
        {
        max = a[i];
        }
}

return max;
}


auto main() -> int
{
        int a[] = {-12,12,24,13};
        int n = sizeof(a) / sizeof(a[1]);
        std::cout<<"Najwieksza: " <<amax(a,n);
return 0;
}


