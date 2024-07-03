class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=0,maxi=0,mini=INT_MAX;
        sort(nums.begin(),nums.end());

        if(n<=4) return 0;
        
        mini = min(mini, nums[n-4] - nums[0]);
        mini = min(mini, nums[n-1] - nums[3]);
        mini = min(mini, nums[n-2] - nums[2]);
        mini = min(mini, nums[n-3] - nums[1]);

        return mini;
    }
};