#include <bits/stdc++.h>
using namespace std;
long long findMinDiff(vector<int> a, int n, int m)
{

    sort(a.begin(), a.end());
    if (n < m)
        return -1;
    int mini = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++)
    {
        int diff = a[i + m - 1] - a[i];
        if (diff < mini)
            mini = diff;
    }

    return mini;
}
int main()
{
    vector<int> a={3,4,1,9,56,7,9,12};
    int n=8;
    int m=5;
    cout<<findMinDiff(a, n, m);
    return 0;
}
