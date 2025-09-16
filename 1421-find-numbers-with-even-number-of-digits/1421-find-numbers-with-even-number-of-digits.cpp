class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size(),digit = 0, cnt = 0;

        for(int i=0;i<n;i++){
            int k = nums[i];
            digit = 0;

            while(k){
                digit++;
                k /= 10;
            }
            // cout<<nums[i]<<" "<<digit<<" ";

            if(digit%2 == 0) cnt++;
        }

        return cnt;
    }
};