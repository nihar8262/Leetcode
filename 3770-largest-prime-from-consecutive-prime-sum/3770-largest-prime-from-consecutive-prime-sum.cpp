class Solution {
public:
    bool is_prime(int n) {
        if (n < 2) return false;
        if (n % 2 == 0) return n == 2;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int largestPrime(int n) {
        long long sum = 2;
        int res = 0;
        if (n >= 2) res = 2;

        for (int x = 3; sum + x <= n; x++) {
            if (is_prime(x)) {
                sum += x;
                if (sum <= n && is_prime(sum)) {
                    res = sum;
                }
            }
        }
        return res;
    }
};