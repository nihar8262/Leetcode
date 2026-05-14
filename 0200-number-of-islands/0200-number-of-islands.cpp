class Solution {

private:
    void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& vis,
             int delrow[], int delcol[]) {
        vis[r][c] = 1;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < 4; i++) {
            int nrow = r + delrow[i];
            int ncol = c + delcol[i];

            if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                !vis[nrow][ncol] && grid[nrow][ncol] == '1') {
                dfs(nrow, ncol, grid, vis, delrow, delcol);
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;

        vector<vector<int>> vis(m, vector<int>(n, 0));
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    dfs(i, j, grid, vis, delrow, delcol);
                    ans++;
                }
            }
        }

        return ans;
    }
};