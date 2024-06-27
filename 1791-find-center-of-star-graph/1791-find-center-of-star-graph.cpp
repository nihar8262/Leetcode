class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        int m=edges[0].size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[edges[i][j]]++;
            }
            
        }
        int ans;

        for(auto it:mp){
            if(it.second>1) ans=it.first;
        }

        return ans;
    }
};