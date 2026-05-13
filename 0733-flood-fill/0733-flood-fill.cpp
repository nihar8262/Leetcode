class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int original = image[sr][sc];

        queue<pair<int, int>> q;
        q.push({sr, sc});

        vector<vector<int>> vis(m, vector<int>(n,0));
        vis[sr][sc] = color;
        image[sr][sc] = color;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;

            q.pop();

            for(int i = 0; i<4; i++){
                int nrow = r + delrow[i];
                int ncol = c + delcol[i];

                if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n
                && vis[nrow][ncol] != color && image[nrow][ncol] == original){
                    vis[nrow][ncol] = color;
                    image[nrow][ncol] = color;
                    q.push({nrow, ncol});
                }
            }
        }

        // for(int i = 0; i < m; i++){
        //     for(int j = 0; j < n; j++){
        //         if(vis[i][j] != color && image[i][j] == original){
        //             vis[i][j] = original;
        //         }
        //     }
        // }

        return image;
    }
};