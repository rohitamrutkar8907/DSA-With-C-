#include <bits/stdc++.h>
using namespace std;
bool ispossible(int arr[], int n, int m, int mid)
{
    int student_count = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>mid)
        {
            return false;
        }
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            student_count++;
            if (student_count > m || arr[i] > mid)
            {
                return false;
            }
            pagesum=0;
            pagesum += arr[i];
        }
        
    }
    return true;
}

int allocatebook(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
         mid = s + (e - s) / 2;
    }
     return ans;
}
int main()
{
    int n = 4;
    int m = 2;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<allocatebook(a,n,m);
}