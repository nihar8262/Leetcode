class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n = nums.size();

        for(int it:nums){
            mpp[it]++;
            if(mpp[it] > n/2) return it;
        }

        return 1;
    }
};