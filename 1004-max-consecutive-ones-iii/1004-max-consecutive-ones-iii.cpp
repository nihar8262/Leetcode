class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int maxi = 0;
        int zeroCount = 0; // Track zeros in the current window

        for (int right = 0; right < n; right++) {
            if (nums[right] == 0) {
                zeroCount++;
            }

            // If zeros exceed k, shrink the window from the left
            while (zeroCount > k) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            // Calculate the current valid window size
            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};