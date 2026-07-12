class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        unordered_map<int, int> mp;

        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());

        int n = arr.size();

        for(int i=0; i<temp.size(); i++){
            mp[temp[i]] = i+1;
        }

        for(int i = 0; i<n; i++){
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};