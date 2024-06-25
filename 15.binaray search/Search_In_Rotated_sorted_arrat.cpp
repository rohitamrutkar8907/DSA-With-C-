#include <bits/stdc++.h>
using namespace std;
 int Pivot(vector<int>& arr,int n) {
        
    int s = 0;
    int e = arr.size()-1;
    while (s<e)
    {
        int mid=s+(e-s)/2;
        if (arr[mid]>arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid ;
        }

    }
    
    return s;  
    }

int Binarysearch(vector<int> &arr, int start, int end, int key)
{
    int s = start;
    int e = end;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
    }
    return -1;
}

int FindNO(vector<int> &arr, int n, int k)
{
    int pivot = Pivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return Binarysearch(arr, pivot, n - 1, k);
    }
    else
    {
        return Binarysearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    vector<int> arr{4,5,6,7,0,1,2};
    int n = 7;
    int k = 6;
    cout<<FindNO(arr, n, k);
}