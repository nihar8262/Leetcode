class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i] == nums2[j]) mp[nums1[i]]++;
            }
        }

        for(auto it:mp){
            ans.push_back(it.first);
        }

        return ans;
    }
};