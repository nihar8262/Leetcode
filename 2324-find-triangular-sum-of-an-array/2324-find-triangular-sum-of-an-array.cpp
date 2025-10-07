class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        int k = n;

        while(k > 1){
            for(int i = 0; i<k-1; i++){
                int sum = nums[i] + nums[i+1];
                if(sum > 9){
                    nums[i] = sum % 10;
                }else {
                    nums[i] = sum;
                }
            }
            k--;
        }

        return nums[0];
    }
};