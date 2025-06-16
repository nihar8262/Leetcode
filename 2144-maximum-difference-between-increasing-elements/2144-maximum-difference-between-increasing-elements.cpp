class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = 0, max_diff = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                diff = nums[j]-nums[i];
                if(diff>max_diff) max_diff = diff;
            }
        }
        if(max_diff==0) return -1;

        else return max_diff;
    }
};