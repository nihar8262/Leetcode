class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int left = 0;
        int n = fruits.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(baskets[j] != 0){
                    if(fruits[i]<=baskets[j]) {
                        baskets[j] = 0;
                        fruits[i] = 0;
                        break;
                    }
                }
            }
            if(fruits[i] != 0) left++;
        }

        return left;
    }
};