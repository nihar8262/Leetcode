class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left,right,ans;
        int n=nums.size();
        int leftsum=0,rightsum=0;
        for(int i=0;i<n;i++){
            left.push_back(leftsum);
            right.push_back(rightsum);
            leftsum+=nums[i];
            rightsum+=nums[n-i-1];
        }
        reverse(right.begin(),right.end());

        for(int i=0;i<left.size();i++){
            int sum=abs(left[i]-right[i]);
            ans.push_back(sum);
        }

        return ans;
    }
};