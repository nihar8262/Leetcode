class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int maxi = 0;
        unordered_map<int,int> mp;

        for(int it:nums){
            maxi = max(maxi,++mp[it]);
        }

        int cnt = 0;

        for(auto it:mp){
            if(it.second == maxi) cnt+=it.second;
        }

        return cnt;
    }
};