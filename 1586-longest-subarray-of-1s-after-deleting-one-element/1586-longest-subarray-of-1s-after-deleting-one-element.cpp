class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int cnt = 0, k = 1, maxi = INT_MIN, zero = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            cnt = 0;
            k = 1;
            for (int j = i; j < n; j++) {
                if (nums[j] == 1)
                    cnt++;
                else if (nums[j] == 0 && k == 1) {
                    k--;
                    zero++;
                } else if (nums[j] == 0 && k == 0) {
                    zero++;
                    maxi = max(maxi, cnt);
                    k = 1;
                    cnt = 0;
                    break;
                }
            }
            maxi = max(maxi, cnt);
        }
        if(zero == 0) maxi = maxi -1;

        return maxi;
    }
};