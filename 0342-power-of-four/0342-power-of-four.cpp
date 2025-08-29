class Solution {
public:
    bool isPowerOfFour(int n) {
        int x = 0;
        long num = pow(4,0);

        while(num<=n){
            if(num == n) return true;
            else x++;

            num = pow(4,x);
        }

        return false;
    }
};