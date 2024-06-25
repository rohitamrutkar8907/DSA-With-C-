#include <bits/stdc++.h>
using namespace std;
int BinarysR(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (a[mid] == key)
        {
            e = mid - 1;
            ans = mid;
        }

        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else if (a[mid] < key)
        {
            s = mid + 1;
        }
    }
    return ans;
}

int BinarysL(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (a[mid] == key)
        {
            s = mid + 1;
            ans = mid;
        }

        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else if (a[mid] < key)
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n = 5;
    int a[n] = {1, 4, 4, 4, 5};
    int key;
    cin >> key;
    int f = BinarysR(a, n, key);
    int l = BinarysL(a, n, key);
    cout<<BinarysR(a, n, key)<<endl;
    cout<<BinarysL(a, n, key)<<endl;
    int Total_Occurance = (l - f) + 1;
    cout << Total_Occurance;
}