// https://leetcode.com/problems/search-a-2d-matrix/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int n = matrix.size(), m=matrix[0].size();
        int row_index, col_index, start=0, end=n*m-1, mid;

        while(start<= end){
            mid = start+(end-start)/2;
            row_index = mid/m;
            col_index = mid%m;
            if(matrix[row_index][col_index] == target)
            return 1;
            else if(matrix[row_index][col_index] < target)
            start = m+1;
            else end = m-1;
        }
        return 0;

    }
};