class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int max_dis = INT_MIN, k = n - 1;

        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j >= 0; j--) {
                if (colors[i] != colors[j]) {
                    max_dis = max(max_dis, j - i);
                }
            }
        }

        return max_dis;
    }
};