#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        // Solution 1
        /*
         int n = grid.size();
        int count = 0;

        // Iterate over each row
        for (int row = 0; row < n; ++row) {
            // Iterate over each column
            for (int col = 0; col < n; ++col) {
                bool isEqual = true;
                // Compare the current row with the current column
                for (int k = 0; k < n; ++k) {
                    if (grid[row][k] != grid[k][col]) {
                        isEqual = false;
                        break;
                    }
                }
                // If they are equal, increment the count
                if (isEqual) {
                    count++;
                }
            }
        }

        return count;*/
        // Solution 2
        int n = grid.size();
        vector<vector<int>> g(n, vector<int>(n));
        for(int j = 0; j < n; ++j) {
            for(int i = 0; i < n; ++i) {
                g[i][j] = grid[j][i];
            }
        }

        int ans = 0;
        for(auto& row: grid) {
            for(auto& col: g) {
                ans += row == col;
            }
        }

        return ans;
    }
};

int main() {
    vector<vector<int>> grid = {
        {3,2,1},
        {1,7,6},
        {2,7,7}
    };
    cout<<grid.size() << endl;
    Solution ob;
    cout<<ob.equalPairs(grid);
    return 0;
}