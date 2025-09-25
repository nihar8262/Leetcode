class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
        int cnt = 0, i = 0, j, maxi = INT_MIN;
        bool e = false, o = false;

        while(i<n) {
            cnt = 0;
            if(nums[i]%2 == 0 && nums[i]<=threshold){
                cnt++;
                e = true;
                o = false;
                j = i+1;
                while(j<n && nums[j]<=threshold && nums[j-1] % 2 != nums[j]%2){
                    if(e && nums[j]%2 != 0) {
                        cnt++;
                        e = false;
                        o = true;
                    }
                    else if(o && nums[j]%2 == 0){
                        cnt++;
                        e = true;
                        o = false;
                    }else break;
                    j++;
                }
            }
            i++;
            maxi = max(maxi,cnt);
        }

        return maxi;
    }
};