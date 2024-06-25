#include <bits/stdc++.h>
using namespace std;

void Input_Array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}

void countof(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        cout<<"The number "<<a[i]<<" is repeated "<<count<<" times"<<"\n";
    }
}

    int main()
    {
        int n;
        cin >> n;
        int arr1[n];
        Input_Array(arr1, n);
        countof(arr1,n);
    }