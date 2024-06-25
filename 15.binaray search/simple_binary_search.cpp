#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int s=0;
    int e =n-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if (arr[mid]==key)
        {
            cout<<mid; 
        }

        else if(arr[mid]>key)
        {
            e=mid-1; 
        }
        else if (arr[mid]<key)
        {
            s=mid+1; 
        }
        
        
    }
}