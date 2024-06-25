#include <bits/stdc++.h>
using namespace std;
void swapAlternet(int a[], int n)
{
    
    for (int i = 0; i < n; i += 2)
    {
        
        if (i+1 < n)
        {
            int temp;
            temp= a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}
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
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    Input_Array(arr1, n);
    swapAlternet(arr1,n);
    Printarray(arr1,n);
    
}