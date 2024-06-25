#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3]={{6, 2, 8}, {1, 3, 7}, {4, 5, 9}};
    for(int i=0;i<3;i++)
    {
        for (int j = 0, k=i;k<3;j++,k++)
        {
           cout<<a[j][k]<<" ";
        }
        cout<<endl;
    }

}