class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        map<int, int> mp;

        for(auto it: roads) {
            mp[it[0]]++;
            mp[it[1]]++;
        }

        vector<int> v;
        long long ans =0LL;

        for(int i=0;i<n;i++){
            v.push_back(mp[i]);
        }

        sort(v.begin(),v.end(), greater<int>());
        int x=v.size();

        for(auto i:v){
            ans+=(1LL*x*i);
            x--;
        }

        return ans;
    }
};