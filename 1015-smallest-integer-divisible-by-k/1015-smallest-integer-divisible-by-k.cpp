class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int cnt = 0, n = 0;

        while (cnt <= k) {
            n = (n * 10 + 1) % k;
            cnt++;
            if (n == 0)
                return cnt;
        }

        return -1;
    }
};