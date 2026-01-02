// https://leetcode.com/problems/rotate-image/description/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // transpose
        for(int i = 0; i< n-1; i++)
        for(int j= i+1; j<n; j++)
        swap(matrix[i][j], matrix[j][i]);

        // reverse each row

        for(int i=0; i<n; i++){
            int start =0,  end = n-1;
            while(start <end){
                swap(matrix[i][start], matrix[i][end]);
                start++, end--;
            }
        }
        

    }
};

// https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1?utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks
class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        for(int i = 0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
        swap(mat[i][j], mat[j][i]);
        }
        }
        return mat;
    }
};

