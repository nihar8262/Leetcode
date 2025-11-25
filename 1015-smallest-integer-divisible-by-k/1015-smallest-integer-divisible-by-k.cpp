class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int cnt = 0, rem = 0;

        while (cnt <= k) {
            rem = (rem * 10 + 1) % k;
            cnt++;
            if (rem == 0)
                return cnt;
        }

        return -1;
    }
};