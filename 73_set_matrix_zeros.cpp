#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void fillZeros(vector<vector<int>>& matrix, int m, int n, int row_, int col_) {
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                if(i == row_ || j == col_){
                    if( matrix[i][j] == 0) {    //already zero
                        fillZeros(matrix, m, n, i, j);
                    }
                    matrix[i][j] = 0;
                }
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int prev_row = 0;
        int prev_col = 0;
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                if(matrix[i][j] == 0 && (i!=prev_row || j!=prev_col)){
                    cout<<"zero found at "<< i<< " "<< j<< endl;
                    fillZeros(matrix, m, n, i, j);
                    prev_row = i;
                    prev_col = j;
                }
            }
        }
    }
};

int main() {
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int m = matrix.size();
    int n = matrix[0].size();
    Solution ob;
    ob.setZeroes(matrix);

    for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) 
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}