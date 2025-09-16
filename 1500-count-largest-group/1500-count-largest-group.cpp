class Solution {
public:
    int countLargestGroup(int n) {
        int k = 1,num,maxi=INT_MIN,cnt=0;
        unordered_map<int,int> mp;

        while(k<=n){
            num = k;
            int sum = 0;
            while(num){
                sum += num%10;
                num /=10;
            }
            cout<<sum<<" "; 
            if(mp.find(sum) != mp.end()) mp[sum]++;
            else mp[sum] = 1;
            maxi = max(maxi,mp[sum]);
            k++;
        }

        // for(auto it:mp){
        //     maxi = max(maxi,it.second);
        // }
        for(auto it:mp){
            if(it.second == maxi) cnt++;
        }


        return cnt;
    }
};