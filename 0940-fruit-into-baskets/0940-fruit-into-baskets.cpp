class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size(), start = 0;
        int maxi = 0;
        unordered_map<int,int> basket;

        for(int i=0;i<n;i++){
            basket[fruits[i]]++;
            while (basket.size() > 2) {
                basket[fruits[start]]--;
                if (basket[fruits[start]] == 0) {
                    basket.erase(fruits[start]);
                }
                start++;
            }

            maxi = max(maxi, i - start + 1);
            
        }

        return maxi;
    


    }
};