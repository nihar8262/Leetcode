class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX,distance;

        for(int i = 0; i<n-2; i++){
            bool flag = false;
            for(int j = i+1; j<n-1; j++){
                for(int k = j+1; k<n; k++){
                    if(nums[i] == nums[j] && nums[j] == nums[k]) {
                        distance = abs(i - j) + abs(j - k) + abs(i - k);
                        ans = min(ans, distance);
                    }
                }
            }
        }

        return ans != INT_MAX ? ans : -1;
    }
};