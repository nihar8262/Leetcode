class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x=0;
        long power = pow(2,x);
        while(n>=power){
            if(power==n) return true;
            x++;
            power = pow(2,x);
        }
        return false;
    }
};