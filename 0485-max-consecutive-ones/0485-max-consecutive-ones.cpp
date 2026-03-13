class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ones = 0, maxi = INT_MIN;

        for(int i = 0; i< n; i++){
            if(nums[i] == 1) ones++;
            else ones = 0;

            maxi = max(maxi, ones);
        }

        return maxi;
    }
};