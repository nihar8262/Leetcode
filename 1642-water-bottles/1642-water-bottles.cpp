class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles, empty = numBottles, empty_bt;

        while(empty >= numExchange){
            empty_bt = empty % numExchange;
            int used = empty / numExchange;
            ans += used;
            empty = empty_bt + used;
        }

        return ans;
    }
};