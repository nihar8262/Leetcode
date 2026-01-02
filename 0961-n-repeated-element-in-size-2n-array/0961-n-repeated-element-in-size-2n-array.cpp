class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, k = (n/2) - 1;
        sort(nums.begin(), nums.end());

        for(int i = 0; i <= n/2; i++){
            if(nums[i] == nums[i+k]) return nums[i];
        }

        return 0;
    }
};