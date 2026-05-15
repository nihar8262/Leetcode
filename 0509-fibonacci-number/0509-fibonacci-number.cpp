class Solution {

private:
    int fibonacci(int n, vector<int>& dp){
        if(n<=1) return n;

        if(dp[n] != 0) return dp[n];

        return dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
    }

public:
    int fib(int n) {
        vector<int> dp(n+1, 0);

        return fibonacci(n, dp);
    }
};