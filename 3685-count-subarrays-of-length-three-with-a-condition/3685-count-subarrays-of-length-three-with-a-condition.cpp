class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for(int i = 1;i<n-1;i++){
            float num = float(nums[i])/2;
            if(nums[i-1] + nums[i+1] == num) {
                cnt++;
            }
                cout<<i<<" "<<num<<endl;
        }

        return cnt;
    }
};