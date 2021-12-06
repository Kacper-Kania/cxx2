#include <iostream>

auto amin(int a[], int n) -> int
{
	int min = 9999;
	for (int i = 0; i<n; i++)
{
	if(min>a[i])
	{
	min = a[i];
	}
}

return min;
}


auto main() -> int
{
	int a[] = {15,12,24,13};
	int n = sizeof(a) / sizeof(a[1]);
	std::cout<<"Najmniejsza: " <<amin(a,n);
return 0;
}
