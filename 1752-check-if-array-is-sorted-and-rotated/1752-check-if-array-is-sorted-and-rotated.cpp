class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool ans = false, rotation = false;
        int rotation_idx ;
        vector<int> nums2;

        for(int i = 1; i<n; i++){
            if(nums[i-1] <= nums[i]) continue;
            else {
                rotation = true;
                rotation_idx = i;
            }
        }

        if(rotation){
            for(int i = rotation_idx; i<n; i++){
                nums2.push_back(nums[i]);
            }
            for(int i = 0; i< rotation_idx; i++){
                nums2.push_back(nums[i]);
            }
        }

        for(int i = 1; i<nums2.size(); i++){
            if(nums2[i-1] <= nums2[i]) continue;
            else return false;
        }

        return true;

    }
};