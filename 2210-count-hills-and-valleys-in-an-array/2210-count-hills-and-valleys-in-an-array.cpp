class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int hill = 0, valley = 0;

        for(int i = 1; i<n-1; i++){
            int j = i-1, k = i+1;

            if(nums[j] == nums[i]) continue;

            while(j>0 || k<n){
                while(j>0 && (nums[j] == nums[i])) j--;
                while(k<n && (nums[k] == nums[i])) k++;
                if(j<0 || k>=n) break;

                if((nums[i] > nums[j]) && nums[i] > nums[k]){
                    hill++;
                    break;
                }
                else if((nums[i] < nums[j]) && nums[i] < nums[k]) {
                    valley++;
                    break;
                }else break;

            }
        }

        return hill+valley;
    }
};