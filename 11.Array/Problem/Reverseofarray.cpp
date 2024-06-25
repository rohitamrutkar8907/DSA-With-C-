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

void Reverseof(int a[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void swapAlternet(int a[], int n)
{
    for (int i = 0; i < n; i =+ 2)
    {
        if (i+1 < n)
        {
            swap(a[i], a[i + 1]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    Input_Array(arr1, n);
    Printarray(arr1, n);
    Reverseof(arr1, n);
    cout << endl;
    Printarray(arr1, n);
    swapAlternet(arr1,n);
    Printarray(arr1,n);
    
}