class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int cnt = 0;
        unordered_map<int,int> mp;

        for(int it:nums){
            maxi = max(maxi,++mp[it]);
        }

        cnt = 0;

        for(auto it:mp){
            if(it.second == maxi) cnt+=it.second;
        }

        return cnt;
    }
};