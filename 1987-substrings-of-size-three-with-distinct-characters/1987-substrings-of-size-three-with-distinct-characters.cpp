class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int  i = 0, j = 0, k = 0, cnt = 0;
        unordered_map<char,int> mp;

        while(i<n-2 && j<n){
            if(mp[s[j]] == 0 && k<3){
                mp[s[j]]++;
                k++;
                j++;
                if(k == 3) cnt++;
            }else {
                i++;
                j = i;
                k=0;
                mp.clear();
            }
        }

        return cnt;
    }
};