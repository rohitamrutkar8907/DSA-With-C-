/*
a1[2][3]=00 01 02      a1[3][4]=00 01 02 03
        10 11 12                10 11 12 13
                                20 21 22 33 
ans[2][4]=00 01 02 03
          10 11 12 13


        ans[0][0]=a1[0][0] * a2[0][0]  + a1[0][1] * a2[1][0]  + a1[0][2] * a2[2][0] 

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1[2][3] = {{1, 2,7}, {3, 4,9}};
    int a2[3][4] = {{6, 2, 8}, {1, 3, 7}, {4, 5, 9}};
    int ans[2][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                /* code */
                ans[i][j]=a1[i][k] * a2[k][j];
            }
            
        }
    }
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ans[i][j]<<" ";
            
        }
        cout<<endl;
    }
    
}