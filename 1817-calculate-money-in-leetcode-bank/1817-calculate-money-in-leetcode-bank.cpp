class Solution {
public:
    int totalMoney(int n) {
        int ans = 1, m = 1, add = 1;;

        for(int i = 2; i<=n; i++){
            if(i%7 == 1) {
                m ++;
                add = m;
                ans += add;
            }else{
                add++;
                ans += add;
            }
        }

        return ans;
    }
};