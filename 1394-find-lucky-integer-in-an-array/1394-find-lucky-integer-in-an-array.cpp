class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        int ans = -1;

        for(auto it:arr){
            mp[it]++;
        }

        for(auto it:mp){
            if(it.first == it.second) {
                if(ans < it.first) ans = it.first;
            }
        }

        return ans;
    }
};