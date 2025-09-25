class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX, size = 0 ;

        for(int i = 0; i<n; i++){
            int x = nums[i];
            cout<<"x "<<x<<endl;
            for(int j = i ; j<n; j++){
                int y = nums[j];
                int p = x | y;
                x = p;
                cout<<x<<" ";
                if(x >= k) {
                    size = j - i + 1;
                    ans = min(ans, size);
                    break;
                }
            }
            cout<<endl;
        }
        if(ans == INT_MAX ) return -1;
        else return ans;
    }
};