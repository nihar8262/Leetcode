class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        long long total = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                total += grid[i][j];
            }
        }

        long long curr = 0;

        for (int i = 0; i < m - 1; i++) {
            long long rowSum = 0;
            for (int j = 0; j < n; j++) {
                rowSum += grid[i][j];
            }
            curr += rowSum;

            if (curr == total - curr) return true;
        }

        curr = 0;

        for (int j = 0; j < n - 1; j++) {
            long long colSum = 0;
            for (int i = 0; i < m; i++) {
                colSum += grid[i][j];
            }
            curr += colSum;

            if (curr == total - curr) return true;
        }

        return false;
    }
};