class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        vector<vector<int>> vis(m, vector<int>(n,0));
        queue<pair<int, int>> q;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    ans++;
                    q.push({i,j});

                    while(!q.empty()){
                        int r = q.front().first;
                        int c = q.front().second;
                        q.pop();

                        for(int i = 0; i<4; i++){
                            int nrow = r + delrow[i];
                            int ncol = c + delcol[i];

                            if(nrow>=0 && nrow<m &&
                             ncol>=0 && ncol<n &&
                             !vis[nrow][ncol] && 
                             grid[nrow][ncol] == '1'){
                                vis[nrow][ncol] = 1;
                                q.push({nrow, ncol});
                            }
                        }
                    }
                }
            }
        }

        return ans;
    }
};