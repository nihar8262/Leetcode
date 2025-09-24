class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int p = k, i = 0, j = 0, sum = 0, cnt = 0;
        int n = s.size();

        if(n == 1 || k == n) return 1;

        while(i<=n-k){
            sum = 0;
            p = k;
            while(p--){
                int c = s[j] - '0';
                sum = sum * 10 + c;
                j++;
            }
            if(sum > 0  && num % sum == 0) cnt++;
            i++;
            j = i;
        }

        return cnt;
    }
};