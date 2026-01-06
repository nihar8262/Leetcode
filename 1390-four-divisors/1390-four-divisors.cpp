class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, divisiors = 1, sum = 1,  j = 1;

        for(int i=0; i<n; i++){
            divisiors = 1;
            sum = 1;
            j=2;
            while(j<=nums[i]){
                if(divisiors > 4 ) break;
                if(nums[i]%j == 0){
                    divisiors++;
                    sum += j;
                } 
                j+=1;
            }

            if(divisiors == 4) ans += sum;
        }

        return ans;
    }
};