#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 3, 6, 8};
    vector<int> b = {2, 4, 5};
    int n=a.size()+b.size();
    int c[n];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < a.size())
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < b.size())
    {
        c[k] = b[j];
        k++;
        j++;
    }

    for(auto i:c)
    {
        cout<<i<<" ";
    }
    int l=sizeof(c)/sizeof(c[0]);
    cout<<endl<<l;
    
}
