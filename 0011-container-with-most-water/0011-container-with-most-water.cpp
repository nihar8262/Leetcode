class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n-1, res, max_area = INT_MIN;

        while(i<j){
            if(nums[i]>nums[j]){
                res = nums[j] * (j-i);
                j--;
            }else{
                res = nums[i] * (j-i); 
                i++; 
            }
            max_area = max(max_area, res);
        }

        return max_area;
    }
};