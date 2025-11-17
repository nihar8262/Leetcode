class Solution {
public:
    int numSub(string s) {
        int n = s.size();
        long long total = 0, cnt = 0, mod = 1e9+7;

        for(int i = 0; i<n; i++){
            if(s[i] == '1') cnt++;
            else  cnt = 0;

            total = (total + cnt) % mod;
        }

        return total;
    }
};