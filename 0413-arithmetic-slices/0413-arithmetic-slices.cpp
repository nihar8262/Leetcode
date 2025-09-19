class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
         
        int n = nums.size();
        if(n < 3) return 0;
        int i=0;
        int j=1;
        int common_diff = nums[j]-nums[i];
        int k=2;

        int count = 0;

        while(k<n) {
            while(k<n && ((nums[k] - nums[k-1]) == common_diff)) {
                count += k-i-1;
                k++;
            }
            i = k-1;
            j= k;
            if(j<n)common_diff = nums[j]-nums[i];
            k++;
        }

        return count;
    }
};