class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int size = m * n;
        const int MOD = 12345;

        vector<int> arr;
        arr.reserve(size);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr.push_back(grid[i][j] % MOD);
            }
        }

        vector<int> prefix(size, 1), suffix(size, 1);

        for (int i = 1; i < size; i++) {
            prefix[i] = (1LL * prefix[i - 1] * arr[i - 1]) % MOD;
        }

        for (int i = size - 2; i >= 0; i--) {
            suffix[i] = (1LL * suffix[i + 1] * arr[i + 1]) % MOD;
        }

        vector<vector<int>> ans(m, vector<int>(n, 0));

        for (int i = 0; i < size; i++) {
            int val = (1LL * prefix[i] * suffix[i]) % MOD;
            ans[i / n][i % n] = val;
        }

        return ans;
    }
};