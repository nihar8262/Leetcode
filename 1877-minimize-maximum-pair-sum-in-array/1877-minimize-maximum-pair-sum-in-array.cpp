class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN; 

        int i = 0, j = n-1;
        sort(nums.begin(), nums.end());

        while(i<j){
            maxi = max(maxi, nums[i] + nums[j]);
            i++;
            j--;
        }

        return maxi;
    }
};