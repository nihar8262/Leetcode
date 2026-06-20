class Solution {
public:
    long long helper(vector<int>& piles, int mid){
        int n = piles.size();
        long long sum = 0;
        for(int j = 0; j<n; j++){
            sum += ceil((double)(piles[j])/mid);
        }

        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());

        int low = 1, high = maxi, ans;

        while(low<=high){
            int mid = low + (high - low)/2;
            long long total = helper(piles, mid);

            if(total <= h){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        return ans;
        
    }
};