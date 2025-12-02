class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int sub1 = true, sub2 = true;

        for(int i = 0; i<n-(2*k)+1; i++){
            for(int j = i; j<i+k-1; j++){
                // cout<<" nums[j] "<< nums[j]<< " nums[j+1] "<< nums[j+1]<<endl;
                if(nums[j] < nums[j+1]) sub1 = true;
                else {
                    sub1 = false;
                    break;
                }
            }
            for(int j = i+k; j< i + 2*k - 1; j++){
                // cout<<" nums[j] "<< nums[j]<< " nums[j+1] "<< nums[j+1]<<endl;
                if(nums[j] < nums[j+1]) sub2 = true;
                else {
                    sub2 = false;
                    break;
                }
            }
            // cout<<"for i "<<i<<" and i+k "<<i+k<<" sub1 "<<sub1<<" sub2 "<<sub2<<endl;  
            if(sub1 && sub2) return true;
        }

        return false;
    }
};