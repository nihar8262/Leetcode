class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0,diff;
        int n = nums.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                diff = abs(nums[i]-nums[j]);
                if(diff == k) ans++;
            }
        }
        return ans;
    }
};