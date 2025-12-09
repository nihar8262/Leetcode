class Solution {
public:
    int countOdds(int low, int high) {
        int res = 0;
        if(low%2 == 0) low++;

        for(int i = low; i <= high; i+=2){
            if(i%2 != 0) res++;
        }

        return res;
    }
};