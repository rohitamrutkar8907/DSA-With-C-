#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix{{6, 2, 8}, {1, 3, 7}, {4, 5, 9}};
    vector<int> ans;
    int n = matrix.size();
    int m = matrix[0].size();

    int s_row = 0;
    int e_row = n - 1;
    int s_col = 0;
    int e_col = m - 1;

    int total=n*m;
    int count=0;
    while (count<total)
    {
        for (int i = s_col; count < total && i <= e_col; i++)
        {
            ans.push_back(matrix[s_row][i]);
            count++;
        }
        s_row++;
        for (int i = s_row; count < total && i <= e_row; i++)
        {
            ans.push_back(matrix[i][e_col]);
            count++;
        }
        e_col--;
        for (int i = e_col; count < total && i >= s_col; i--)
        {
            ans.push_back(matrix[e_row][i]);
            count++;
        }
        e_row--;
        for (int i = e_row; count < total && i >= s_row; i--)
        {
            ans.push_back(matrix[i][s_col]);
            count++;
        }
        s_col++;
    }

    for (auto i:ans)
    {
        cout<<i<<" ";
    }

}

// s_col -----> e_col
// s_row -----> e_row
// e_col -----> s_row
// e_row -----> s_row
