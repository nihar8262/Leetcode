class Solution {

private: 
    void dfs(int node, vector<int> adjls[], vector<int> &vis){
        vis[node] = 1;

        for(auto it: adjls[node]){
            if(!vis[it]) dfs(it, adjls, vis);
        }
    }    
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int> adjls[v];
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }

        vector<int> vis(v,0);
        int ans = 0;

        for(int i = 0; i<v; i++){
            if(!vis[i]){
                dfs(i, adjls,vis);
                ans++;
            }
        }

        return ans;
    }
};