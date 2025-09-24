class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int  i = 0, j = 0, k = 0, cnt = 0;
        unordered_map<char,int> mp;

        while(i<n-2 && j<n){
            if(mp[s[j]] == 0 && k<3){
                mp[s[j]]++;
                cout<<s[j]<<" "<<mp[s[j]]<<endl;
                k++;
                j++;
                if(k == 3) cnt++;
            }else {
                cout<<"restart for j "<<j<<" " << s[j] <<endl;
                i++;
                j = i;
                k=0;
                mp.clear();
                cout<<"map size: "<< mp.size()<<" "<<i<< endl;
            }
        }

        return cnt;
    }
};