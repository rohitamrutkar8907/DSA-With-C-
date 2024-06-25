#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {10, 5, 3, 7, 9};
    int n = 5;
   
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                a[j] = a[j]+a[i];
                a[i] =a[j]-a[i];
                a[j] = a[j]-a[i];

            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
}
