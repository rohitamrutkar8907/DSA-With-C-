#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,2,3,4,5,6};
    int m;
    cin>>m;
    int s=m+1;
    int e=a.size()-1;
    while (s<=e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }
    for(auto i:a)
    {
        cout<<i<<" ";
    }
}