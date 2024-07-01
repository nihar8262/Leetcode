class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int k=3;
        int n=arr.size();

        for(int i=0;i<n;i++){
            if(arr[i]%2!=0) k--;
            else k=3;
            if(k==0) return true;
        }

        return false;
    }
};