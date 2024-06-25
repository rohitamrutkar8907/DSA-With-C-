#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int key=5;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cur=0;
    for (int  i = 0; i < n; i++)
    {
        int cur=0;
       for (int j = i; j < n; j++)
       {
            cur =cur+a[j];
            
       }
       
    }
      
}