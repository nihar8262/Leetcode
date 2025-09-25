class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN, x, y, mini = 0;

        for(int i = 0; i<n; i++){
            x = nums[i];
            for(int j = 0; j<n; j++){
                y = nums[j];
                int abs_diff = abs(x - y);
                mini = min(x,y);
                if(abs_diff <= mini){
                    int max_xor = (x ^ y);
                    ans = max(ans, max_xor);
                }
            }
        }

        return ans;
    }
};