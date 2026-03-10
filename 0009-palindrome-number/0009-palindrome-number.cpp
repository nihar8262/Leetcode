class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long res = 0;
        if(n<0) return false;

        while(n){
            res = res * 10 + n%10;
            n /= 10;
        }

        if(res == x) return true;
        else return false;
    }
};