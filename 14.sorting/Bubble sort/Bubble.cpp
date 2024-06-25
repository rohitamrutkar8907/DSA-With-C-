#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {10, 5, 3, 7, 9};
    int n = 5;

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (a[i] > a[i + 1])
            {
                a[i + 1] = a[i + 1]+a[i];
                a[i] =a[i + 1]-a[i];
                a[i + 1] = a[i + 1]-a[i];
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
