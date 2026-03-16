class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;

        if(n == 1) return {-1};

        for(int i = 0; i<n-1; i++){
            int maxi = 0;
            for(int j = i+1; j<n; j++){
                maxi = max(maxi, arr[j]);
            }
            ans.push_back(maxi);
        }

        ans.push_back(-1);

        return ans;
    }
};