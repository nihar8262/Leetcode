class Solution {
public:
    int mirrorDistance(int n) {
        int k = n;
        long long mirror_dis = 0;

        while(k){
           mirror_dis = mirror_dis * 10 + k%10;
           k/=10;
        }

        return abs((int)mirror_dis - n);;
    }
};