#include <bits/stdc++.h>
using namespace std;
// Lecture 32

void twoDVector(){
    int n,m;
    cout<<"Enter the row and col: ";
    cin>>n>>m;
    // create 2d vector
    vector<vector<int>> matrix(n, vector<int>(m, 1));
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    cin>>matrix[i][j];

    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    cout<<matrix[i][j];
}

void wave(int arr[][4], int row, int col){
     // wave print
    for(int j=0; j<col; j++){
        if(j%2 == 0){
            for(int i=0; i<row; i++)
            cout<< arr[i][j]<<" ";
        }else{
            for(int i=row-1; i>=0; i--)
            cout<< arr[i][j]<<" ";
        }
    }

}

void spiralMatrix(){
//    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
   vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
//    [1,2,3,6,9,8,7,4,5]
   vector<int>ans;
        int rows = matrix.size(), col=matrix[0].size();
        int top = 0, bottom = rows-1, left =0, right = col-1;

        while(left<=right && top<= bottom){
            // print top
            for(int i =left; i<= right; i++)
            ans.push_back(matrix[top][i]);
            top++;

            // print right
            for(int i = top; i<=bottom; i++)
            ans.push_back(matrix[i][right]);
            right--;
            // print bottom
            if(top<=bottom){
            for(int i=right; i>=left; i--)
            ans.push_back(matrix[bottom][i]);
            bottom--;}
            // print left
            if(left<=right){
                for(int i= bottom; i>=top; i--)
                ans.push_back(matrix[i][left]);
                left++;
            }
        }
       for (size_t i = 0; i < ans.size(); ++i) {
       cout << ans[i] << (i + 1 == ans.size() ? '\n' : ' ');
   }
}


int main()
{

    int arr1[3][4] = {1,2,3,4,
                      5,6,7,8,
                      9,10,11,12};
    int arr2[3][4] = {0,1,2,3,
                      4,5,6,7,
                      8,9,10,11};
    int ans[3][4];

    // twoDVector();
    spiralMatrix();

}