#include<iostream>
using namespace std;

auto sort_desc(int a[],int n) -> void
{
        for(int i=0;i<n;i++)
                for(int j=1;j<n-i;j++) 
                if(a[j-1]<a[j])
                        swap(a[j-1], a[j]);
}

int main()
{
        int *a, n;

        cout<<"Ile liczb będziesz chciał posortować? ";
        cin>>n;

        a = new int [n]; 
        for(int i=0;i<n;i++)
                cin>>a[i];

        sort_desc(a,n);

        for(int i=0;i<n;i++)
          cout<<a[i]<<" ";

  return 0;
}


