class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX, distance;
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        for (auto it : mp) {
            vector<int> arr = it.second;

            if (arr.size() >= 3) {
                for (int i = 0; i < arr.size() - 2; i++) {
                    distance = abs(arr[i] - arr[i + 1]) +
                               abs(arr[i + 1] - arr[i + 2]) +
                               abs(arr[i] - arr[i + 2]);
                    ans = min(ans, distance);
                }
            }
        }

        return ans != INT_MAX ? ans : -1;
    }
};