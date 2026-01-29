class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int mini = INT_MAX;
        map<pair<int,int>, int> mp;
        sort(arr.begin(), arr.end());

        for(int i = 0; i<arr.size()-1; i++){
            mp[{arr[i], arr[i+1]}] = abs(arr[i] - arr[i+1]);
            mini = min(mini, abs(arr[i] - arr[i+1]));
        }

        for(auto entry: mp){
            if(entry.second == mini) ans.push_back({entry.first.first, entry.first.second});
        }

        return ans;
    }
};