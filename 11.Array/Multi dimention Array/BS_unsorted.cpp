https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/912539535/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size();
    int col=matrix[0].size();
    int row_index=0;
    int col_index=col-1;
    while(row_index<row && col_index>=0)
    {
        int element=matrix[row_index][col_index];
        if(element==target)
        {
            return 1;
        }
        if(element<target)
        {
            row_index++;
        }
        else
        {
            col_index--;
        }
    }
        return 0;
    }
};