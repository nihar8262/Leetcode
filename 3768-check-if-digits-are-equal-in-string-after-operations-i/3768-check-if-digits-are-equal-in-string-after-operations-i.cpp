class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();

        while (n != 2) {
            for (int i = 0; i < n - 1; i++) {
                int p = s[i] - '0';
                int q = s[i + 1] - '0';

                p = (p + q) % 10;
                s[i] = char(p);
            }
            n--;
        }

        if(s[0] == s[1]) return true;
        else return false;
    }
};