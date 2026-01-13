class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;

        for(int i = 0; i<n-1; i++){
            int currX = points[i][0];
            int currY = points[i][1];
            int nextX = points[i+1][0];
            int nextY = points[i+1][1];

            ans += max(abs(nextX - currX), abs(nextY - currY));
        }

        return ans;
    }
};