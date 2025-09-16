class Solution {
public:
    int countLargestGroup(int n) {
        int num,maxi=0,cnt=0;
        unordered_map<int,int> mp;

        for(int i=1;i<=n;i++){
            num = i;
            int sum = 0;
            while(num){
                sum += num%10;
                num /=10;
            }
            mp[sum]++;
            maxi = max(maxi,mp[sum]);
        }
        for(auto it:mp){
            if(it.second == maxi) cnt++;
        }


        return cnt;
    }
};