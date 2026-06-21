class Solution {
public:
    int helper(vector<int>& nums, int mid){
        int n = nums.size();
        int cnt = 1, sumMax = 0;

        for(int i = 0; i<n; i++){
            if(sumMax + nums[i] > mid){
                cnt++;
                sumMax = nums[i];
            }
            else sumMax += nums[i];
        }

        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int sum = 0, ans;
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());

        for(int it:nums){
            sum += it;
        }

        int low = maxi, high = sum;

        while(low<=high){
            int mid = low + (high - low)/2;

            int countMini = helper(nums, mid);

            if(countMini > k) low = mid + 1;
            else high = mid - 1;
        }

        return low;
    }
};