class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int cnt = 0;
        unordered_map<int,int> mp;

        for(int it:nums){
            mp[it]++;
            if(mp.find(it)!=mp.end()) cnt = mp[it];

            maxi = max(maxi,cnt);
        }

        cnt = 0;

        for(auto it:mp){
            if(it.second == maxi) cnt+=it.second;
        }

        return cnt;
    }
};