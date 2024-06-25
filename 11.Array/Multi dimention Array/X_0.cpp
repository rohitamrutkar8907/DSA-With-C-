#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[3][3];
    int n=3,m=3;
    char x = 'X';
    int s_row = 0;
    int e_row = n-1 ;
    int s_col = 0;
    int e_col = m-1 ;

    int total=n*m;
    int count=0;
    while (count<total)
    {
        for (int i = s_col; count < total && i <= e_col; i++)
        {
            a[s_row][i]=x;
            count++;
        }
        s_row++;
        for (int i = s_row; count < total && i <= e_row; i++)
        {
           a[i][e_col]=x;
            count++;
        }
        e_col--;
        for (int i = e_col; count < total && i >= s_col; i--)
        {
            a[e_row][i]=x;
            count++;
        }
        e_row--;
        for (int i = e_row; count < total && i >= s_row; i--)
        {
            a[i][s_col]=x;
            count++;
        }
        s_col++;
        x = (x == '0')? 'X': '0';
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout <<" "<< a[i][j];
        cout <<"\n";
    }

}

// s_col -----> e_col
// s_row -----> e_row
// e_col -----> s_row
// e_row -----> s_row
