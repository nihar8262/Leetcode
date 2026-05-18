class Solution {

private:
    int countMaxPath(int row, int col, vector<vector<int>> &dp){
        if(row == 0 && col == 0) return 1;
        else if(row < 0 || col < 0) return 0;

        if(dp[row][col] != -1) return dp[row][col];

        int u = countMaxPath(row-1, col, dp);
        int l = countMaxPath(row, col-1, dp);

        return dp[row][col] = l + u;
    }

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n,-1)); 
        return countMaxPath(m-1,n-1, dp);
    }
};