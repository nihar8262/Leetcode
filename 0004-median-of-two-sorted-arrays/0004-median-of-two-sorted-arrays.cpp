class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        double median = 0;
        int i = 0, j = 0;
        vector<double> helper;

        while(i<n && j<m){
            if(nums1[i] < nums2[j]){
                helper.push_back(nums1[i]);
                i++;
            }else {
                helper.push_back(nums2[j]);
                j++;
            }
        }

        if(i<n){
            while(i<n) {
                helper.push_back(nums1[i]);
            i++;
            }
        }

        if(j<m) {
            while(j<m){
                helper.push_back(nums2[j]);
            j++;
            }
        }

        for(auto it:helper){
            cout<<it<<" ";
        }

        int k = helper.size() / 2;

        if(helper.size() % 2 == 0) {
            median = (helper[k-1] + helper[k]) / 2;
        } else median = helper[k];

        return median;
    }
};