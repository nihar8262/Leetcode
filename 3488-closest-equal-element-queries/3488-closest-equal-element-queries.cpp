class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
         int n = nums.size();

        unordered_map<int, vector<int>> mp;

        // Store indices for each value
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<int> ans;

        for (int q : queries) {
            int val = nums[q];
            vector<int>& pos = mp[val];

            // Only one occurrence
            if (pos.size() == 1) {
                ans.push_back(-1);
                continue;
            }

            // Find current index position in sorted vector
            int idx = lower_bound(pos.begin(), pos.end(), q) - pos.begin();

            int m = pos.size();

            int prev = pos[(idx - 1 + m) % m];
            int next = pos[(idx + 1) % m];

            int d1 = abs(q - prev);
            d1 = min(d1, n - d1);

            int d2 = abs(q - next);
            d2 = min(d2, n - d2);

            ans.push_back(min(d1, d2));
        }

        return ans;
    }
};