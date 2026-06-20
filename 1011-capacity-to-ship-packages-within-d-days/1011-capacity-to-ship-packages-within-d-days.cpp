class Solution {
public:
    int helper(vector<int>& weights, int mid){
        int cnt = 1;
        int capacity = 0;
        int n = weights.size();

        for(int j = 0; j<n; j++){
            if(capacity + weights[j]> mid){
                capacity = weights[j];
                cnt++;
            }
            else capacity += weights[j];
        }

        return cnt;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = *max_element(weights.begin(), weights.end());

        int sum = 0;
        for(int it: weights){
            sum += it; 
        }

        int low = maxi, high = sum, ans;

        while(low<=high){
            int mid = low + (high - low)/2;

            int cnt = helper(weights, mid);

            if(cnt<=days){
                ans = mid;
                high = mid - 1;
            }else low = mid + 1;

        }

        return ans;
    }
};