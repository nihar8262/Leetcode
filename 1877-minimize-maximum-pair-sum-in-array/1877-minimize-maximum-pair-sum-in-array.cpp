class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN; 

        int i = 0, j = n-1;
        sort(nums.begin(), nums.end());

        while(i<j){
            int pair = nums[i] + nums[j];
            maxi = max(maxi, pair);
            i++;
            j--;
        }

        return maxi;
    }
};