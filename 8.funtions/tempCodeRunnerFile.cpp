#include <bits/stdc++.h>
using namespace std;
int bitscount(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int toalcount(int a, int b)
{
    int a_count = bitscount(a);
    int b_count = bitscount(b);
    int c = a_count + b_count;
    return c;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = toalcount(a, b);
    cout << ans;
}