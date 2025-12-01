class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0, sum = 0;

        for(auto it:nums){
            sum += it;
        }

        while(sum%k != 0){
            sum--;
            ans++;
        }

        return ans;
    }
};