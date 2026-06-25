class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;
        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }

        double result = 1.0;
        while (exp > 0) {
            if (exp & 1) { // check lowest bit
                result *= x;
            }
            x *= x;    // square base
            exp >>= 1; // shift right (divide by 2)
        }
        return result;
    }
};