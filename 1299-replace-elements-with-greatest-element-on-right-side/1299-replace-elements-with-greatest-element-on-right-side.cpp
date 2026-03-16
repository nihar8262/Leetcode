class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);

        if(n == 1) return {-1};

        
        int maxi = 0;

        for(int i=n-1; i>=0; i--){
            if(i == n-1) ans[i] = -1;
            else ans[i] = maxi;

            maxi = max(maxi, arr[i]);
        }

        return ans;
    }
};