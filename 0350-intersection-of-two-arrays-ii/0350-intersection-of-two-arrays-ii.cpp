class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n=nums1.size();
        int m=nums2.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums2[j]==nums1[i]) {
                    ans.push_back(nums2[j]);
                    nums2[j]=-1;
                    break;
                }
            }
        }

        return ans;
    }
};