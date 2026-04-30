class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> flat;
        int ans = 0;

        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                flat.push_back(grid[i][j]);
            }
        }

        sort(flat.begin(), flat.end());

        int midIdx = (flat.size() - 1) / 2;
        int median = flat[midIdx];

        for(int i = 0; i<flat.size(); i++){
            if(median % x != flat[i] % x) return -1;
            ans += abs(median - flat[i]) / x;
        }

        return ans;

    }
};