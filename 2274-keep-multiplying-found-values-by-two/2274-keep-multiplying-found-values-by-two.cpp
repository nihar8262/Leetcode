class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size(), prev = original;

        for(int i = 0; i < n; i++){
            for(int j = 0; j<n; j++){
                if(nums[j] == original) {
                    original = 2 * original ;
                    break;
                }
            }
            if(prev == original) break;
            else prev = original;
        }

        return original;
    }
};