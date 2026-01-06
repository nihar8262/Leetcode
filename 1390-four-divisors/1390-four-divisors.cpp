class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, divisors = 1, sum = 1, j = 1;

        for (int i = 0; i < n; i++) {
            divisors = 0;
            sum = 0;
            j = 1;
            while (j * j <= nums[i]) {
                if (nums[i] % j == 0) {
                    int k = nums[i] / j;
                    divisors++;
                    sum += j;

                    if (j != k) {
                        divisors++;
                        sum += k;
                    }

                    if (divisors > 4)
                        break;
                }
                j += 1;
            }

            if (divisors == 4)
                ans += sum;
        }

        return ans;
    }
};