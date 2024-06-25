#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {0, 2, 0, 1, 3, 0};
   
    int i=0;
    for (int j = 0; j < a.size(); j++)
    {
        if(a[j]!=0)
        {
            swap(a[j],a[i]);
            i++;

        }
    }
    

    for (auto i : a)
    {
        cout << i << " ";
    }
}
