#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a { 4, 5, 6, 9, 7};
    int n = a.size();
    int j=0;
    int maxx = INT_MIN;
    int k = 3;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        while (j<n)
        {
            /* code */
             sum+=a[j];
            if (j - i + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {
                maxx=max(maxx,sum);
                sum-=a[i];
                i++;
                j++;
            }
        }   
    }
    cout<<maxx;
    return 0;
}