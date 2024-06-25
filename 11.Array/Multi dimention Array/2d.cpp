#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 3;
    int col = 4;
    int a[row][col];
    cout << "<=== take input==> " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cin >> a[i][j];
        }
    }
    cout << "<===  Outout is ==> " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "<===  row side sum ==> " << endl;
    int maxi = 0;
    for (int i = 0; i < row; i++)
    {

        int sum = 0;
        for (int j = 0; j < col; j++)
        {

            sum += a[i][j];
        }
        cout << sum << endl;
        maxi = max(maxi, sum);
    }
    cout << "Maxi sum in Row==>" << maxi << endl;

    cout << "<===  wave traversal Outout is ==> " << endl;
    for (int i = 0; i <=col; i++)
    {
        //for odd
        if (i&1)
        {
            for (int j = row-1; j >= 0; j--)
            {

                cout << a[j][i] << " ";
            }
           
        }    
            else
            {

                for (int j = 0; j < row; j++)
                {

                    cout << a[j][i] << " ";
                }
               
            }
        }

        cout << endl;
    }
