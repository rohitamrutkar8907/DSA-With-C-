#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {

        fact=fact*i;
        cout<<fact<<endl;
    }
}

int nCr(int n,int  r)
{
    int up=factorial(n);
    int down=factorial(r)*factorial(n-r);
    int ans=up/down;
    return ans;
}
int main()
{
    int n,r;
    cin >> n>>r;
    int ans = factorial(n);
    cout << ans;
}