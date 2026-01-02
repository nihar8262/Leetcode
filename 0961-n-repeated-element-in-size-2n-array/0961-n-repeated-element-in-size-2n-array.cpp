class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n-1; i++){
            if(cnt == (n/2)-1) return nums[i];

            if(nums[i] == nums[i+1]) cnt++;
            else cnt = 0;
        }
        if(cnt == (n/2)-1) return nums[n-1];

        return 0;
    }
};