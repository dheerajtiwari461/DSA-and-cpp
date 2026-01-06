// 90 degree https://leetcode.com/problems/rotate-image/description/
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

// https://www.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1?utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        
        int n = mat.size();
        // col reverse
        for(int col = 0; col<n; col++){
            int start = 0, end = n-1;
            while(start<end){
                swap(mat[start][col], mat[end][col]);
                start++,end--;
            }
        }
        
        //row wise reverse
        
        for(int row = 0; row<n; row++){
             int start = 0, end = n-1;
            while(start<end){
                swap(mat[row][start], mat[row][end]);
                start++,end--;
        }
        }
        
    }
};

// anti 90 degree https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1?utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        for(int row =0; row<n-1; row++){
            for(int col = row+1; col < n; col++ ){
                swap(mat[row][col], mat[col][row]);
            }
        }
        
        for(int col = 0; col<n; col++){
            int start = 0, end = n-1;
            while(start<end){
                swap(mat[start][col], mat[end][col]);
                start++,end--;
            }
        }
        
    }
};



