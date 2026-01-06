class Solution {
public:

    
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, divisors = 1, sum = 1,  j = 1;

        for(int i=0; i<n; i++){
            divisors = 1;
            sum = 1;
            j=2;
            while(j<=nums[i]){
                if(divisors > 4) break;
                else{
                    if(nums[i]%j == 0){
                    divisors++;
                    sum += j;
                } 
                j+=1;
                }
            }

            if(divisors == 4) ans += sum;
        }

        return ans;
    }
};