class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long ans = 0;
        int p = 0;

        while(n){
            if(n%10){
                ans = (n%10)*pow(10,p) + ans;
                sum += n%10;
                p++;
            }
            n /= 10;
        }

        return sum*ans;
    }
};