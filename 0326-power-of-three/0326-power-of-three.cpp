class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        long long x = 0,num;

        while(num<=n){
            num = pow(3,x);
            if(num == n) return true;
            x++;
        }

        return false;
    }
};