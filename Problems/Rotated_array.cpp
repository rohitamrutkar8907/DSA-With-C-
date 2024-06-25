#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,2,3,8,5,6};
    int m=3;
     vector<int> temp(a.size());
    for(int i=0;i<a.size();i++)
    {
        temp[(i+m)%a.size()]=a[i];
    }
    a=temp;
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    
}