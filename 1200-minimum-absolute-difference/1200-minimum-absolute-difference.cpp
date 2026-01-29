class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int mini = INT_MAX;
        map<pair<int,int>, int> mp;
        sort(arr.begin(), arr.end());

        for(int i = 0; i<arr.size()-1; i++){
            int diff = abs(arr[i] - arr[i+1]);
            mp[{arr[i], arr[i+1]}] = diff;
            mini = min(mini, diff);
        }

        for(auto entry: mp){
            if(entry.second == mini) ans.push_back({entry.first.first, entry.first.second});
        }

        return ans;
    }
};