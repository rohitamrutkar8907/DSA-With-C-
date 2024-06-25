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
        cout << a[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
   //Input_Array(arr1, n);
    //Printarray(arr1, n);

    //sizeof operator
    int size=sizeof(arr1);
    cout<<"size of array int(4 bit) * n = "<<size<<endl;
     cout<<"size of array size/int(4 bit) = "<<size/sizeof(int);
}
