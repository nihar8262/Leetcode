class Solution {
public:
    int mirrorDistance(int n) {
        int k = n, mirror_num = 0, distance;

        while(k){
           mirror_num = mirror_num * 10 + k%10;
           k/=10;
        }

        distance = abs(mirror_num - n);
        return distance;
    }
};