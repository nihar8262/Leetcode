class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
         
        int n = nums.size();
        int count = 0;

        for(int i=0; i<(n-2); i++){
            int common_d = nums[i+1]-nums[i];
            for(int j=i+2; j<n; j++){
                if((nums[j]-nums[j-1]) == common_d) {
                    count++;
                }else{
                    break;
                }
            }
        }

        return count;
    }
};