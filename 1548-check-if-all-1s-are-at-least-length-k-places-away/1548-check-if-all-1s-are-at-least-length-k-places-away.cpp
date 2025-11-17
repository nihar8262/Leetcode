class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0, i = 0, j = 1;

        while (j < n) {
            if (nums[i] == 1) {
                if ((nums[i] == nums[j] == 1) && cnt >= k) {
                    i = j;
                    cnt = -1;
                } else if ((nums[i] == nums[j] == 1) && cnt < k)
                    return false;
                cnt++;
            } else{
                i++;
            }
            j++;
        }

        return true;
    }
};