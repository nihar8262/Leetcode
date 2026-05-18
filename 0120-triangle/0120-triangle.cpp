class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();
    vector<int> next_row = triangle[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            next_row[j] = triangle[i][j] + min(next_row[j], next_row[j + 1]);
        }
    }
    
    return next_row[0];
}
};