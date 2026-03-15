class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxi = INT_MIN;

        for(int it:nums){
            if(sum < 0 ) sum = 0;
            sum += it;
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};