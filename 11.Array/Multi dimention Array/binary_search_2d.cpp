#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix{{6, 2, 8}, {1, 3, 7}, {4, 5, 9}};
    int target=8;
    int row=matrix.size();
    int col=matrix[0].size();
    int s=0;
    int e=row*col-1;

    int mid=s+(e-s)/2;
    while (s<=e)
    {
        int element=matrix[mid/col][mid%col];
        if (element==target)
        {
            cout<<"1";
        }
        else if (element<target)
        {
            s=mid+1;
        }
       else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    
    cout<<"0";
}