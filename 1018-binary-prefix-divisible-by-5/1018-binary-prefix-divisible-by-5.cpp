class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int n = nums.size();
        int div = 0;

        for(int i = 0; i<n; i++){
            div = ((div<<1) + nums[i])%5;
            ans.emplace_back(div == 0);
        }
        return ans;
    }
};