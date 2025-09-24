class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1 ){
            return 0;
        }
      
        sort(nums.begin(),nums.end());
        int op=INT_MAX;

        for(int i=0;i+k-1 < n;i++){
            int j = i+k-1;
            int diff = nums[j]-nums[i];
            if(diff < op){
                op = diff;
            }

        }
        return op;

        


    }
};