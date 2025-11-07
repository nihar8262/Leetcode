class Solution {
public:
    int smallestNumber(int n) {
        int ans, res = 0;

        for(int i = 0; i<11; i++){
            res = res + pow(2,i);
            if(res>=n) {
                ans = res;
                break;
            }
        }

        return ans;
    }
};