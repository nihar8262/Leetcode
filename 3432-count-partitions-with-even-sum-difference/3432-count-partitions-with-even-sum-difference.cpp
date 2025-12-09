class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int count = 0, sum1, sum2;

        for(int i = 0; i<n-1; i++){
            sum1 = 0, sum2 = 0;
            for(int j = 0; j<=i; j++){
                sum1 += nums[j];
            }
            for(int k = i+1; k<n; k++){
                sum2 += nums[k];
            }
            sum1 = sum1 - sum2;

            if(sum1%2 == 0) count++;
        }

        return count;
    }
};