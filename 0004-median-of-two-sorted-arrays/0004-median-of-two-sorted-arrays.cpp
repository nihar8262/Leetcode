class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        double ans;

        int i = 0, j = 0;
        vector<double> sorted;

        while(i<m && j <n) {
            if(nums1[i] < nums2[j]){
                sorted.push_back(nums1[i]);
                i++;
            }else {
                sorted.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m){
            sorted.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            sorted.push_back(nums2[j]);
            j++;
        }

        int median = (m+n)/2;

        if((m + n)%2 == 0){
            ans = (sorted[median] + sorted[median - 1])/2;
        }else ans = sorted[median];

        return ans;
    }
};